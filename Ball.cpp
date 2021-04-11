#include "Ball.h"

#include "Ball.h"

void Ball::SetA(int a)
{
	this->a=a;
}

int Ball::GetA() const
{
	return a;
}

Ball::Ball()
	:a(0)
{}

Ball::Ball(int a = 0)
	:a(a)
{}

Ball::Ball(Ball& q)
	: Ball(q.GetA())
{}

void Ball::Print()
{
	cout << "The radius of the sphere: " << GetA() << endl;
}

double Ball::SurfaceArea()
{
	return 4 * 3.14 * (GetA() * GetA());
}