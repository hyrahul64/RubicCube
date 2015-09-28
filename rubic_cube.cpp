#include"rubic_cube.h"
#include <iostream>
#include <iomanip>
#include<cstring>
#include <cstdio>

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
			cout << "["	<< m_arrSquare[face][row][e1] << m_arrSquare[face][row][e2] << m_arrSquare[face][row][e3] << "]";
		}
	}
	cout << endl;
}

void RubicCube::Display2D()
{

	//Consider cube is unfolded
	//Origin is Top,Left,Front corner


	//Top Face
	cout << "   " <<m_arrSquare[eTop][e3][e1] << m_arrSquare[eTop][e3][e2] << m_arrSquare[eTop][e3][e3] << endl;
	cout << "   " <<m_arrSquare[eTop][e2][e1] << m_arrSquare[eTop][e2][e2] << m_arrSquare[eTop][e2][e3] << endl;
	cout << "   " <<m_arrSquare[eTop][e1][e1] << m_arrSquare[eTop][e1][e2] << m_arrSquare[eTop][e1][e3] << endl;

	//First Line of Left,Front,Right,Back Face
	cout << m_arrSquare[eLeft][e1][e3] << m_arrSquare[eLeft][e1][e2] << m_arrSquare[eLeft][e1][e1];
	cout << m_arrSquare[eFront][e1][e1] << m_arrSquare[eFront][e1][e2] << m_arrSquare[eFront][e1][e3];
	cout << m_arrSquare[eRight][e1][e1] << m_arrSquare[eRight][e1][e2] << m_arrSquare[eRight][e1][e3];
	cout << m_arrSquare[eBack][e1][e1] << m_arrSquare[eBack][e1][e2] << m_arrSquare[eBack][e1][e3];

	cout << endl;

	//Second Line of Left,Front,Right,Back Face
	cout << m_arrSquare[eLeft][e2][e3] << m_arrSquare[eLeft][e2][e2] << m_arrSquare[eLeft][e2][e1];
	cout << m_arrSquare[eFront][e2][e1] << m_arrSquare[eFront][e2][e2] << m_arrSquare[eFront][e2][e3];
	cout << m_arrSquare[eRight][e2][e1] << m_arrSquare[eRight][e2][e2] << m_arrSquare[eRight][e2][e3];
	cout << m_arrSquare[eBack][e2][e1] << m_arrSquare[eBack][e2][e2] << m_arrSquare[eBack][e2][e3];

	cout << endl;

	//Third Line of Left,Front,Right,Back Face
	cout << m_arrSquare[eLeft][e3][e3] << m_arrSquare[eLeft][e3][e2] << m_arrSquare[eLeft][e3][e1];
	cout << m_arrSquare[eFront][e3][e1] << m_arrSquare[eFront][e3][e2] << m_arrSquare[eFront][e3][e3];
	cout << m_arrSquare[eRight][e3][e1] << m_arrSquare[eRight][e3][e2] << m_arrSquare[eRight][e3][e3];
	cout << m_arrSquare[eBack][e3][e1] << m_arrSquare[eBack][e3][e2] << m_arrSquare[eBack][e3][e3];


	cout << endl;

	//Bottom Face
	cout << "   " <<m_arrSquare[eBottom][e3][e1] << m_arrSquare[eBottom][e3][e2] << m_arrSquare[eBottom][e3][e3] << endl;
	cout << "   " <<m_arrSquare[eBottom][e2][e1] << m_arrSquare[eBottom][e2][e2] << m_arrSquare[eBottom][e2][e3] << endl;
	cout << "   " <<m_arrSquare[eBottom][e1][e1] << m_arrSquare[eBottom][e1][e2] << m_arrSquare[eBottom][e1][e3] << endl;

}
void RubicCube::RotateCube(int axis, int dist, int dir)
{
	//Around X Axis

	//Right most face
	if (axis == eX && dist == e1 && dir == eClock)
	{

	}
	if (axis == eX && dist == e1 && dir == eAntiClock)
	{

	}
}
//Rubic2D::Rubic2D()
//{
//	/*memset(DispBuff,NULL,g_iBuffSize);
//	memset(DispBuff,' ',g_iBuffSize-1);
//	pBuff=DispBuff;
//	for(int line = 1; line <= g_iYFace*3; line++)
//	{
//		pBuff[line*g_iXFace*3+(line-1)] = '\n';
//	}*/
//
//}
//Rubic2D::~Rubic2D()
//{
//}
//
//ostream & Rubic2D::operator << (RubicCube& cube)
//{
//
//	//Consider cube is unfolded
//	//Origin is Top,Left,Front corner
//
//
//	//Top Face
//	cout << "   " <<cube.m_arrSquare[eTop][e3][e1] << cube.m_arrSquare[eTop][e3][e2] << cube.m_arrSquare[eTop][e3][e3] << endl;
//	cout << "   " <<cube.m_arrSquare[eTop][e2][e1] << cube.m_arrSquare[eTop][e2][e2] << cube.m_arrSquare[eTop][e2][e3] << endl;
//	cout << "   " <<cube.m_arrSquare[eTop][e1][e1] << cube.m_arrSquare[eTop][e1][e2] << cube.m_arrSquare[eTop][e1][e3] << endl;
//
//	//First Line of Left,Front,Right,Back Face
//	cout << cube.m_arrSquare[eLeft][e1][e3] << cube.m_arrSquare[eLeft][e1][e2] << cube.m_arrSquare[eLeft][e1][e1];
//	cout << cube.m_arrSquare[eFront][e1][e1] << cube.m_arrSquare[eFront][e1][e2] << cube.m_arrSquare[eFront][e1][e3];
//	cout << cube.m_arrSquare[eRight][e1][e1] << cube.m_arrSquare[eRight][e1][e2] << cube.m_arrSquare[eRight][e1][e3];
//	cout << cube.m_arrSquare[eBack][e1][e1] << cube.m_arrSquare[eBack][e1][e2] << cube.m_arrSquare[eBack][e1][e3];
//
//	cout << endl;
//
//	//Second Line of Left,Front,Right,Back Face
//	cout << cube.m_arrSquare[eLeft][e2][e3] << cube.m_arrSquare[eLeft][e2][e2] << cube.m_arrSquare[eLeft][e2][e1];
//	cout << cube.m_arrSquare[eFront][e2][e1] << cube.m_arrSquare[eFront][e2][e2] << cube.m_arrSquare[eFront][e2][e3];
//	cout << cube.m_arrSquare[eRight][e2][e1] << cube.m_arrSquare[eRight][e2][e2] << cube.m_arrSquare[eRight][e2][e3];
//	cout << cube.m_arrSquare[eBack][e2][e1] << cube.m_arrSquare[eBack][e2][e2] << cube.m_arrSquare[eBack][e2][e3];
//
//	cout << endl;
//
//	//Third Line of Left,Front,Right,Back Face
//	cout << cube.m_arrSquare[eLeft][e3][e3] << cube.m_arrSquare[eLeft][e3][e2] << cube.m_arrSquare[eLeft][e3][e1];
//	cout << cube.m_arrSquare[eFront][e3][e1] << cube.m_arrSquare[eFront][e3][e2] << cube.m_arrSquare[eFront][e3][e3];
//	cout << cube.m_arrSquare[eRight][e3][e1] << cube.m_arrSquare[eRight][e3][e2] << cube.m_arrSquare[eRight][e3][e3];
//	cout << cube.m_arrSquare[eBack][e3][e1] << cube.m_arrSquare[eBack][e3][e2] << cube.m_arrSquare[eBack][e3][e3];
//
//
//	cout << endl;
//
//	//Bottom Face
//	cout << "   " <<cube.m_arrSquare[eBottom][e3][e1] << cube.m_arrSquare[eBottom][e3][e2] << cube.m_arrSquare[eBottom][e3][e3] << endl;
//	cout << "   " <<cube.m_arrSquare[eBottom][e2][e1] << cube.m_arrSquare[eBottom][e2][e2] << cube.m_arrSquare[eBottom][e2][e3] << endl;
//	cout << "   " <<cube.m_arrSquare[eBottom][e1][e1] << cube.m_arrSquare[eBottom][e1][e2] << cube.m_arrSquare[eBottom][e1][e3] << endl;
//
//}
