add_test( HelloTest.BasicAssertions /home/karlo/Escritorio/TO/stack/my_project/build/hello_test [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY /home/karlo/Escritorio/TO/stack/my_project/build)
set( hello_test_TESTS HelloTest.BasicAssertions)
