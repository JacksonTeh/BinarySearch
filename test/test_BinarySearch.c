#include "unity.h"
#include "BinarySearch.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_binarySearch_given_target_4_and_4_elements_array_should_return_index_1(void)
{
	int array[] = {2, 4, 6, 8};
    int result;

    result = binarySearch(4, array, 0, 3);
    printf("\n");

    TEST_ASSERT_EQUAL(1, result);
}

void test_binarySearch_given_target_2_and_4_elements_array_should_return_index_0(void)
{
	int array[] = {2, 4, 6, 8};
    int result;

    result = binarySearch(2, array, 0, 3);
    printf("\n");

    TEST_ASSERT_EQUAL(0, result);
}

void test_binarySearch_given_target_8_and_4_elements_array_should_return_index_3(void)
{
	int array[] = {2, 4, 6, 8};
    int result;

    result = binarySearch(8, array, 0, 3);
    printf("\n");

    TEST_ASSERT_EQUAL(3, result);
}

void test_binarySearch_given_target_3_and_4_elements_array_should_return_negative_1(void)
{
	int array[] = {2, 4, 6, 8};
    int result;

    result = binarySearch(3, array, 0, 3);
    printf("\n");

    TEST_ASSERT_EQUAL(-1, result);
}

void test_binarySearch_given_target_7_and_4_elements_array_should_return_negative_1(void)
{
	int array[] = {2, 4, 6, 8};
    int result;

    result = binarySearch(7, array, 0, 3);
    printf("\n");

    TEST_ASSERT_EQUAL(-1, result);
}

void test_binarySearch_given_target_10_and_9_elements_array_should_return_5(void)
{
	int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int result;

    result = binarySearch(10, array, 0, 9);
    printf("\n");

    TEST_ASSERT_EQUAL(4, result);
}

void test_binarySearch_given_target_3_and_9_elements_array_should_return_negative_1(void)
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int result;

    result = binarySearch(3, array, 0, 9);
    printf("\n");

    TEST_ASSERT_EQUAL(-1, result);
}

void test_binarySearch_given_target_17_and_9_elements_array_should_return_negative_1(void)
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int result;

    result = binarySearch(17, array, 0, 9);
    printf("\n");

    TEST_ASSERT_EQUAL(-1, result);
}