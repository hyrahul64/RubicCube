class RubicCube
{
	public:

		enum RubicColor{eR=0,eG,eB,eRG,eGB,eBR,eColor};
		enum RubicFace{eTop,eLeft,eFront,eRight,eBack,eBottom,eFace};
		enum RubicAxis{eX=0,eY,eZ,eAxis};
		enum RubicDist{e1=0,e2,e3,eDist};
		enum RubicMoveDir{eClock=0,eAntiClock,eMoveDir};

		void InitializeCube();
		void RubicMove(int axis, int dist, int dir);
		void TraceCube();
		void Display2D();

	private:
		int m_arrSquare[eColor][eDist][eDist];

		
};
