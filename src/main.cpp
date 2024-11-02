#include <format>
#include <print>
#include "test.hpp"
#include "lib.hpp"

int main()
{
    auto s = std::format("sada");
    std::println("Test{}{}", NUM, s);
    testLib();
}