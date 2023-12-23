/*WAP to create simple calculator using class*/
#include<iostream>
using namespace std;
class calculator 
{
	float a,b;
	
	public:
		void input()
		{
			cout<<"\n\t enter a first number : ";
			cin>>a;
			cout<<"\n\t enter a second number : ";
			cin>>b;
		}
		float add()
		{
			return a+b;
		}
		float sub()
		{
			return a-b;
		}
		float mul()
		{
			return a*b;
		}
		float div()
		{
			return a/b;
		}
};
main()
{
	int ch;
	
	calculator obj;
	
	cout<<"\n\n\t enter 1 to addition";
	cout<<"\n\n\t enter 2 to substraction";
	cout<<"\n\n\t enter 3 to multiplication";
	cout<<"\n\n\t enter 4 to division";
	cout<<"\n\n\t enter 5 to exit";
	
	do
	{
		cout<<"\n\n\t enter your choice : ";
		cin>>ch;
	    switch(ch)
	    {
	    	case 1:
	    		obj.input();
	    		cout<<"\n\n\t result = "<<obj.add();
	    		break;
	    	 
	    	case 2:
	    		obj.input();
	    		cout<<"\n\n\t result = "<<obj.sub();
	    		break;
	    		
	    	case 3:
				obj.input();
				cout<<"\n\n\t result = "<<obj.mul();
				break;
			
			case 4:
				obj.input();
				cout<<"\n\n\t result = "<<obj.div();
				break;	
		}
    }
    while(ch >= 1 && ch <= 4);
}




