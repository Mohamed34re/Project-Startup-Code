#include <iostream>
using namespace std;


#include "opAddRegPoly.h"
#include "../Shapes/RegPoly.h"

#include "..\controller.h"

#include "..\GUI\GUI.h"

opAddRegPoly::opAddRegPoly(controller* pCont) :operation(pCont)
{
	
}
opAddRegPoly::~opAddRegPoly()
{}

//Execute the operation
void opAddRegPoly::Execute()
{
	/*int* x_pentagon;
	int* y_pentagon;*/
	Point P1, P2, P3, P4, P5;

	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();

	pUI->PrintMessage("New Pentagon: Click at first corner");
	//Read 1st corner and store in point P1
	pUI->GetPointClicked(P1.x, P1.y);
	pentagon_x[0] = P1.x;
	pentagon_y[0] = P1.y;
	
	string msg = "First corner is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at second corner";
	pUI->PrintMessage(msg);
	//Read 2nd corner and store in point P2
	pUI->GetPointClicked(P2.x, P2.y);
	pentagon_x[1] = P2.x;
	pentagon_y[1] = P2.y;

	msg = "First corner is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at third corner";
	pUI->PrintMessage(msg);
	//Read 2nd corner and store in point P2
	pUI->GetPointClicked(P3.x, P3.y);
	pentagon_x[2] = P3.x;
	pentagon_y[2] = P3.y;

	msg = "First corner is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at forth corner";
	pUI->PrintMessage(msg);
	//Read 2nd corner and store in point P2
	pUI->GetPointClicked(P4.x, P4.y);
	pentagon_x[3] = P4.x;
	pentagon_y[3] = P4.y;
	
	msg = "First corner is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	msg += " ... Click at fifth corner";
	pUI->PrintMessage(msg);
	//Read 2nd corner and store in point P2
	pUI->GetPointClicked(P5.x, P5.y);
	pentagon_x[4] = P5.x;
	pentagon_y[4] = P5.y;
	

	int *x_pentagon = pentagon_x;
	int *y_pentagon = pentagon_y;
	cout << x_pentagon << endl;
	cout << x_pentagon[0] << endl;

	pUI->ClearStatusBar();

	//Preapre all rectangle parameters
	GfxInfo RectGfxInfo;

	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pUI->getCrntDrawColor();
	RectGfxInfo.FillClr = pUI->getCrntFillColor();
	RectGfxInfo.BorderWdth = pUI->getCrntPenWidth();


	RectGfxInfo.isFilled = false;	//default is not filled
	RectGfxInfo.isSelected = false;	//defualt is not selected


	//Create a rectangle with the above parameters
	RegPoly* Penta = new RegPoly(x_pentagon, y_pentagon, RectGfxInfo);

	//Get a pointer to the graph
	Graph* pGr = pControl->getGraph();

	//Add the rectangle to the list of shapes
	pGr->Addshape(Penta);

}
