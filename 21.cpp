#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class parameter{
private:
	int para;
public:
	parameter(int n) {
		this->para = n;
	}
	virtual double getarea() = 0;
	int getpara(){
		return para;
	}
};

class square:public parameter{
public:
	square(int n):parameter(n) {
		}
	double getarea() {
		int a = getpara();
		a *= a;
		return (double)a;
	}
};

class circle :public parameter {
public:
	circle(int n) :parameter(n) {
	}
	double getarea() {
		double a = (double)getpara();
		a = 3.141592 * a * a;
		return (double)a;
	}
};

int main() {
	parameter* Sq = new square(5);
	parameter* Circ = new circle(4);

	cout << "Area of Square : " << Sq->getarea() << endl;
	cout << "Area of Circle : " << Circ->getarea() << endl;

	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}