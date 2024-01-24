#include "../../func.h"
#include <stdio.h>
#include "unity.h"

void setUp(void) {
    // Set up any necessary resources before each test
}

void tearDown(void) {
    // Clean up any resources after each test
}
/*
void test_myPrintHelloMake(void) {
    // Redirect stdout to capture the output
    freopen("test_output.txt", "w", stdout);

    // Call the function to be tested
    myPrintHelloMake();

    // Restore stdout
    fclose(stdout);

    // Assert the expected output
    FILE *fp = fopen("test_output.txt", "r");
    TEST_ASSERT_NOT_NULL(fp);

    char buffer[100];
    fgets(buffer, sizeof(buffer), fp);
    TEST_ASSERT_EQUAL_STRING("Hello makefiles!\n", buffer);

    fclose(fp);
}
*/
void test_funAlwaysFalse(void) {
    // Call the function to be tested
    bool result = funAlwaysFalse();

    // Assert the expected result
    TEST_ASSERT_FALSE(result);
}

void test_funAlwaysTrue(void) {
    // Call the function to be tested
    bool result = funAlwaysTrue();

    // Assert the expected result
    TEST_ASSERT_TRUE(result);
}
