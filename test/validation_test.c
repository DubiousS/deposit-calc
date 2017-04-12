#include <main.h>
#include <ctest.h>

CTEST(arithmetic_suite, income_second_if_dataFwasd)
{
    const int income_test = 100;
    const int data_test = 555;
    const int result = calc(income_test, data_test);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, income_second_if_dataFq)
{
    const int income_test = 100;
    const int data_test = 985;
    const int result = calc(income_test, data_test);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(arithmetic_suite, income_second_if_dataFw)
{
    const int income_test = 194546;
    const int data_test = 985;
    const int result = calc(income_test, data_test);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, income_second_if_dataFwe)
{
    const int income_test = 5;
    const int data_test = 555;
    const int result = calc(income_test, data_test);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}