#include "integer.h"
#include "float.h"
#include <iostream>


int main(int argc, char *argv[])
{
    Float a(0.1+0.1+0.1+0.1+0.1+1.5);
    Float b(2);
    Float c = a - b;
    std::cout << (a == b) << c.type();
    return 0;
}
