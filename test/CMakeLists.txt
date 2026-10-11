find_package(GTest CONFIG REQUIRED)

add_executable(calculator_tests
    CalculatorTest.cpp
)

target_link_libraries(calculator_tests PRIVATE
    calculator
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(calculator_tests)
