name="bazelification"
workspace(name=name)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# CMake rule repository
http_archive(
    name="rules_foreign_cc",
    url="https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
    sha256="bcee8e145e75e14ff977935343cfa31d1259daab4414bea3348ac08f41303758",
    strip_prefix="rules_foreign_cc-master",
)
load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")
rules_foreign_cc_dependencies()


# Realsense
http_archive(
    name="realsense",
    url="https://github.com/IntelRealSense/librealsense/archive/v2.34.0.tar.gz",
    sha256="130e38f759dbe420ef531cf7c1587f50161f4f4de4d3b008f569abd6d404dc23",
    build_file="@{}//:realsense.BUILD".format(name),
    strip_prefix="librealsense-2.34.0",
)


# OpenCV
http_archive(
    name="opencv4",
    url="https://github.com/opencv/opencv/archive/4.3.0.tar.gz",
    sha256="68bc40cbf47fdb8ee73dfaf0d9c6494cd095cf6294d99de445ab64cf853d278a",
    build_file="@//:opencv4.BUILD".format(name),
    strip_prefix="opencv-4.3.0",
)
