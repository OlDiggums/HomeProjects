//
// Created by jacob on 4/13/2022.
//

#include "Sphere.h"

Sphere::Sphere() {
    position = Vector3();
    radius = 0;
}

Sphere::Sphere(Vector3 pos, float _radius) {
    position = pos;
    radius = _radius;
}

Sphere::Sphere(float xx,float yy,float zz, float _radius) {
    position = Vector3(xx,yy,zz);
    radius = _radius;
}
