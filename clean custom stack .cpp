#include<iostream>
using namespace std;

template<typename t>
 class mystack{
 protected:
	 int size;
	 t*myarr;
	 int index = 0 ;
 public:
	 mystack(int insize) {
		 
		 size = insize;
		 myarr= new t[size] ; }
	 void push() { 
		 if (!isfull()) {
			 cout << "push your desired value " << endl;
			 t value;
			 cin >> value;
			 myarr[index] = value;
			 index++;
		 }
		 else { cout << " stack is full "; }
	 }
	 void pop() { if (!isempty()) { 
		 cout << "popped " << endl;
		 cout << myarr[index]; 
		 myarr[index] = 0;
		 // someone told me to set myarr[index]= t() // to default value of t as it is more logical than just setting it to 0 "of int" like ;
		 // myarr[index] = t();
		 index--;
	 }
	 else { cout <<" stack is empty " << endl; }
	 }
	 bool isfull() { if (index == size) { return true ; }
	 else { return false; }
	 }
	 bool isempty() { if (index == 0) { return true; }
	 else { return false; }
	 }
	 void display() { for (int i = 0; i < size; i++) { cout << " spot [" << i << "] is  " << myarr[i] << endl; } }
};
int main() {

	int size;
	cout << " enter size of stack"<<endl;
	cin >> size;
	mystack<int>s(size);

	int option = 0; 
	
	for (int i = 0; i < 100; i++) {
		cout << "_____________________________________________________  " << endl;
		cout << "_____________________________________________________  " << endl;
		cout << " choose options   " << endl;
		cout << " * press | 1 | to display   " << endl;
		cout << " * press | 2 | to push onto stack   " << endl;
		cout << " * press | 3 | to pop of stack   " << endl;
		cout << "_____________________________________________________  " << endl;
		cout << "_____________________________________________________  " << endl;
		cin >> option;
		if (option == 1) { 
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
			s.display() ;
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
		}

		else if (option == 2) { 
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
			s.push(); 
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
		}
		else if (option == 3) { 
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
			s.pop();
			cout << "_____________________________________________________  " << endl;
			cout << "_____________________________________________________  " << endl;
		}
	}
	
}