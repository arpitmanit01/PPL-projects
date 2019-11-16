#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
class shape {
protected:
	int side1;
	int side2;
public:
	shape() {}
	shape(int a, int b) {
		side1 = a;
		side2 = b;
	}
	void set_data(int s1, int s2) {
		side1 = s1;
		side2 = s2;
	}

	virtual void display_area() = 0;
};

class triangle :public shape {
public:
	triangle(int a,int b):shape(a,b){}
	void display_area() {
		cout << 0.5 * side1 * side2<<endl;
	}
};

class rectangle :public shape {
public:
	rectangle(int a, int b) :shape(a, b) {}
	void display_area() {
		cout <<side1 * side2<<endl;
	}
};

int main() {
	shape* tri = new triangle(12, 8);
	shape* rec = new rectangle(6, 4);
	cout << "Area of Triangle  :";tri->display_area();
	cout << "Area of Rectangle :"; rec->display_area();
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;

}