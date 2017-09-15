/*Create a class named weather report that holds a daily weather report with data members day_of_month, hightemp, lowtemp,a mount_rain and amount_snow. Use different types of constructors to initialize the objects. Also include a function that prompts the user and sets values for each field so that you can override the default values*/

#include<iostream>
using namespace std;
class weather
{
	public:
		int rain,temp,humidity,moist,w;
	public:
		weather()   
		{
			rain=0;
			humidity=0;
			temp=0;
			moist=0;
		}
		void getdata()  
		{     	int i,n=3;
			cout<<"\n enter the rain";
			for(i=0;i<3;i++)
			{
				cin>>rain;
			}
			cout<<"\n enter the humidity";
			for(i=0;i<3;i++)
			{
				cin>>humidity;
			}			
			cout<<"\n enter the temp";
			for(i=0;i<3;i++)
			{
				cin>>temp;
			}			
			cout<<"\n enter the moist";
			for(i=0;i<3;i++)
			{			
				cin>>moist;
			}
		}

		void display()      
		{
			cout<<"\n Rain";
			cout<<rain;
			cout<<"\n Humidity";
			cout<<humidity;
			cout<<"\n Temperature";
			cout<<temp;
			cout<<"\n Moisture \n";
			cout<<moist;
		}
 };  
int main()
{
weather w;
w.getdata();
w.display();
}

/*oslab@oslab-HP:~$ g++ weather2.cpp
oslab@oslab-HP:~$ ./a.out

 enter the rain23
23
22

 enter the humidity33
44
55

 enter the temp55
44
33

 enter the moist33
22
22

 Rain22
 Humidity55
 Temperature33
 Moisture 
22oslab@oslab-HP:~$ 
*/


