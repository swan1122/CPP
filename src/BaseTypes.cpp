#include <Basics/BaseTypes.h>

#include <iostream>

namespace basics
{
bool boolExercise1(bool a, bool b)
{
    return (a == true && b == true);

    // student code begin
    // student code end
}

bool boolExercise2(bool a, bool b)
{
    // student code begin
    return (!a && b) || (a && !b);
    // student code end
}

short shortExercise1(short arg)
{
    arg++;
    return arg;
    // student code begin
    // student code end
}

void intExercise1(int arg)
{
    std::cout << arg;
    // student code begin
    // student code end
}

bool intExercise2(int arg)
{
    if (arg >= 10)
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

unsigned int uintExercise1(unsigned int a, unsigned int b)
{
    unsigned int sum = a + b;
    return sum;
    // student code begin
    // student code end
}

unsigned int uintExercise2(unsigned int a, unsigned int b)
{
    return (a < b) ? a : b;
    // student code begin
    // student code end
}

float floatExercise1(float a, float b)
{
    return a * b;
    // student code end
}

float doubleExercise1(float a, float b)
{
    // student code begin
    float one = std::abs(a);
    float two = std::abs(b);
    return (one > two) ? one : two;
    // student code end
}

}  // namespace basics
