package(default_visibility=['//visibility:public'])

load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

filegroup(
    name="all",
    srcs=glob(["**"]),
    visibility=["//visibility:public"]
)

cmake_external(
    name="opencv",
    lib_source=":all",
    cache_entries={
        "BUILD_opencv_apps"      : "OFF",
        "BUILD_opencv_calib3d"   : "ON",
        "BUILD_opencv_core"      : "ON",
        "BUILD_opencv_dnn"       : "ON",
        "BUILD_opencv_features2d": "ON",
        "BUILD_opencv_flann"     : "ON",
        "BUILD_opencv_highgui"   : "ON",
        "BUILD_opencv_imgcodecs" : "ON",
        "BUILD_opencv_imgproc"   : "ON",
        "BUILD_opencv_ml"        : "ON",
        "BUILD_opencv_objdetect" : "ON",
        "BUILD_opencv_photo"     : "ON",
        "BUILD_opencv_python2"   : "OFF",
        "BUILD_opencv_python3"   : "OFF",
        "BUILD_opencv_stitching" : "ON",
        "BUILD_opencv_video"     : "OFF",
        "BUILD_opencv_videoio"   : "OFF",
    },
    shared_libraries=[
        "libopencv_calib3d.so.4.3",
        "libopencv_core.so.4.3",
        "libopencv_dnn.so.4.3",
        "libopencv_features2d.so.4.3",
        "libopencv_flann.so.4.3",
        "libopencv_highgui.so.4.3",
        "libopencv_imgcodecs.so.4.3",
        "libopencv_imgproc.so.4.3",
        "libopencv_ml.so.4.3",
        "libopencv_objdetect.so.4.3",
        "libopencv_photo.so.4.3",
        "libopencv_stitching.so.4.3",
        #"libopencv_video.so.4.3",
        #"libopencv_videoio.so.4.3"
    ],
    postfix_script="ln -s opencv4/opencv2 $$INSTALLDIR$$/include/opencv2",
)
