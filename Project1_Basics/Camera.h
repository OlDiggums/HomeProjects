//
// Created by jacob on 4/16/2022.
//

#ifndef PROJECT1_BASICS_CAMERA_H
#define PROJECT1_BASICS_CAMERA_H
#include "Vector3.h"
#include "Sphere.h"

class Camera {
public:
    Vector3 position;
    Vector3 imgPlane;
    int width;
    int height;

    Camera();
    int** CaptureImage(Sphere inp);
    Vector3 GetDirection(int px,int py);

private:
    float FOV;
    float aspectRatio;

};


#endif //PROJECT1_BASICS_CAMERA_H
