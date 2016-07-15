#include "StdAfx.h"
#include "Test_decrypt.h"


Test_decrypt::Test_decrypt(void)
{
}


Test_decrypt::~Test_decrypt(void)
{
}


void Test_decrypt::emptyString()
{
	input=fopen("test.txt","w+");	
	char string[50]="\0                                       ";
	fwrite((void*)string,1,40,input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	decrypt(5,8,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"");
	fclose(output);
}
	
void Test_decrypt::stringLargerThanMatrix()
{
	input=fopen("test.txt","w+");	
	char string[100]="Elxrtt ra  tnietpeos  ommtfegsghxet inai        \0                               ";
	fwrite((void*)string,1,80,input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	decrypt(5,8,vector);
	fclose(output);
	fclose(input);
	
	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);

	CFIXCC_ASSERT_EQUALS(string,"Example text for testing this  algorithm ");
	fclose(output);
}
	
void Test_decrypt::stringUnderThanMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Elxrttaia  tnighpeos  r\0mtfegsomxet inlt";
	fwrite((void*)string,1,40,input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	decrypt(5,8,vector);
	fclose(output);
	fclose(input);

	
	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Example text for testing this algorithm");
	fclose(output);
}
	
	
void Test_decrypt::stringSizeCorrespondDoubleSizeOfMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Elxra  tplosmtfexet tt rnilt  omgsgh ihai";
	fwrite((void*)string,1,40,input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	decrypt(5,4,vector);
	fclose(output);
	fclose(input);
	
	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Example text for testing this  algorithm");
	fclose(output);
}
	
void Test_decrypt::largeStringLargerThanMatrix()
{
}
	
void Test_decrypt::largeStringUnderThanMatrix()
{
}
	
void Test_decrypt::rowMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Example text for testing this  algorithm";
	fwrite((void*)string,1,40,input);
	fclose(input);
	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[1]={0};
	decrypt(1,40,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Example text for testing this  algorithm");
	fclose(output);
}
	
void Test_decrypt::columnMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Emax";
	fwrite((void*)string,1,4,input);
	fclose(input);
	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[4]={0,3,2,1};
	decrypt(4,1,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Exam");
	fclose(output);
}
	
void Test_decrypt::matrixSize1()
{
	input=fopen("test.txt","w+");
	char string[50]="E";
	fwrite((void*)string,1,1,input);
	fclose(input);
	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[1]={0};
	decrypt(1,1,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"E");
	fclose(output);
}