#pragma once

#include "operation.h"

//Add Rectangle operation class
class opAddRegPoly : public operation
{

public:
	int pentagon_x[5];
	int pentagon_y[5];
	opAddRegPoly(controller* pCont);
	virtual ~opAddRegPoly();

	//Add rectangle to the controller
	virtual void Execute();

};

