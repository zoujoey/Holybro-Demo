# CMake generated Testfile for 
# Source directory: /home/asrl/test_flight_ws_two/src/mavros/mavros
# Build directory: /home/asrl/test_flight_ws_two/build/mavros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(libmavros-frame-conversions-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-frame-conversions-test.gtest.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_gtest/libmavros-frame-conversions-test.txt" "--command" "/home/asrl/test_flight_ws_two/build/mavros/libmavros-frame-conversions-test" "--gtest_output=xml:/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-frame-conversions-test.gtest.xml")
set_tests_properties(libmavros-frame-conversions-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/asrl/test_flight_ws_two/build/mavros/libmavros-frame-conversions-test" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;242;ament_add_gtest;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(libmavros-sensor-orientation-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-sensor-orientation-test.gtest.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_gtest/libmavros-sensor-orientation-test.txt" "--command" "/home/asrl/test_flight_ws_two/build/mavros/libmavros-sensor-orientation-test" "--gtest_output=xml:/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-sensor-orientation-test.gtest.xml")
set_tests_properties(libmavros-sensor-orientation-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/asrl/test_flight_ws_two/build/mavros/libmavros-sensor-orientation-test" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;246;ament_add_gtest;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(libmavros-quaternion-utils-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-quaternion-utils-test.gtest.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_gtest/libmavros-quaternion-utils-test.txt" "--command" "/home/asrl/test_flight_ws_two/build/mavros/libmavros-quaternion-utils-test" "--gtest_output=xml:/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/libmavros-quaternion-utils-test.gtest.xml")
set_tests_properties(libmavros-quaternion-utils-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/asrl/test_flight_ws_two/build/mavros/libmavros-quaternion-utils-test" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;250;ament_add_gtest;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(mavros-router-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros-router-test.gtest.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_gmock/mavros-router-test.txt" "--command" "/home/asrl/test_flight_ws_two/build/mavros/mavros-router-test" "--gtest_output=xml:/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros-router-test.gtest.xml")
set_tests_properties(mavros-router-test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/asrl/test_flight_ws_two/build/mavros/mavros-router-test" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;254;ament_add_gmock;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(mavros-uas-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros-uas-test.gtest.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_gmock/mavros-uas-test.txt" "--command" "/home/asrl/test_flight_ws_two/build/mavros/mavros-uas-test" "--gtest_output=xml:/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros-uas-test.gtest.xml")
set_tests_properties(mavros-uas-test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/asrl/test_flight_ws_two/build/mavros/mavros-uas-test" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;258;ament_add_gmock;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(mavros_py_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros_py_test.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_pytest/mavros_py_test.txt" "--append-env" "PYTHONPATH=/home/asrl/test_flight_ws_two/build/mavros" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/asrl/test_flight_ws_two/src/mavros/mavros/test/mavros_py" "-o" "cache_dir=/home/asrl/test_flight_ws_two/build/mavros/ament_cmake_pytest/mavros_py_test/.cache" "--junit-xml=/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/mavros_py_test.xunit.xml" "--junit-prefix=mavros")
set_tests_properties(mavros_py_test PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/build/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;262;ament_add_pytest_test;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/cppcheck.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/foxy/bin/ament_cppcheck" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/cppcheck.xunit.xml" "--exclude" "./test/*.cpp" "--include_dirs" "/home/asrl/test_flight_ws_two/src/mavros/mavros/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/foxy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/foxy/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/cpplint.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_cpplint/cpplint.txt" "--command" "/opt/ros/foxy/bin/ament_cpplint" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/flake8.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_flake8/flake8.txt" "--command" "/opt/ros/foxy/bin/ament_flake8" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/ros/foxy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/foxy/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/lint_cmake.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/foxy/bin/ament_lint_cmake" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/pep257.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_pep257/pep257.txt" "--command" "/opt/ros/foxy/bin/ament_pep257" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/foxy/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/uncrustify.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/foxy/bin/ament_uncrustify" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/xmllint.xunit.xml" "--package-name" "mavros" "--output-file" "/home/asrl/test_flight_ws_two/build/mavros/ament_xmllint/xmllint.txt" "--command" "/opt/ros/foxy/bin/ament_xmllint" "--xunit-file" "/home/asrl/test_flight_ws_two/build/mavros/test_results/mavros/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/asrl/test_flight_ws_two/src/mavros/mavros" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;274;ament_package;/home/asrl/test_flight_ws_two/src/mavros/mavros/CMakeLists.txt;0;")
subdirs("gtest")
subdirs("gmock")
