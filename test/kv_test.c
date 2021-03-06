#include <ctest.h>

#include <kv.h>

CTEST(solution_of_quadratic_equations, two_root) {
    // Given
    const double a = 1;
    const double b = -3;
    const double c = 2;

    // When
    double x1, x2;
    const double result = kv(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = 1, expected_x2 = 2;
    
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(FOUND_2_ROOT, result);
}

CTEST(solution_of_quadratic_equations, one_root) {
    // Given
    const double a = 4;
    const double b = -12;
    const double c = 9;

    // When
    double x1, x2;
    const double result = kv(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = 1.5;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(solution_of_quadratic_equations, no_root) {
    // Given
    const double a = 15;
    const double b = 1;
    const double c = 9;

    // When
    double x1, x2;
    const double result = kv(a, b, c, &x1, &x2);

    // Then
    ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}

CTEST(solution_of_quadratic_equations, the_coefficients_are_not_correct) {
    // Given
    const double a = 0;
    const double b = 1;
    const double c = 9;

    // When
    double x1, x2;
    const double result = kv(a, b, c, &x1, &x2);

    // Then
    ASSERT_EQUAL(INVALUD_ARGUMENTS, result);
}
