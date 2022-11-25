#pragma once

#include "operation.h"

//Add Circle operation class
class opAddCirc : public operation
{
public:
	opAddCirc(controller* pCont);
	virtual ~opAddCirc();

	//Add rectangle to the controller
	virtual void Execute();

};

