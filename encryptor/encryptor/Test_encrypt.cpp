#include "StdAfx.h"
#include "Test_encrypt.h"


Test_encrypt::Test_encrypt(void)
{
}


Test_encrypt::~Test_encrypt(void)
{
}

void Test_encrypt::emptyString()
{
	input=fopen("test.txt","w+");	
	char string[50]="";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	encrypt(5,8,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"\0                                       ");
	fclose(output);
}
	
void Test_encrypt::stringLargerThanMatrix()
{
	input=fopen("test.txt","w+");	
	char string[50]="Example text for testing this  algorithm ";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	encrypt(5,8,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);

	CFIXCC_ASSERT_EQUALS(string,"Elxrtt ra  tnietpeos  ommtfegsghxet inai        \0                               ");
	fclose(output);
}
	
void Test_encrypt::stringUnderThanMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Example text for testing this algorithm";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	encrypt(5,8,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Elxrttaia  tnighpeos  r\0mtfegsomxet inlt");
	fclose(output);
}
	
	
void Test_encrypt::stringSizeCorrespondDoubleSizeOfMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Example text for testing this  algorithm";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[5]={0,2,4,3,1};
	encrypt(5,4,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Elxra  tplosmtfexet tt rnilt  omgsgh ihai");
	fclose(output);
}
	
void Test_encrypt::largeStringLargerThanMatrix()
{
}
	
void Test_encrypt::largeStringUnderThanMatrix()
{
}
	
void Test_encrypt::rowMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Example text for testing this  algorithm";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[1]={0};
	encrypt(1,40,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Example text for testing this  algorithm");
	fclose(output);
}
	
void Test_encrypt::columnMatrix()
{
	input=fopen("test.txt","w+");
	char string[50]="Exam";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[4]={0,3,2,1};
	encrypt(4,1,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"Emax");
	fclose(output);
}
	
void Test_encrypt::matrixSize1()
{
	input=fopen("test.txt","w+");
	char string[50]="E";
	fwrite((void*)string,1,strlen(string),input);
	fclose(input);	

	input=fopen("test.txt","w+");
	output=fopen("result.txt","w+");
	int vector[1]={0};
	encrypt(1,1,vector);
	fclose(output);
	fclose(input);

	output=fopen("result.txt","w+");
	fread((void*)string,1,100,output);
	CFIXCC_ASSERT_EQUALS(string,"E");
	fclose(output);
}