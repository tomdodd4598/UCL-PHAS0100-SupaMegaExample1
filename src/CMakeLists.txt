add_library(ArithmeticLib arithmetic.cpp)
target_include_directories(ArithmeticLib PRIVATE ${MyProject_SOURCE_DIR}/include)

add_library(SupaLib supa.cpp)
target_include_directories(SupaLib PUBLIC ${MyProject_SOURCE_DIR}/include)
target_link_libraries(SupaLib ArithmeticLib)

add_executable(SupaMega main.cpp)
target_link_libraries(SupaMega SupaLib)
