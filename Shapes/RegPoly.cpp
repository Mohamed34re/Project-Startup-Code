#include <iostream>
using namespace std;

#include "RegPoly.h"

RegPoly::RegPoly(int *Ptr1, int *Ptr2, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	x_ptr = Ptr1;
	y_ptr = Ptr2;
	cout << endl << x_ptr << endl << x_ptr[0] << endl;

}

RegPoly::~RegPoly()
{}

void RegPoly::Draw(GUI* pUI) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pUI->DrawRegPoly(x_ptr, y_ptr, ShpGfxInfo);
}