#include <Clearning/factorial.h>

int factorial(int number)
{
    int result = 1;
    
    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }
    
    return result;
}
