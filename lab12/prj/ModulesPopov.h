#ifndef MODULESPOPOV_H_INCLUDED
#define MODULESPOPOV_H_INCLUDED

#include <cmath>

class ClassLab12_Popov{
public:
    ClassLab12_Popov(){}
    ClassLab12_Popov(float radius);
    void setRadius(float radius);
    float getRadius();
    float getVolumeBall();
private:
    float radius = 0.0;
};

ClassLab12_Popov::ClassLab12_Popov(float radius){
    this->radius = radius;
}

void ClassLab12_Popov::setRadius(float radius){
    this->radius = radius;
}

float ClassLab12_Popov::getRadius(){
    return radius;
}

float ClassLab12_Popov::getVolumeBall(){
    return (4 * M_PI * pow(radius, 3))/3;
}

#endif // MODULESPOPOV_H_INCLUDED
