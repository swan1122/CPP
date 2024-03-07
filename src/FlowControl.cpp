#include <Basics/FlowControl.h>

#include <iostream>

namespace basics
{
void ifExercise1(int arg)
{
    if (arg > 100)
    {
        double argument = arg;
        std::cout << argument;
    }
    // student code begin
    // student code end
}

bool ifElseExercise1(int arg)
{
    if (arg > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    // student code begin
    // student code end
}

int ifElseIfElseExercise1(int arg)
{
    if (arg < 0)
    {
        return -1;
    }
    else if (arg == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    // student code begin
    // student code end
}

float switchCaseExercise1(float a, char arithmetic_operator, float b)
{
    switch (arithmetic_operator)
    {
        case '*':
            return a * b;
            /* code */
            break;
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '/':
            return a / b;
            break;
        default:
            return 0.0;
            break;
    }
    // student code begin
    // student code end
}

int terneryOperatorExercise1(unsigned int arg)
{
    return (arg % 2 != 0) ? -1 : 1;
    // student code begin
    // student code end
}

}  // namespace basics
