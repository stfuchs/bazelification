package(default_visibility=['//visibility:public'])

load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

filegroup(
    name="all",
    srcs=glob(["**"]),
    visibility=["//visibility:public"]
)

cmake_external(
    name="realsense",
    lib_source=":all",
    cache_entries={
        "ENABLE_CCACHE": "OFF",
    },
    shared_libraries=[
        "librealsense2-gl.so",
        "librealsense2.so"
    ],
    binaries=[
        "realsense-viewer",
        "rs-align",
        "rs-align-advanced",
        "rs-ar-advanced",
        "rs-ar-basic",
        "rs-benchmark",
        "rs-callback",
        "rs-capture",
        "rs-color",
        "rs-convert",
        "rs-data-collect",
        "rs-depth",
        "rs-depth-quality",
        "rs-distance",
        "rs-enumerate-devices",
        "rs-fw-logger",
        "rs-fw-update",
        "rs-gl",
        "rs-hello-realsense",
        "rs-measure",
        "rs-motion",
        "rs-multicam",
        "rs-pointcloud",
        "rs-pose",
        "rs-pose-and-image",
        "rs-pose-predict",
        "rs-post-processing",
        "rs-record",
        "rs-record-playback",
        "rs-rosbag-inspector",
        "rs-save-to-disk",
        "rs-sensor-control",
        "rs-software-device",
        "rs-terminal",
        "rs-tracking-and-depth",
        "rs-trajectory"
    ],
)
