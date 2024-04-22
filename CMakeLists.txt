project(random_combination_generator)

set(lib_name ${project_name}_lib)

add_library(${lib_name} src/random_combination_generator.cpp)
target_include_directories(${lib_name} PUBLIC include)

add_executable(random_combination_generator_manual_test example/manual_test.cpp)
target_link_libraries(random_combination_generator_manual_test PRIVATE ${lib_name})