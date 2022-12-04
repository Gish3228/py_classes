#include "base_type.h"

std::ostream& operator<<(std::ostream& out, const BaseType& output)
{
    return output.print(out);
}
