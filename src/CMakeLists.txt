# Use C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

STRING(TOLOWER "${CMAKE_BUILD_TYPE}" CMAKE_BUILD_TYPE_LOWER)
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "debug")
    message(STATUS "Debug mode")

    # SET(CODE_COVERAGE OFF CACHE BOOLEAN "User-specified option to enable coverage reporting")
    # if(CODE_COVERAGE)
    #     message(STATUS "Code Coverage mode")
    #     target_compile_options(hello_world_cppd PRIVATE
    #         -O0        # no optimization
    #         -g         # generate debug info
    #         --coverage # sets all required flags
    #     )
    #     if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    #     target_link_options(hello_world_cppd PRIVATE --coverage)
    #   else()
    #     target_link_libraries(hello_world_cppd PRIVATE --coverage)
    #   endif()
    # endif()
endif()
if(CMAKE_BUILD_TYPE_LOWER STREQUAL "release")
    message(STATUS "Release mode")
ENDIF()
add_executable(
        wordsToNumber
        "${CMAKE_CURRENT_SOURCE_DIR}/app.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/wordsToNumber.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/wordsToNumber.h"
)

message(STATUS "Compiled wordsToNumber")
