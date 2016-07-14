#pragma once

#include "cfixcc.h"
#include "main.h"

class Test_checkParameters :
	public cfixcc::TestFixture
{
public:
	Test_checkParameters(void);
	~Test_checkParameters(void);

	void correctInput();
	void incorrectNumberOfArguments();
	void incorrectSizeOfMatrix();
	void negativeNumberOnSizeOfMatrix();
	void notAllRowsInEnum();
	void incorrectEnumOfRows();
	void incorrectExtentionOfInputFile();
	void incorrectExtentionOfOutputFile();
	void noKeyOfProgramMode();
	void noKeyOfStringsEnum();

};


CFIXCC_BEGIN_CLASS(Test_checkParameters)
	CFIXCC_METHOD(correctInput)
	CFIXCC_METHOD(incorrectNumberOfArguments)
	CFIXCC_METHOD(incorrectSizeOfMatrix)
	CFIXCC_METHOD(negativeNumberOnSizeOfMatrix)
	CFIXCC_METHOD(notAllRowsInEnum)
	CFIXCC_METHOD(incorrectEnumOfRows)
	CFIXCC_METHOD(incorrectExtentionOfInputFile)
	CFIXCC_METHOD(incorrectExtentionOfOutputFile)
	CFIXCC_METHOD(noKeyOfProgramMode)
	CFIXCC_METHOD(noKeyOfStringsEnum)
CFIXCC_END_CLASS()