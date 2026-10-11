add_library(calculator
    calculator/Calculator.cpp
)

target_include_directories(calculator PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(calculator PUBLIC project_coverage)

add_executable(my_app main.cpp)

target_link_libraries(my_app PRIVATE calculator fmt::fmt)
