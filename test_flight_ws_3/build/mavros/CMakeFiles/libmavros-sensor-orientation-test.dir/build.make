# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros

# Include any dependencies generated for this target.
include CMakeFiles/libmavros-sensor-orientation-test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/libmavros-sensor-orientation-test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/libmavros-sensor-orientation-test.dir/flags.make

CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o: CMakeFiles/libmavros-sensor-orientation-test.dir/flags.make
CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o: /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros/test/test_sensor_orientation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o -c /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros/test/test_sensor_orientation.cpp

CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros/test/test_sensor_orientation.cpp > CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.i

CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros/test/test_sensor_orientation.cpp -o CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.s

# Object files for target libmavros-sensor-orientation-test
libmavros__sensor__orientation__test_OBJECTS = \
"CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o"

# External object files for target libmavros-sensor-orientation-test
libmavros__sensor__orientation__test_EXTERNAL_OBJECTS =

libmavros-sensor-orientation-test: CMakeFiles/libmavros-sensor-orientation-test.dir/test/test_sensor_orientation.cpp.o
libmavros-sensor-orientation-test: CMakeFiles/libmavros-sensor-orientation-test.dir/build.make
libmavros-sensor-orientation-test: gtest/libgtest_main.a
libmavros-sensor-orientation-test: gtest/libgtest.a
libmavros-sensor-orientation-test: libmavros.so
libmavros-sensor-orientation-test: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/mavros_msgs/lib/libmavros_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/mavros_msgs/lib/libmavros_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/mavros_msgs/lib/libmavros_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/mavros_msgs/lib/libmavros_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/mavros_msgs/lib/libmavros_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libsensor_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeographic_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeographic_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeographic_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeographic_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeographic_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libdiagnostic_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libdiagnostic_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libdiagnostic_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libdiagnostic_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatic_transform_broadcaster_node.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomponent_manager.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_ros.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0
libmavros-sensor-orientation-test: /home/asrl/Holybro-Demo/test_flight_ws_3/install/libmavconn/lib/libmavconn.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_runtime_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomponent_manager.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libament_index_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libclass_loader.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libcomposition_interfaces__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_ros.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libmessage_filters.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librclcpp_action.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librclcpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_action.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libyaml.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtracetools.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librmw_implementation.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcl_logging_spdlog.so
libmavros-sensor-orientation-test: /usr/local/lib/libspdlog.a
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librmw.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstatic_transform_broadcaster_node.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libtf2_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_typesupport_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcpputils.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librosidl_runtime_c.so
libmavros-sensor-orientation-test: /opt/ros/foxy/lib/librcutils.so
libmavros-sensor-orientation-test: /usr/lib/x86_64-linux-gnu/libGeographic.so
libmavros-sensor-orientation-test: CMakeFiles/libmavros-sensor-orientation-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable libmavros-sensor-orientation-test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libmavros-sensor-orientation-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/libmavros-sensor-orientation-test.dir/build: libmavros-sensor-orientation-test

.PHONY : CMakeFiles/libmavros-sensor-orientation-test.dir/build

CMakeFiles/libmavros-sensor-orientation-test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/libmavros-sensor-orientation-test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/libmavros-sensor-orientation-test.dir/clean

CMakeFiles/libmavros-sensor-orientation-test.dir/depend:
	cd /home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros /home/asrl/Holybro-Demo/test_flight_ws_3/src/mavros/mavros /home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros /home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros /home/asrl/Holybro-Demo/test_flight_ws_3/build/mavros/CMakeFiles/libmavros-sensor-orientation-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/libmavros-sensor-orientation-test.dir/depend
