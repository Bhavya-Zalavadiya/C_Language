#include<iostream>
using namespace std;

class overload{
	int a;
	public :
		void set(int a){
			this->a=a;
		}
		overload operator<(overload o2){
			overload i;
			if(a>o2.a){
				i.a=a;
			}
			else{
				i.a=o2.a;
			}
			return i;
		}
		void get(overload o2){
			cout<<"Addition is :- "<<a+o2.a;
		}
};
int main(){
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	overload o1,o2,o3;
	o1.set(a);
	o2.set(b);
	o3=o1<o2;
	o3.get(o2);
	
	return 0;
}
