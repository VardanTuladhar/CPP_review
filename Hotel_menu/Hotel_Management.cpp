#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;

    int Qrooms = 0, Qpasta =0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;// Quantity items

    int Srooms = 0, Spasta =0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;// sold items

    int Total_rooms = 0, Total_pasta =0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;// total price items

    cout << "\n Quanitity of items we have";
    cout << "\n Rooms Avaible: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << " \n Quantity of shakes: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken: ";
    cin >> Qchicken;


    cout << "\n \t\t\t\t Please select from menu options:  ";
    cout << " \n\n 1) Rooms $1200";
    cout << " \n 2) Pasta $12";
    cout << " \n 3) Burger $12";
    cout << " \n 4) Noodles $10";
    cout << " \n 5) Shakes $8";
    cout << " \n 6) Chicken $15";
    cout << " \n 7) Information about sales and collection today";
    cout << " \n 8)Exit";
    
    
    cout << "\n\n Please Enter your choice:";
    cin >> choice; 
    
    switch(choice)
    {
	case 1:
		cout << "\n \n How many rooms: ";
		cin >> quant;
		if (Qrooms - Srooms >= quant)
		{
			Srooms = Srooms + quant;
			Total_rooms = ( Total_rooms + quant) *1200;
			cout << "\n You have purchased "<< quant <<" rooms for $" << Total_rooms << endl; 

		}
        else 
        {
            cout << "Only " << Qrooms - Srooms<< " rooms are remaining"; 
        }
        break;
    case 2:
    	cout << "\n \n How many Pastas do you want: ";
		cin >> quant;
		if (Qpasta - Spasta >= quant)
		{
			Spasta = Spasta + quant;
			Total_pasta = ( Total_pasta + quant) *12;
			cout << "\n You have purchased "<< quant <<" rooms for $" << Total_pasta << endl; 

		}
        else 
        {
            cout << "Only " << Qpasta - Spasta<< " rooms are remaining"; 
        }
        break;

	case 3:
		cout << "\n \n How many rooms: ";
		cin >> quant;
		if (Qburger - Sburger >= quant)
		{
			Sburger = Sburger + quant;
			Total_burger = ( Total_burger + quant) *1200;
			cout << "\n You have purchased "<< quant <<" rooms for $" << Total_burger << endl; 

		}
        else 
        {
            cout << "Only " << Qburger - Sburger<< " rooms are remaining"; 
        }
        break;
    case 4:
    	cout << "\n \n How many Pastas do you want: ";
		cin >> quant;
		if (Qnoodles - Snoodles >= quant)
		{
			Snoodles = Snoodles + quant;
			Total_noodles = ( Total_noodles + quant) *12;
			cout << "\n You have purchased "<< quant <<" rooms for $" << Total_noodles << endl; 

		}
        else 
        {
            cout << "Only " << Qnoodles - Snoodles<< " rooms are remaining"; 
        }
        break;


    }



}
