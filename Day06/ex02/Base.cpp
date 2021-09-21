#include "Base.hpp"

Base * generate(void){
    std::srand(std::time(NULL));

    int a = std::rand() % 3;
    switch (a)
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
            break;
        default :
            return NULL;
    }
}

void identify(Base* p){
    A *a = dynamic_cast<A *>(p);
    if (a)
        std::cout << "A" << std::endl;
    else{
            B *b = dynamic_cast<B *>(p);
            if (b)
                std::cout << "B" << std::endl;
            else{
                    C *c = dynamic_cast<C *>(p);
                    if (c)
                        std::cout << "C" << std::endl;
                    else
                        std::cout << "No matching Class" << std::endl;
                }
        }
}

void identify(Base& p){
    try{
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        delete &a;
    }
    catch(std::bad_cast &e){
        try{
            B &b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
            delete &b;
        }
        catch(std::bad_cast &e){
            try{
                C &c = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
                delete &c;
            }
            catch(std::bad_cast &e){
                std::cout << e.what() << "\n";
                std::cout << "No matching Class " << e.what() << std::endl;
            }
        }
    }
}