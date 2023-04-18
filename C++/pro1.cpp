#include<iostream>
using namespace std;

class one {
	private : 
	 	int a;
	public :
		one(int a)
		{
			this->a=a;
		}
		one()
		{
		}
		
		one operator++()
		{
			one tem;
			tem.a= ++a;
			return tem;
		}
		one operator--()
		{
			one tem;
			tem.a= --a;
			return tem;
		}
		void display()
		{
			cout << a << endl;
		}
	
	
};

int main()
{
	one a2(10);
	one a1;
	one a3; 
	
	a1= ++a2;                       
	a3= --a2;
	
	a1.display();
	a3.display();
	
	
}
