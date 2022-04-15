#include <iostream>
#include "Sphere.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //Constructor Test1
    Sphere mySphere  = Sphere();
    mySphere.SetPosition(1.0,2.0,3.0);
    //Constructor Test2
    Sphere mySphere2 = Sphere(4.0,5.0,6.0,0.4);
    //Constructor Test3
    Sphere mySphere3 = Sphere(Vector3(7,8,9),0.2);

    std::cout << mySphere.position.x  << " "<< mySphere.position.y << " " << mySphere.position.z << " "<< std::endl;
    std::cout << mySphere2.position.x << " "<< mySphere2.position.y << " " << mySphere2.position.z << " "<< std::endl;
    std::cout << mySphere3.position.x << " "<< mySphere3.position.y << " " << mySphere3.position.z << " "<< std::endl;
    return 0;
}
