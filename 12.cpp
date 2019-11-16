#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

class complex {
private:	
	int x;
	int y;
public:
	
	complex(int a, int b) {
		x = a; y = b;
	}
	complex(const complex &c) {
		this->x = c.x;
		this->y = c.y;
	}
	
	void display() {
		cout << x << "i" << "+" << y << "j"<<endl;
	}

	complex operator+(complex c) {
		complex result(0,0);
		result.x = this->x + c.x;
		result.y = this->y + c.y;
		return result;
	}

};

int main() {

	complex c1(3, 4), c2(4, 5), c3(c1);
	c3 = c1 + c2;
	cout << "C1  = "; c1.display();
	cout << "C2  = "; c2.display();
	cout << "Sum = "; c3.display();
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}