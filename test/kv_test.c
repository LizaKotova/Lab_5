#include <ctest.h>

#include <kv.h>

CTEST(solution_of_quadratic_equations, two_root) {
    // Given
    const int a = 1;
    const int b = -3;
    const int c = 2;

    // When
    double x1, x2;
    const int result = kv(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = 1, expected_x2 = 2;
    
    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_DBL_NEAR(expected_x2, x2);
    ASSERT_EQUAL(FOUND_2_ROOT, result);
}

CTEST(solution_of_quadratic_equations, one_root) {
    // Given
    const int a = 4;
    const int b = -12;
    const int c = 9;

    // When
    double x1, x2;
    const int result = kv(a, b, c, &x1, &x2);

    // Then
    const double expected_x1 = 1.5;

    ASSERT_DBL_NEAR(expected_x1, x1);
    ASSERT_EQUAL(FOUND_1_ROOT, result);
}

CTEST(solution_of_quadratic_equations, no_root) {
    // Given
    const int a = 15;
    const int b = 1;
    const int c = 9;

    // When
    double x1, x2;
    const int result = kv(a, b, c, &x1, &x2);

    // Then
    ASSERT_EQUAL(ROOT_NOT_FOUND, result);
}

CTEST(solution_of_quadratic_equations, the_coefficients_are_not_correct) {
    // Given
    const int a = 0;
    const int b = 1;
    const int c = 9;

    // When
    double x1, x2;
    const int result = kv(a, b, c, &x1, &x2);

    // Then
    ASSERT_EQUAL(INVALUD_ARGUMENTS, result);
}