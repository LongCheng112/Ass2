#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include "Shape.hpp"

class Cylinder : public Shape {
protected:
	double radius;
	double depth;
	bool isRolling ;	// needs to roll with vehicle?
	bool isSteering ;
	double roll;

public:
	Cylinder();
	Cylinder(double radius, double depth);

	~Cylinder();
	bool rolling();
	bool steering();
	void setRoll(double speed);

	void draw();
};