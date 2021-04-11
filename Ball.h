#pragma once
#include "Abstract.h"
class Ball :
    public Abstract
{
private:
    int a;
public:
    void SetA(int);

    int GetA() const;

    Ball();
    Ball(int);
    Ball(Ball&);

    virtual void Print();
    virtual double SurfaceArea();
};

