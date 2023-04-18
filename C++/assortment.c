#include<iostream>
using namespace std;

class garage{
	public:
		garage(){
		    	try{}
		 		catch (string c) 
				{
		    	  	throw c ;
		    	}
		  	}
};
class Motor : public garage{	
	string A = "Your car is not start.....";
		public:
			  	Motor() 
			  	{
					throw  A ;
			    	garage();
			  	}
};
int main() 
{
	try
	{
  		Motor a;
	} 
	
	catch (string c)
	{
    	cout << "car engine is fail..... "<< endl << c << endl;
	}
}
