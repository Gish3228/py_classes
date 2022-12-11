#include "float.h"


template<class Val1Type, class Val2Type>
bool is_approximatly_equal(const Val1Type& val_1,
                           const Val2Type& val_2,
                           const Float& abs_epsilon = 1e-12,
                           const Float& rel_epsilon = 1e-9)
{
    Float diff = (val_1 - val_2).abs();
    if (diff <= abs_epsilon)
        return true;
    return diff <= (( val_1.abs() < val_2.abs() ?
                      static_cast<Float>(val_2.abs()) :
                      static_cast<Float>(val_1.abs())) * rel_epsilon);
}


Float::Float(const double& value): m_value(value){};


Float::Float(const int& value): m_value(static_cast<double>(value)){};


Float::Float(const Integer& value): m_value(static_cast<double>(value.get())){};


std::ostream& Float::print(std::ostream& out) const
{
    out << m_value;
    return out;
}


double Float::get() const
{
    return m_value;
}


std::string Float::type() const
{
    return "Float";
}


template<class Val1Type, class Val2Type>
bool operator==(const Val1Type& val_1, const Val2Type& val_2)
{
    return is_approximatly_equal(val_1, val_2);
}

template bool operator== <Float, Integer>(const Float&, const Integer&);
template bool operator== <Integer, Float>(const Integer&, const Float&);
template bool operator== <Float, Float>(const Float&, const Float&);


template<class Val1Type, class Val2Type>
bool operator!=(const Val1Type& val_1, const Val2Type& val_2)
{
    return !(val_1 == val_2);
}

template bool operator!= <Float, Integer>(const Float&, const Integer&);
template bool operator!= <Integer, Float>(const Integer&, const Float&);
template bool operator!= <Float, Float>(const Float&, const Float&);


template<class Val1Type, class Val2Type>
bool operator>(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() > val_2.get();
}

template bool operator> <Float, Integer>(const Float&, const Integer&);
template bool operator> <Integer, Float>(const Integer&, const Float&);
template bool operator> <Float, Float>(const Float&, const Float&);
template bool operator> <Integer, Integer>(const Integer&, const Integer&);


template<class Val1Type, class Val2Type>
bool operator>=(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() >= val_2.get();
}

template bool operator>= <Float, Integer>(const Float&, const Integer&);
template bool operator>= <Integer, Float>(const Integer&, const Float&);
template bool operator>= <Float, Float>(const Float&, const Float&);
template bool operator>= <Integer, Integer>(const Integer&, const Integer&);


template<class Val1Type, class Val2Type>
bool operator<=(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() <= val_2.get();
}

template bool operator<= <Float, Integer>(const Float&, const Integer&);
template bool operator<= <Integer, Float>(const Integer&, const Float&);
template bool operator<= <Float, Float>(const Float&, const Float&);
template bool operator<= <Integer, Integer>(const Integer&, const Integer&);


template<class Val1Type, class Val2Type>
Float operator+(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() + val_2.get();
}

template Float operator+ <Float, Integer>(const Float&, const Integer&);
template Float operator+ <Integer, Float>(const Integer&, const Float&);
template Float operator+ <Float, Float>(const Float&, const Float&);


template<class Val1Type, class Val2Type>
Float operator-(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() - val_2.get();
}

template Float operator- <Float, Integer>(const Float&, const Integer&);
template Float operator- <Integer, Float>(const Integer&, const Float&);
template Float operator- <Float, Float>(const Float&, const Float&);


template<class Val1Type, class Val2Type>
Float operator*(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() * val_2.get();
}

template Float operator* <Float, Integer>(const Float&, const Integer&);
template Float operator* <Integer, Float>(const Integer&, const Float&);
template Float operator* <Float, Float>(const Float&, const Float&);


template<class Val1Type, class Val2Type>
Float operator/(const Val1Type& val_1, const Val2Type& val_2)
{
    //if (val_2 == 0)
    //    throw std::string("Division by zero");
    return val_1.get() / val_2.get();
}

template Float operator/ <Float, Integer>(const Float&, const Integer&);
template Float operator/ <Integer, Float>(const Integer&, const Float&);
template Float operator/ <Float, Float>(const Float&, const Float&);


Float Float::abs() const
{
    return Float(std::abs(m_value));
}


// ide немного страдает аутизмом, поэтому в конец файла
template<class Val1Type, class Val2Type>
bool operator<(const Val1Type& val_1, const Val2Type& val_2)
{
    return val_1.get() < val_2.get();
}

template bool operator< <Float, Integer>(const Float&, const Integer&);
template bool operator< <Integer, Float>(const Integer&, const Float&);
template bool operator< <Float, Float>(const Float&, const Float&);
template bool operator< <Integer, Integer>(const Integer&, const Integer&);
