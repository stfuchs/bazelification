/*
 * Copyright 2019 Fetch Robotics Inc.
 * Author: Steffen Fuchs
 */

#include <iostream>

#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
  std::cout << "OpenCV version : " << CV_VERSION << std::endl;
  std::cout << "Major version : "  << CV_MAJOR_VERSION << std::endl;
  std::cout << "Minor version : "  << CV_MINOR_VERSION << std::endl;
  std::cout << "Subminor version : " << CV_SUBMINOR_VERSION << std::endl;
  return 0;
}
