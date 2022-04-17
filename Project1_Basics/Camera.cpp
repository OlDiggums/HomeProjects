//
// Created by jacob on 4/16/2022.
//

#include <iostream>
#include "Camera.h"

Camera::Camera() {
    position = Vector3(0,0,0);
    imgPlane = Vector3(0,0,-1);
    width = 1920;
    height = 1080;
    aspectRatio = width/(float)height;
    FOV = 90;

}

int** Camera::CaptureImage(Sphere inp) {
    int** array2D = new int*[height];

    for (int h = 0; h<height;h++){
        array2D[h] = new int[width];
        for(int w = 0; w<width;w++){
            Vector3 rayPoint = Vector3(position.x,position.y,position.z);
            Vector3 dir = GetDirection(h,w);
            float rayDist = inp.SignedDistFunc(rayPoint);
            bool keepLoop = true;
            while (keepLoop){
                rayPoint = (dir*rayDist)+rayPoint;
                rayDist = inp.SignedDistFunc(rayPoint);

                if (rayDist<0.01){
                    keepLoop = false;
                    array2D[h][w] = 1;
                }

                if(rayDist>50){
                    keepLoop = false;
                    array2D[h][w] = 0;
                }
            }



        }
    }

    return array2D;
}

Vector3 Camera::GetDirection(int px, int py) {
    float Px = (2*((px+0.5)/width)-1)* tanf(FOV/2*M_PI/180)*aspectRatio;
    float Py = (1-2*((py+0.5)/height))*tanf(FOV/2*M_PI/180);
    return (Vector3(Px,Py,-1)-position).Normalize();
}