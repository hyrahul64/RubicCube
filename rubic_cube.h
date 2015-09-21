class RubicCube
{
	private:
		int m_arrSquare[][][] = {-1};

	public:
		enum RubicColor{eR=0,eG,eB,eRG,eGB,eBR,eColor};
		enum RubicAxis{eX=0,eY,eZ,eAxis};
		enum RubicDist{e1=0,e2,e3,eDist};
		enum RubicMoveDir{eClock=0,eAntiClock,eMoveDir};
		
		void InitializeCube();
		void RubicMove(int axis, int dist, int dir);
		void TraceCube();
		void Display2D();
};
