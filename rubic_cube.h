
enum RubicColor{eR=0,eG,eB,eRG,eGB,eBR,eColor};
enum RubicFace{eTop,eLeft,eFront,eRight,eBack,eBottom,eFace};
enum RubicAxis{eX=0,eY,eZ,eAxis};
enum RubicDist{e1=0,e2,e3,eDist};
enum RubicMoveDir{eClock=0,eAntiClock,eMoveDir};

class RubicCube
{
	friend class Rubic2D;
	friend class RubicMove;

	public:
		void InitializeCube();
		void RubicMove(int axis, int dist, int dir);
		void TraceCube();
		void Display2D();
		void RotateCube(int axis, int dist, int dir);

	private:
		int m_arrSquare[eColor][eDist][eDist];

		
};
/*
class Rubic2D
{
		public:
//	const static int g_iXFace = 4;
//	const static int g_iYFace = 3;
//	const static int g_iFaceSpace =9 ;
//	const static int g_iNewLines = 9;
//	const static int g_iLineSize = g_iXFace * 3 + 1;
//	const static int g_iBuffSize = g_iXFace*g_iYFace*g_iFaceSpace+g_iNewLines+1;
//	char DispBuff[g_iBuffSize];
//	char* pBuff;
	
	Rubic2D();
	~Rubic2D();

	std::ostream &operator << (RubicCube& cube);
};

//We can define every possible move with
//following three variable
class RubicMove
{
public:

private:
	int m_nAxis; // axis through which cube's face is rotated
	int m_nDist; //Dist of the face from origin
	int m_nDir; //Direction of rotation
};
*/
