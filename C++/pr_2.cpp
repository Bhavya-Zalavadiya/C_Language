//WAP to create a class to read and add two distance.
#include<iostream>
using namespace std;

class Distance {
	int feet1,feet2,tf,tdis;
	int inch1,inch2,ti;
	
	public :
		void input(int feet1,int feet2,int inch1,int inch2)
		{
			this->feet1=feet1;
			this->feet2=feet2;
			this->inch1=inch1;
			this->inch2=inch2;
		}
		void output () {
			tf=feet1 + feet2;
			ti=inch1 + inch2;
			
			if(ti>=12) {
				tf++;
				ti-=12;
			}
			cout<<"Total distance is : "<<tf<<"Feet and "<<ti<<"Inch";
			
		}
};

int  main () {
	int feet1,feet2;
	int inch1,inch2;
	
	cout<<"Enter feet1 : ";
	cin>>feet1;
	cout<<"Enter feet2 : ";
	cin>>feet2;
	cout<<"Enter inch1 : ";
	cin>>inch1;
	cout<<"Enter inch2 : ";
	cin>>inch2;
	
	Distance d; 
	d.input(feet1,feet2,inch1,inch2);
	d.output();
	return 0;
}
