#pragma once
#include <iostream>

using namespace std;

class Abstract
{
public:
	virtual double SurfaceArea() = 0;
	virtual void Print() = 0;
};
