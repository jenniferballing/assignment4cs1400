#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void main ()
{
	char input='e';
	int money=0;
	int luckyStrikes=5;
	int PallMall=5;
	int Gauloises=5;
	int Camel=5;
	int LuckyQ=5, PallQ=5, GaulQ=5, CamQ=5;
	float hopper=0;
	float bin=0;

while (input!='q')
{	cout<< "\nOptions: \ns - report the machine status\nd - drop in a quarter\n1 - pull the 1st knob\n2 - pull the 2nd knob\n3 - pull the 3rd knob\n"
	<<"4 - pull the 4th knob\nr - restock the machine\nq - quit\n\n";
	cin>>input;
	switch(input)
	{
	case 'd':
		cout<<"Ding\n"<<"\a";
		hopper+=.25;
		break;

	case '1':
		if (hopper>=.75)
		{

			if (LuckyQ==0 || LuckyQ<0){cout<<"You hear mechanical clanking but no cigarettes appear..\n";}
		
			else {cout<<"The money slides from the hopper to the bin, and a pack of Lucky Strikes comes your way.";}
			luckyStrikes=luckyStrikes--;
			LuckyQ=luckyStrikes;
		}
		else{cout<<"Nothing happens..\n";}
		
		bin+=hopper;
		hopper=0;		
		break;

	case '2':
		if (hopper>=.75)
		{
			if (PallQ==0 || PallQ<0){cout<<"You hear mechanical clanking but no cigarettes appear..\n";}
		
			else {cout<<"The money slides from the hopper to the bin, and a pack of Pall Malls comes your way.";}		
		}
		else{cout<<"Nothing happens..\n";}
		
		bin+=hopper;
		hopper=0;
		
		PallMall=PallMall--;
		PallQ=PallMall;
		break;
	case '3':
		if (hopper>=.75)
		{
			if (GaulQ==0 || GaulQ<0){cout<<"You hear mechanical clanking but no cigarettes appear..\n";}
		
			else {cout<<"The money slides from the hopper to the bin, and a pack of Gauloises comes your way.";}		
		}
		else{cout<<"Nothing happens..\n";}
		
		bin+=hopper;
		hopper=0;
		
		Gauloises=Gauloises--;
		GaulQ=Gauloises;
		break;
	case '4':
		if (hopper>=.75)
		{
			if (CamQ==0 || CamQ<0){cout<<"You hear mechanical clanking but no cigarettes appear..\n";}
		
			else {cout<<"The money slides from the hopper to the bin, and a pack of Camels comes your way.";}		
		}
		else{cout<<"Nothing happens..\n";}
		
		bin+=hopper;
		hopper=0;

		Camel=Camel--;
		CamQ=Camel;
		break;
	case 'r':
		cout<<"A burley man saunters over and fiddles around with the machine.\n";
		LuckyQ=5;
		PallQ=5;
		GaulQ=5;
		CamQ=5;
		bin=0;
		break;
	case 's':
		cout<< "Lucky Strikes: "<< LuckyQ<<endl;
		cout<< "Pall Mall: "<< PallQ<<endl;
		cout<< "Gauloises: "<< GaulQ<<endl;
		cout<< "Camel: "<< CamQ<<endl;
		cout<<fixed<< setprecision(2) << bin << " in the machine.\n";
		break;
	default:
		cout<<"I do not understand.";
	}
}
}