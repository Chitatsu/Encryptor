#pragma once
#include "cfixcc.h"
#include "main.h"

class Test_decrypt :
	public cfixcc::TestFixture
{
public:
	Test_decrypt(void);
	~Test_decrypt(void);

	void emptyString();
	void stringLargerThanMatrix();
	void stringUnderThanMatrix();
	void stringSizeCorrespondDoubleSizeOfMatrix();
	void largeStringLargerThanMatrix();
	void largeStringUnderThanMatrix();
	void rowMatrix();
	void columnMatrix();
	void matrixSize1();
};

CFIXCC_BEGIN_CLASS(Test_decrypt)	
	CFIXCC_METHOD(emptyString)
	CFIXCC_METHOD(stringLargerThanMatrix)
	CFIXCC_METHOD(stringUnderThanMatrix)
	CFIXCC_METHOD(stringSizeCorrespondDoubleSizeOfMatrix)
	CFIXCC_METHOD(largeStringLargerThanMatrix)
	CFIXCC_METHOD(largeStringUnderThanMatrix)
	CFIXCC_METHOD(rowMatrix)
	CFIXCC_METHOD(columnMatrix)
	CFIXCC_METHOD(matrixSize1)
CFIXCC_END_CLASS()