#include <Basics/ArrayPairString.h>

#include <iostream>

namespace basics
{
std::pair<double, bool> pairExercise1(double first, bool second)
{
    std::pair<double, bool> PairOne;
    PairOne.first = first;
    PairOne.second = second;
    return PairOne;
    // student code begin
    // student code end
}

std::pair<bool, bool> pairExercise2(int number)
{
    // student code begin
    bool one = (number > 0);
    bool two = (number % 2 == 0);
    return std::make_pair(one, two);
    // student code end
}

std::pair<double, int> pairExercise3(std::pair<int, double> to_swap)
{
    // student code begin
    return std::make_pair(to_swap.second, to_swap.first);
    // student code end
}

std::array<int, 3> arrayExercise1()
{
    // student code begin
    std::array<int, 3> arrayHolder;
    for (std::array<int, 3>::size_type i = 0; i < 3; i++)
    {
        arrayHolder[i] = static_cast<int>(i + 1);
    }

    return arrayHolder;
    // student code end
}

int arrayExercise2(const std::array<int, 3> arg)
{
    return arg[1];
    // student code begin
    // student code end
}

int arrayExercise3(const std::array<int, 3> arg)
{
    return arg.front() + arg.back();
    // student code begin
    // student code end
}

int stringExercise1(std::string arg)
{
    // student code begin
    return static_cast<int>(arg.size());
    // student code end
}

std::string stringExercise2(std::string a, std::string b)
{
    // student code begin
    return a + b;
    // student code end
}

std::string stringExercise3(std::string arg)
{
    // student code begin

    if (!arg.empty())
    {
        arg.replace(0, 1, "Hello");
    }
    return arg;
    // student code end
}

}  // namespace basics
