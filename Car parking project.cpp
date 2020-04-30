#include <iostream>
using namespace std;
int main()
{
	int rickshaw = 0;
	int car = 0;
	int bus = 0;
	int cycle = 0;
	int bike = 0;
	int ven = 0;
	
int u_input;
int amount = 0;
int count = 0;

while(true)
{
cout<<endl;
cout<<"######################################"<<endl;	
cout<<"PRESS 1 FOR CYCLE : " <<endl;
cout<<"PRESS 2 FOR BIKE : " <<endl;
cout<<"PRESS 3 FOR RICKSHAW : " <<endl;
cout<<"PRESS 4 FOR CAR : " <<endl;
cout<<"PRESS 5 FOR BUS : " <<endl;
cout<<"PRESS 6 FOR VEN : " <<endl;
cout<<"PRESS 7 TO SHOW THE RECORD : " <<endl;
cout<<"PRESS 8 TO DELETE THE RECORD : " <<endl;
cout<<"######################################"<<endl;
cin>>u_input;

if(u_input == 1)
{
	
	if(count <= 50)
	{	
	amount = amount + 100;
	count = count + 1;	
	cycle++;
    }
else 
cout<<"NO MORE CYCLES, PARKING IS FULL! "<<endl;
} 

else if (u_input == 2)
{
	if(count <= 50)
	{	
	amount = amount + 200;
	count = count + 1;
	bike++;
    }
else 
cout<<"NO MORE BIKES, PARKING IS FULL! "<<endl;
} 

else if (u_input == 3)
{
	if(count <= 50)
	{
	amount = amount + 300;
	count = count + 1;
	rickshaw++;
    }
else 
cout<<"NO MORE RICKSHAWS, PARKING IS FULL! "<<endl;
} 
else if (u_input == 4)
{
	if(count <= 50)
	{	
	amount = amount + 400;
	count = count + 1;
	car++;
    }
else 
cout<<"NO MORE CARS, PARKING IS FULL! "<<endl;
} 
else if (u_input == 5)
{
	if(count <= 50)
	{	
	amount = amount + 500;
	count = count + 1;
	bus++;
    }
else 
cout<<"NO MORE BUSES, PARKING IS FULL! "<<endl;
} 
else if (u_input == 6)
{
	if(count <= 50)
	{	
	amount = amount + 600;
	count = count + 1;
	ven++;
    }
else 
cout<<"NO MORE VEN, PARKING IS FULL! "<<endl;
} 
else if (u_input == 7)
{
 cout<<endl<<endl;	
 cout<<"****************************************************"<<endl;
 cout<<"****************************************************"<<endl;
 cout<<"THE TOTAL AMOUNT : "<<amount<<endl;
 cout<<"THE TOTAL NUMBER OF VEHICLES PARKED : "<<count<<endl;
 cout<<"THE TOTAL NUMBER OF CYCLES PARKED : "<<cycle<<endl;
 cout<<"THE TOTAL NUMBER OF BIKES PARKED : "<<bike<<endl;
 cout<<"THE TOTAL NUMBER OF RICKSHAWS PARKED : "<<rickshaw<<endl;
 cout<<"THE TOTAL NUMBER OF CARS PARKED : "<<car<<endl;
 cout<<"THE TOTAL NUMBER OF BUSES PARKED : "<<bus<<endl;
 cout<<"THE TOTAL NUMBER OF VENS PARKED : "<<ven<<endl;
 cout<<"****************************************************"<<endl;
 cout<<"****************************************************"<<endl;
 cout<<endl<<endl;
}
else if (u_input == 8)
{
	amount = 0;
	count = 0;
cout<<endl<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<"RECORD DELETED" <<endl;		
cout<<"$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<endl<<endl;
}
else 
{
	cout<<"TNVALID NUMBER : "<<endl;
	
}

}
 return 0;
}
