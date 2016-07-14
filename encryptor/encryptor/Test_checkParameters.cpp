#pragma once
#include "StdAfx.h"
#include "Test_checkParameters.h"


Test_checkParameters::Test_checkParameters(void)
{
}


Test_checkParameters::~Test_checkParameters(void)
{
}


void Test_checkParameters::correctInput()
{
	int argc=13;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"6",
						"7",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),0);

}

void Test_checkParameters::incorrectNumberOfArguments()
{
	int argc=7;
	char * argv[13]={	"",
						"2.txt",
						"-e",
						"2.txt",
						"6",
						"7",
						"-s",										
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),1);
}

void Test_checkParameters::incorrectSizeOfMatrix()
{	
	int argc=13;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"6a",
						"7",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),3);
}
	
void Test_checkParameters::negativeNumberOnSizeOfMatrix()
{
	int argc=13;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"-1",
						"0",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),4);
}
	
void Test_checkParameters::notAllRowsInEnum()
{
	int argc=10;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"6",
						"7",
						"-s",
						"2",
						"5",
						"1"											
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),5);
}
	
void Test_checkParameters::incorrectEnumOfRows()
{
	int argc=13;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"6",
						"7",
						"-s",
						"-2",
						"5",
						"-1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),6);
}
	
void Test_checkParameters::incorrectExtentionOfInputFile()
{
	int argc=13;
	char * argv[13]={	"",
						"1.rar",
						"-e",
						"1.txt",
						"6",
						"7",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),7);
}
	
void Test_checkParameters::incorrectExtentionOfOutputFile()
{
	int argc=13;
	char * argv[13]={	"",
						"1.txt",
						"-e",
						"1.rar",
						"6",
						"7",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),8);
}
	
void Test_checkParameters::noKeyOfProgramMode()
{
	int argc=12;
	char * argv[13]={	"",
						"1.txt",						
						"1.txt",
						"6",
						"7",
						"-s",
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),9);
}
	
void Test_checkParameters::noKeyOfStringsEnum()
{
	int argc=12;
	char * argv[12]={	"",
						"1.txt",
						"-e",
						"1.txt",
						"6",
						"7",						
						"2",
						"5",
						"1",
						"3",
						"4",
						"0"						
					  };

	CFIXCC_ASSERT_EQUALS(checkParameters(argc,argv),10);
}