#ifndef BASE_TYPE_H
#define BASE_TYPE_H

#include <iostream>

class BaseType
{
public:
    virtual ~BaseType(){};
    virtual std::ostream& print(std::ostream& out) const = 0;
    friend std::ostream& operator<<(std::ostream& out, const BaseType& output);
};

#endif // BASE_TYPE_H
