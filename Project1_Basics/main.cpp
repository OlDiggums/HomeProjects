#include <iostream>
#include "Sphere.h"
#include "Camera.h"
#include <fstream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

int main() {
    std::cout << "Starting" << std::endl;
    //Constructor Test1
    Sphere mySphere  = Sphere();

    Camera cam = Camera();
    int** img = cam.CaptureImage(mySphere); // Refactor to work with opencv images..........

    std::cout << "Done" << std::endl;
//
//    std::string image_path = cv::samples::findFile("fire.jpg");
//    cv::Mat img2 = imread(image_path, cv::IMREAD_COLOR);
//    if(img2.empty())
//    {
//        std::cout << "Could not read the image: " << image_path << std::endl;
//        return 1;
//    }
//    imshow("Display window", img2);
//    int k = cv::waitKey(0); // Wait for a keystroke in the window

    return 0;
}
