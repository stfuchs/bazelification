/*
 * Copyright 2019 Fetch Robotics Inc.
 * Author: Steffen Fuchs
 */

#include <iostream>

#include <librealsense2/rs.hpp>

int main(int argc, char** argv)
{
  std::cout << "RS API version: " << RS2_API_VERSION_STR << std::endl;
  std::cout << "Major version : " << RS2_API_MAJOR_VERSION << std::endl;
  std::cout << "Minor version : " << RS2_API_MINOR_VERSION << std::endl;
  std::cout << "Patch version : " << RS2_API_PATCH_VERSION << std::endl;
  std::cout << "Build version : " << RS2_API_BUILD_VERSION << std::endl;
  return 0;
}
