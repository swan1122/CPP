#include <Basics/Loops.h>

namespace basics
{
int forExercise1()
{
    int sum = 0;
    for (int i = 0; i < 50; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
    // student code begin
    // student code end
}
std::array<std::pair<std::string, std::string>, 2> forExercise2(std::array<std::string, 2> names,
                                                                std::array<std::string, 2> surnames)
{
    std::array<std::pair<std::string, std::string>, 2> pairing;

    for (std::size_t i = 0; i < 2; i++)
    {
        for (std::size_t j = 0; j < 2; j++)
        {
            pairing[i] = std::make_pair(names[i], surnames[i]);
        }
    }

    return pairing;
    // student code begin
    // student code end
}

int whileExercise1(std::array<int, 10> numbers)
{
    // student code begin
    // student code end
    int sum = 0;
    int counter = 0;
    std::size_t index = 0;

    while (index < 10 && sum <= 100)
    {
        sum += numbers[index];
        counter++;
        index++;
    }

    return counter;
}

}  // namespace basics
