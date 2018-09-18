#pragma once

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <vector>

#include "Shape.hpp"
#include "Vehicle.hpp"
#include "RectangularPrism.h"
#include "TriangularPrism.h"
#include "Cylinder.h"
#include "TrapezoidalPrism.h"
#include "Messages.hpp"


class MyVehicle : public Vehicle {
protected:

	VehicleModel vm;
	VehicleState vs;


public:
	MyVehicle();
	~MyVehicle();

	void initialS();
	VehicleModel GetModel();
	VehicleState Getstate();
	void fullshape();
	void draw();
	std::vector<ShapeInit> SetLocalVehicle();
	void SetRemoteVehicle(std::vector<ShapeInit> shapesInit);
};
