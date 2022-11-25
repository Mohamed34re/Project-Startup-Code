#pragma once

#include "shape.h"

class RegPoly : public shape
{
private:
	int *x_ptr;
	int *y_ptr;
public:
	RegPoly(int *Ptr1, int *Ptr2, GfxInfo shapeGfxInfo);
	virtual ~RegPoly();
	virtual void Draw(GUI* pUI) const;
};

