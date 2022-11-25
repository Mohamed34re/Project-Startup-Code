#include "Circ.h"

Circ::Circ(Point P1, double Rad, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	Corner1 = P1;
	Radius = Rad;
}

Circ::~Circ()
{}

void Circ::Draw(GUI* pUI) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pUI->DrawCirc(Corner1, Radius, ShpGfxInfo);
}