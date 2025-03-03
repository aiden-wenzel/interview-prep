add_executable(test_name unit-test.cpp)
target_link_libraries(test_name gtest_main)
add_test(test_name test_name)
