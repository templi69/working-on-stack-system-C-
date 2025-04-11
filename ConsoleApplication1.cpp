#include<iostream>
using namespace std;

template<typename t>
class mycarstack 
{
protected:
	int size;
	t* cararr;
		t* removedcars;
	int index = 0;
public:
	mycarstack(int insize) {
		size = insize;
		cararr = new t[size];
		removedcars = new t[size];
	}
	void search() {
		cout << "____________________________________________________________" << endl;
		cout << " enter numberplate of vehicle you want to find " << endl;
		t value{};
		cin >> value;
		for (int i = 0; i < size; i++) {
			if (value == cararr[i]) { cout << " car found in parking lot at spot"<<" [" << i << "] " << endl; }
			else { cout << "car is not at"<<" [" << i << "] " << "spot" << endl; }
		}
		cout << "____________________________________________________________" << endl;

	}
	void push() {
		if (!isFull()) {
			t carnum;
			cin >> carnum;
			cararr[index] = carnum;
			index++;
			cout << "total cars are " << index << " "  << endl;
			cout << "* Added "<<endl;
		}
		else { cout << ": stack is full :"; }


	}

	t pop() {

		if (!isEmpty()) {
			cararr[index] = 1;
			index--;
			cout << "total cars are " << index << " " << endl;
			return cararr[index];

		}

	}

	t top() { return cararr[0]; }

	bool isEmpty() {
		if (index == -1) { return true; }
		else { return false; }
	}

	bool isFull() {
		if (index == size) { return true; }
		else { return false; }
	}
	//
	void display() {
		cout << "____________________________________________________________" << endl;

		for (int i = 0; i < size; i++)
		{
			cout << " Car " << "[" << i << "] Plate Number is " << cararr[i] << endl;
		}
		cout << "____________________________________________________________" << endl;

	}
	void removecar() {
		t val{};
		if (!isEmpty()) {
			cout << " enter number plate of car u want to remove " << endl;
			cin >> val;
			
		}
		int popnum = 0;
		for (int i = 0; i < 8; i++) {
			popnum++;
			if (pop() == val) {
				cout << " car out now ";
				break;
			}
			else {
				cout << " number plate not found here" << endl;
				removedcars[i] = pop();

			}
		}
		for (int i = 0; i < popnum; i++) {
			cout << " adding"<< popnum << " cars manually " << endl;
			push();
		}
	}
};
int main()
{
	mycarstack <double>a(8);
	
	a.display();
	
	int option = 0;
	for (int i = 0; i < 100; i++) {
		cout << " enter option you want to choose " << endl;
		cout << "* 1 to | Car number plate you want to add | " << endl;
		cout << "* 2 to | search vehice by number plate |  " << endl;
		cout << "* 3 to | exit vehicle by number plate | " << endl;
		cout << "* 4 to | display vehicles number plate | " << endl;

		cin >> option;

		if (option == 1) {
			cout << "______________________ss______________________________________" << endl;

			if (!a.isFull()) {

				cout << " enter car number plate you want to add ";
				a.push();
			}
			else { cout << " Car parking lot is now full :: option not avalible at moment ::"<<endl; }
			cout << "____________________________________________________________" << endl;

		}
		else if (option == 2) { 
			cout << "____________________________________________________________" << endl;

			a.search();
			cout << "____________________________________________________________" << endl;

		}
		else if (option == 3) {   
			cout << "____________________________________________________________" << endl;

			if (!a.isEmpty())
				cout << " enter car number plate you want to remove ";
			a.removecar();
			//a.pop();
			cout << "____________________________________________________________" << endl;

		}
		else if (option == 4) { a.display(); }
		else {
			cout << "____________________________________________________________" << endl;

			cout << " Option not avalile yet,:: try again ::" << endl; }
		cout << "____________________________________________________________" << endl;

	}
	
	return 0;
	system("pause");
}