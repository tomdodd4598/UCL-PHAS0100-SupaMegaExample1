add_library(ArithmeticLib arithmetic.cpp)
target_include_directories(ArithmeticLib PRIVATE ${IncludeDir})

add_library(SupaLib supa.cpp)
target_include_directories(SupaLib PUBLIC ${IncludeDir})
target_link_libraries(SupaLib PUBLIC ArithmeticLib)

add_executable(SupaMega main.cpp)
target_link_libraries(SupaMega PRIVATE SupaLib)
