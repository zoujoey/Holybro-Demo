set(_AMENT_PACKAGE_NAME "libmavconn")
set(libmavconn_VERSION "2.5.0")
set(libmavconn_MAINTAINER "Vladimir Ermakov <vooon341@gmail.com>")
set(libmavconn_BUILD_DEPENDS "python3-empy" "asio" "mavlink" "libconsole-bridge-dev")
set(libmavconn_BUILDTOOL_DEPENDS "ament_cmake")
set(libmavconn_BUILD_EXPORT_DEPENDS "asio" "mavlink" "libconsole-bridge-dev")
set(libmavconn_BUILDTOOL_EXPORT_DEPENDS )
set(libmavconn_EXEC_DEPENDS "asio" "mavlink" "libconsole-bridge-dev")
set(libmavconn_TEST_DEPENDS "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common")
set(libmavconn_GROUP_DEPENDS )
set(libmavconn_MEMBER_OF_GROUPS )
set(libmavconn_DEPRECATED "")
set(libmavconn_EXPORT_TAGS)
list(APPEND libmavconn_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND libmavconn_EXPORT_TAGS "<rosdoc config=\"rosdoc.yaml\"/>")
