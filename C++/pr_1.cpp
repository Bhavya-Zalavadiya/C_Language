#include <iostream>
using namespace std;

class Garage{
	public:
	
		  	Garage() 
			{
		    	try 
				{
		    	
		    	}
		 		catch (string m) 
				{
		    	  	throw m ;
		    	}
		  	}
 
};

class Motor : public Garage{
	
	string car="Your car's motor has a problem...";
			
		public:
			  	Motor() 
			  	{
					throw  car ;
			    	Garage();
			  	}
};


int main() 
{
	try
	{
  		Motor a;
	} 
	
	catch (string m)
	{
    	cout<<"Your motor's problem has been solved!!!"<<endl<<endl<<m<<endl;
	}
}
