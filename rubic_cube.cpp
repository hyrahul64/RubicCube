#include"rubic_cube.h"
#include <iostream>
#include <iomanip>

using namespace std;

void RubicCube::InitializeCube()
{
	for(int face = eR; face < eColor; face++)
	{
		for(int row = e1; row < eDist; row++)
		{
			for(int col = e1; col < eDist; col++)
			{
				m_arrSquare[face][row][col] = face;
			}
		}
	};
}

void RubicCube::TraceCube()
{
	for(int face = eR; face < eColor; face++)
	{
		cout << endl;
		for(int row = e1; row < eDist; row++)
		{
			cout << m_arrSquare[face][row][e1] << m_arrSquare[face][row][e2] << m_arrSquare[face][row][e3] << endl;
		}
	};
}

void RubicCube::Display2D()
{
/*
	//Face-InitialMargin store in array
	int arrMarginForFace[eFace] = {6,0,6,12,18,6};


	char arrDispBuff[200];

	int iASCIIOffsetForDigit = 48;

	char* pBuff = arrDispBuff;
	for(int face = eR; face < eColor; face++)
	{
		for(int row = e1; row < eDist; row++)
		{
			for(int col = e1; col < eDist; col++)
			{
				snprintf(pBuff,"\t%c",m_arrSquare[face][row][col]+iASCIIOffsetForDigit);
				pBuff++;
			}
		}
	};
*/
}
