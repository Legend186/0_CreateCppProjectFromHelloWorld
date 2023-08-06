# CMake generated Testfile for 
# Source directory: /home/zy/zyold/04-Projects/01-Cpp/0_CreateCppProjectFromHelloWorld/test
# Build directory: /home/zy/zyold/04-Projects/01-Cpp/0_CreateCppProjectFromHelloWorld/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[Name]=] "test_hello" "COMMAND" "test_hello")
set_tests_properties([=[Name]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/zy/zyold/04-Projects/01-Cpp/0_CreateCppProjectFromHelloWorld/test/CMakeLists.txt;24;add_test;/home/zy/zyold/04-Projects/01-Cpp/0_CreateCppProjectFromHelloWorld/test/CMakeLists.txt;0;")
subdirs("googletest")
