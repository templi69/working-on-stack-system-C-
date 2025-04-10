#include<iostream>
using namespace std;

	template <typename t>
	class AbstractStack{
	public:
		virtual void push(t value) = 0;
		virtual t pop() = 0;
		virtual t top() = 0;
		virtual bool isEmpty() = 0;
		virtual bool isFull() = 0;
		virtual ~AbstractStack() {}
	
public:

	
};
	template<typename t>
	class mystack:public AbstractStack<t> 
	{
	protected:
		int size;
		t*arr;
		int index = 0;
	public:
		mystack(int insize) {
			size = insize;
			arr = new t [size]    ; }
		
		void push(t value) {
			if (!isFull()) {  arr[index] = value;
			index++;
			}
			else { cout << ": stack is full :"; }
		
		
		}

		t pop(){
			
			if (!isEmpty()) {
				index--;
				 return arr[index];
			
			 }
			
		}

		t top() { return arr[0]; }

		bool isEmpty() {
			if (index == -1) { return true; }
			else { return false; }
		}

		bool isFull() {
			if (index == size) { return true; }
			else { return false; }
		}
	//
				void display() { for (int i = 0; i < size; i++) 
				{
					cout << " element "<< "["<<i<<"] " << arr[i] << endl;
				}
				}

	};
int main()
{
	mystack <int>a(5);
	a.push(3);
	a.push(4);
	a.push(5);
	a.push(6);
	a.push(7);
	a.display();
		cout<<" popped item "<< endl;
		cout << a.pop() << endl;
	a.display();
	a.push(6);
	a.display();
	
	return 0;
	system("pause");
}