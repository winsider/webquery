add_executable(webquery webquery.cpp)
target_compile_features(webquery PRIVATE cxx_std_17)

#target_link_libraries(webquery PRIVATE modern_library fmt::fmt)
