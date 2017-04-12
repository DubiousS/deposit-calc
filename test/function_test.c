#include <main.h>
#include <ctest.h>

CTEST(arithmetic_suite, income_second_if_dataFirst)
{
    const int income_test = 100;
    const int data_test = 10;
    const int result = calc(income_test, data_test);
    const float expected = 90;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataSecond)
{
    const int income_test = 150;
    const int data_test = 150;
    const int result = calc(income_test, data_test);
    const float expected = 162;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataThree)
{
    const int income_test = 999;
    const int data_test = 200;
    const int result = calc(income_test, data_test);
    const float expected = 1078.92;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataFour)
{
    const int income_test = 256;
    const int data_test = 21;
    const int result = calc(income_test, data_test);
    const float expected = 230.40;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataFive)
{
    const int income_test = 654;
    const int data_test = 256;
    const int result = calc(income_test, data_test);
    const float expected = 752.10;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataSeven)
{
    const int income_test = 175;
    const int data_test = 157;
    const int result = calc(income_test, data_test);
    const float expected = 189.00;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataEight)
{
    const int income_test = 654;
    const int data_test = 10;
    const int result = calc(income_test, data_test);
    const float expected = 588.60;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataNine)
{
    const int income_test = 354;
    const int data_test = 359;
    const int result = calc(income_test, data_test);
    const float expected = 407.10;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}
CTEST(arithmetic_suite, income_second_if_dataTen)
{
    const int income_test = 1000;
    const int data_test = 189;
    const int result = calc(income_test, data_test);
    const float expected = 1080;
    ASSERT_DBL_NEAR_TOL(expected, result, 1);
}