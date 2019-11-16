#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

class employee {
private:
	string *name;
	int *salary;
public:
	employee(string, int);
	~employee();
	void display() {
		cout << "Name   : " << *name<<endl;
		cout << "Salary :" << *salary;
	 }
	int getsalary() {
		return *salary;
	}
	string getname() {
		return *name;
	}
	void setsalary(int n) {
		int* t = salary;
		salary = new int(n);
		delete t;
	}
	void setname(string s) {
		string* t = name;
		name = new string(s);
		delete t;
	}
};

employee::employee(string a, int n) {
	name = new string(a);
	salary = new int(n);
}

employee::~employee() {
	delete name;
	delete salary;
}

int main() {
	
	employee E[5] = { {"Rahul",30000},{"Aman",40000},{"Karan",35600},{"Shreya",50000},{"Vivek",75000} };
	employee Boss("", 0);
	for (int i = 0; i < 5;i++ ) {
		if (E[i].getsalary() > Boss.getsalary()) {
			Boss.setname(E[i].getname());
			Boss.setsalary(E[i].getsalary());
		}
	}

	cout << "Employee with Highest Salary is : \n";
	Boss.display();
	cout << endl << endl;
	return 0;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
}

