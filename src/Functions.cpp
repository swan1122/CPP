#include <Basics/Functions.h>

namespace basics
{

// student code begin
double mean(const std::array<double, 3> &numbers)
{
    double sum = 0.0;
    for (const double &num : numbers)
    {
        sum += num;
    }
    return sum / static_cast<double>(numbers.size());
};
double celsiusToFahrenheit(double Celsius)
{
    double Fahrenheit = Celsius * (9.0 / 5.0) + 32.0;
    return Fahrenheit;
}
// student code end

}  // namespace basics
