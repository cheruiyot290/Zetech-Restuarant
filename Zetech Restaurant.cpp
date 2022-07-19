//restaurant menu system
//By Ian Cheruiyot
#include <iostream>
using namespace std;
int main(){
	int order,no_deals;
	cout<<"*************WELCOME TO ZETECH RESTAURANT************"<<endl;
	cout<<"*************TODAYS SPECIAL**************************"<<endl;
	cout<<endl;
	cout<<"ITEM NUMBER:    PRICE in Ksh:         NAME:               UNIT:"             <<endl;
	cout<<endl;
	cout<<"*************MEALS************"<<endl;
	cout<<endl;
	cout<<"(1)             500               FISH SERVED WITH RICE                    "<<endl;
	cout<<"(2)             150               BEEF SERVED WITH UGALI                   "<<endl;
	cout<<"(3)             300               CHICKEN SERVED WITH CHAPATI              "<<endl;
	cout<<endl;
	cout<<"Please select the order number: ";
	cin>>order;
	cout<<"Please enter the number of deals: ";
	cin>>no_deals;
	cout<<endl;
	switch(order) {
	
        	case 1:
		cout<<"Order : FISH SERVED WITH RICE."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh500 only."<<endl;
		cout<<"Total price : "<<"Ksh"<<500*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
			case 2:
		cout<<"Order : BEEF SERVED WITH UGALI."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh150 only."<<endl;
		cout<<"Total price : "<<"$"<<150*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
				case 3:
		cout<<"Order : CHICKEN SERVED WITH CHAPATI."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh300 only."<<endl;
		cout<<"Total price : "<<"$"<<300*no_deals<<" "<<"only."<<endl;
	cout<<endl;
}
	cout<<"*************DRINKS************"<<endl;
	cout<<endl;
	cout<<"(1)             100               FRUIT JUICE                    "<<endl;
	cout<<"(2)             50                SODA                           "<<endl;
	cout<<"(3)             40                LEMON WATER                    "<<endl;
	cout<<"(4)             30                TEA                            "<<endl;
	cout<<endl;
	cout<<"Please select the order number: ";
	cin>>order;
	cout<<"Please enter the number of deals: ";
	cin>>no_deals;
	cout<<endl;
	switch(order) {
				case 1:
		cout<<"Order : FRUIT JUICE."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh100 only."<<endl;
		cout<<"Total price : "<<"Ksh"<<100*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
				case 2:
		cout<<"Order : SODA."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh50 only."<<endl;
		cout<<"Total price : "<<"Ksh"<<50*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
				case 3:
		cout<<"Order : LEMON WATER."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh40 only."<<endl;
		cout<<"Total price : "<<"$"<<40*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
		        case 4:
		cout<<"Order : TEA."<<endl;
		cout<<"Number of deals : "<<no_deals<<endl;
		cout<<"Price of each deal: Ksh30 only."<<endl;
		cout<<"Total price : "<<"$"<<30*no_deals<<" "<<"only."<<endl;
		cout<<endl;
		cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
		break;
	
} return 0;
}
