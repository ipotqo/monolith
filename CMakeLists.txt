cmake_minimum_required ( VERSION 3.14..3.25 )

project (
    "monolith"
    VERSION
        0.0.0
    DESCRIPTION
        "CMake Structure for Standalone Header"
    LANGUAGES
        C CXX
)

add_executable (
    monolith_test
    monolith_test.cpp
)