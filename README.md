### Bazelification

A playground of bazelified CMake projects using [rules_foreign_cc](https://github.com/bazelbuild/rules_foreign_cc).
So far we have:

- [opencv 4.3](https://docs.opencv.org/4.3.0/index.html)
- [librealsense 2.34](https://intelrealsense.github.io/librealsense/doxygen/index.html)

Build with
```
bazel build //:all
```
