// Thomas Moore
// object_construction
// cs23001
#ifndef OBJ_CONST_HPP
#define OBJ_CONST_HPP

#include <iostream>

class myClass{
public:
    myClass(); // default constructor
    myClass(const myClass&); // copy constructor
    ~myClass(); // destructor
    myClass operator=(const myClass&); // assignment overload
private:

};

#endif
