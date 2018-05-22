// meter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CLenth
{
private:
	int feet;
	double inches;
public:
	CLenth()
	{
		feet = 0;
		inches = 0;
	}
	void setvalue(int f, double i)
	{
		feet = f;
		inches = i;
	}
	void setmeter(double meter)
	{
		feet = meter*3.2808;
		inches = (meter*3.2808 - feet) * 12;
	}
	void display()
	{
		cout << "f=" << feet << "i=" << inches << endl;
	}
};
int main()
{
	CLenth ft1;
	ft1.setmeter(10);
	//ft1.setvalue(10,9);
	ft1.display();
	return 0;
}

