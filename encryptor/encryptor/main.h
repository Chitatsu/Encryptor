#pragma once
#include <windows.h>


FILE * input;
FILE * output;
char inputBuffer[10000];
char outputBuffer[10000];
int inputBufferPos;
int outputBufferPos;

/*!
 * ���������� ������
 * \param[in] rows ���������� ����� �������
 * \param[in] columns ���������� �������� ������� 
 * \param[in] rowOrder ������� ������������ �����
 * \return ������������� �����
 */
void encrypt(int rows,int columns,  int* rowOrder)
{
	// ���� �� ��������� ����� �����...
		// ��������� ������� �� �������� ����� ������� (fillMatrixByColumns)
		// ������� ������ �� ������� �� ������� � ��������� ������� (createStringFromMatrixByRows)
		// �������� ������ � ����� ����� (saveString)
}

/*!
 * ����������� ������ 
 * \param[in] rows ���������� ����� �������
 * \param[in] columns ���������� �������� ������� 
 * \param[in] rowOrder ������� ������������ �����
 * \return �������������� �����
 */
void decrypt(int rows,int columns,  int* rowOrder)
{
	// ���� �� ��������� ����� �����...
		// ��������� ������� �� ������� � �������� ������� (fillMatrixByRows)
		// ������� ������ �� ������� �� �������� ����� ������� (createStringFromMatrixByColumns)
		// �������� ������ � ����� ����� (saveString)
}

/*!
 * ���������� ������ � ����
 * \param[in] string ������ 
 * \return ���������� ����������
 */
bool saveString(char * string)
{
	return true;	
}


/*!
 * ��������� ������� �� ��������
 * \param[out] matrix �������
 * \param[in] rowCount ���������� ����� �������
 * \param[in] columnCount ���������� �������� �������
 * \param[in] text �����
 */
void fillMatrixByColumns(char** matrix,int rowCount,int columnCount, char* text)
{
}

/*!
 * ����������� ������� �� �������
 * \param[out] matrix �������
 * \param[in] rowCount ���������� ����� �������
 * \param[in] columnCount ���������� �������� �������
 * \param[in] text ����� 
 */
void fillMatrixByRows(char** matrix,int rowCount,int columnCount, char* text)
{
}

/*!
 * �������� ������ �� ������� �� �������
 * \param[in] matrix �������
 * \param[in] rowCount ���������� ����� �������
 * \param[in] columnCount ���������� �������� �������
 * \return ������
 */
char* createStringFromMatrixByRows(char** matrix,int rowCount,int columnCount)
{
	char* a;
	return a;
}


/*!
 * �������� ������ �� ������� �� ��������
 * \param[in] matrix ������� 
 * \param[in] rowCount ���������� ����� �������
 * \param[in] columnCount ���������� �������� �������
 * \return ������
 */
char* createStringFromMatrixByColumns(char** matrix,int rowCount,int columnCount)
{
	char* a;
	return a;
}

/*!
 * �������� ���������� ��������� ������ �� ������������
 * \param[in] argc ���������� ����������
 * \param[in] argv ���������
 * \return ������������ ����������
 */
int checkParameters(int argc, char* argv[])
{
	// ���� ���������� ���������� ������ 7
		// ���������� ������ � �������� ���������� ����������
		// ������� ��� ������
	// ����� ���� ������ �������� �� ������������� ��  �.txt�
		// ���������� ������ � �������� ���������� �������� �����
		// ������� ��� ������
	// ����� ���� ������ �������� �� �������� �-� � �-d�
		// ���������� ������ � ���, ��� ������� ������ ���� ������
		// ������� ��� ������
	// ����� ���� ������ �������� �� ������������� �� �.txt�
		// ���������� ������ � �������� ���������� ��������� �����
		// ������� ��� ������
	// ����� ���� ������ ��� �� �������
		// ��� ���������� � ������ ����������
			// ���� �������� �������� ������
				// ���� ��� ������ 1
					// ���������� ������ � ���, ��� ������ ������� �� ����� ���� ������ 1
					// ������� ��� ������
			// �����
				// ���������� ������ � �������� ������ �������� �������
				// ������� ��� ������
	// ����� ���� ������ �������� �� �������� �-s�
		// ���������� ������ � ���, ��� �� ������ ���� �-s�
		// ������� ��� ������
	// �����
		// ������������� ��������� �������� � ����� (������������ ���-�� ����������)
		// ���� ���������� ���������� �� ����� ����� 6 (������������ ���-�� ����������) � ���������� ���������� ����� (������������ ���-�� ����������)
			// ���������� ������ � ���, ��� ����������� �� ��� ������ �������
			// ������� ��� ������
		// �����
			// ��� ���� ����������, ������� � ��������
				// ���� �������� �� �������� ������ ��� �������� ������������� ������ ��� ����� ������ ���-�� ����� � 1 ��� ����� �����������
					// ���������� ������ � ���, ��� ������������ ����� �������� �������
					// ������� ��� ������
	// ������� 0
	return 0;
}

/*!
 * ������� ������ �� ����� 
 * \return ������
 */
char readByte()
{
	char a;
	return a;
}
/*!
 * ������� ������ �� 10000 ��������
 * \return ������
 */
char * read()
{
	char* a;
	return a;
}