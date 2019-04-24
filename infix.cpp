#include <iostream>
#define n 100
using namespace std;


	class Stack
	{
	private:
		int data[n];
		int top;
	public:
		Stack()
		{
			top = -1;
		}

		int Top() 
		{
			return data[top];
		}

		int IsEmpty()
		{
			if(top == -1) return 1;
			else return 0;
		}
		void Push(int x) 
		{
		  if(top == n-1) {
				cout<<"Stack Penuh";
			}
			else {data[++top] = x;
			}
		}


		void Pop() 
		{
			if(top == -1) {
				cout<<"Stack Kosong";
			}
			else {top--;}	
		} 

		void removespace ()
		{
			for(int i=0;data[i];i++){
			while(data[i] == ' '){
				for(int j=i;data[j];j++){
					data[j] = data[j+1];
					}
					}
				}
		}

