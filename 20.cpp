#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class student {
private:
	string name;
	string roll;
	string phone;
public:
	student(string name, string roll, string phone) {
		this->name = name;
		this->roll = roll;
		this->phone = phone;
	}
	virtual void display() {
		cout << "Name      :" << name<<endl;
		cout << "Roll No.  :" << roll << endl;
		cout << "Phone No. :" << phone << endl;
		}
};

class Grade :public student {
private:
	int score;
	char grade;
public:
	Grade(string a, string b, string c, int n) :student(a, b, c) {
		score = n;
		char ch;
		if (score <= 100 && score>= 90) { grade = 'A'; }
		else if (score < 90 && score >= 75) { grade = 'B'; }
		else if (score < 75 && score >= 60) { grade = 'C'; }
		else if (score < 60 && score >= 40) { grade = 'D'; }
		else if (score <=40) { grade = 'E'; }
	}

	void display() {
		student::display();
		cout << "Score     :" << score << endl;
		cout << "Grade     :" << grade << endl;
		cout << endl;
	}

};

int main() {
	Grade stu1("Rahul", "52", "7512368425", 94);
	Grade stu2("Deepak", "64", "8423651795", 66);
	Grade stu3("Shreya", "65", "94562178365", 84);
	stu1.display();
	stu2.display();
	stu3.display();
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";
	return 0;
}