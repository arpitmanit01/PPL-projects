#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

struct node{
	int data;
	node* next;
};

node* first=NULL;

void llinsert(int k) {
	if (first== NULL) {
		node* t = new node;
		t->data = k;
		t->next = NULL;
		first = t;
	}
	else {
		node* p = first;
		while (p->next != NULL) {
			p = p->next;
		}
		node* t = new node;
		t->data = k;
		t->next = NULL;
		p->next = t;
	}
}

int getlooplength() {
	node* slow = first;
	node* fast = first;
	do{
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);

	int sum = 0;

	do{
		fast = fast->next;
		sum++;
	} while (slow != fast);

	return sum;
}

int main() {
	llinsert(20);
	llinsert(45);
	llinsert(42);
	llinsert(14);//
	llinsert(36);
	llinsert(55);
	llinsert(24);
	llinsert(74);
	node* p = first;
	cout << "Linked List : \n";
	while (p) {
		cout << p->data << "\t";
		p = p->next;
	}
	cout << endl;
	node* a = first;
	node* b = first;
	
	a = a->next->next->next;
	while (b->next != NULL) {
		b = b->next;
	}
	b->next = a;//Now Loop is Created

	cout << "\nLength Of Loop : "<<getlooplength()<<endl;
	cout << "\n\n//Scholar No.181112205-Arpit Verma//";

	return 0;
}