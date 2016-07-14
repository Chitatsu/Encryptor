#pragma once

#include "cfixcc.h"
#include "main.h"

class Test_encrypt :
	public cfixcc::TestFixture
{
public:
	Test_encrypt(void);
	~Test_encrypt(void);



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

CFIXCC_BEGIN_CLASS(Test_encrypt)	
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