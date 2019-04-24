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
		void display() {
			int i;
			cout<<"Stack: ";
			for(i = 0;i<=top;i++){
				cout<<data[i];}
				cout<<endl;
		}
	};

	int Precedence(char op){
		if (op == '*' || op == '/'){
			return 1;}
		else if(op == '+' || op =='-'){
			return 0;}
		else return -1;
		}

	int Operator(char op){
		string Operator = "+-*/";
		for(int i=0;Operator[i];i++){
			if(op == Operator[i]){
				return 1;}
			}
		return 0;
		}

	int Operand(char op){
		string Operand = "1234567890";
		for(int i=0;Operand[i];i++){
			if(op == Operand[i]){
				return 1;}
			}
		return 0;
		}

	int hasil(int A,char C,int B){
		double hasil;
		if(C == '+'){
			hasil = B+A;
			}
		else if(C == '-'){
			hasil = B-A;
			}
		else if(C == '*'){
			hasil = B*A;
			}
		else if(C == '/'){
			hasil = B/A;
			}
		return (double)hasil;
		}
