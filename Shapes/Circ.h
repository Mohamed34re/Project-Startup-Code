#pragma once

#include "shape.h"

class Circ : public shape
{
private:
	Point Corner1;
	double Radius;
public:
	Circ(Point, double, GfxInfo shapeGfxInfo);
	virtual ~Circ();
	virtual void Draw(GUI* pUI) const;
};