if(EXISTS "/Users/yura_kulakovskyi/Documents/C++/AP/PR6/PR6_2/cmake-build-debug/PR6_1_tests[1]_tests.cmake")
  include("/Users/yura_kulakovskyi/Documents/C++/AP/PR6/PR6_2/cmake-build-debug/PR6_1_tests[1]_tests.cmake")
else()
  add_test(PR6_1_tests_NOT_BUILT PR6_1_tests_NOT_BUILT)
endif()
