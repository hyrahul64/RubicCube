#include<iostream>
#include"rubic_cube.cpp"

using namespace std;

int main()
{
	cout << "Hello World."	 << endl;
	
	RubicCube rb;
	rb.InitializeCube();
	rb.TraceCube();
}
