#include<iostream>
#include<string> 
using namespace std;
int main()
{
    int quant;
    int choice;

    int Qrooms = 0, Qpasta =0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;// Quantity items

    int Srooms = 0, Spasta =0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;// sold items

    int Total_rooms = 0, Total_pasta =0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;// total price items

    bool loop = true;
    
    string done;

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

    while (loop == true)
    {

        cout << "\n \t\t\t\t Please select from menu options:  ";
        cout << " \n\n 1) Rooms $200";
        cout << " \n 2) Pasta $12";
        cout << " \n 3) Burger $12";
        cout << " \n 4) Noodles $10";
        cout << " \n 5) Shakes $8";
        cout << " \n 6) Chicken $15";
        cout << " \n 7) Information about sales and collection today";
        cout << " \n 8) Exit";
        
        
        cout << "\n\n Please Enter your choice: ";
        cin >> choice; 
        
        switch(choice)
        {
        case 1:
            cout << "\n \n How many rooms: ";
            cin >> quant;
            if (Qrooms - Srooms >= quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = ( Total_rooms + quant) *200;
                cout << "\n You have purchased "<< quant <<" rooms for $" << Total_rooms << endl; 

            }
            else 
            {
                cout << "Only " << Qrooms - Srooms<< " rooms are remaining"; 
            }
            cout << "Enter 1 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "1")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
            
            break;
        case 2:
            cout << "\n \n How many Pastas would you like: ";
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
            cout << "Enter 2 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "2")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
            }
            break;

        case 3:
            cout << "\n \n How many Burger would you like: ";
            cin >> quant;
            if (Qburger - Sburger >= quant)
            {
                Sburger = Sburger + quant;
                Total_burger = ( Total_burger + quant) *12;
                cout << "\n You have purchased "<< quant <<" rooms for $" << Total_burger << endl; 

            }
            else 
            {
                cout << "Only " << Qburger - Sburger<< " rooms are remaining"; 
            }
            cout << "Enter 3 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "3")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
            break;
        case 4:
            cout << "\n \n How many Noodles would you like: ";
            cin >> quant;
            if (Qnoodles - Snoodles >= quant)
            {
                Snoodles = Snoodles + quant;
                Total_noodles = ( Total_noodles + quant) *10;
                cout << "\n You have purchased "<< quant <<" rooms for $" << Total_noodles << endl; 

            }
            else 
            {
                cout << "Only " << Qnoodles - Snoodles<< " rooms are remaining"; 
            }
            cout << "Enter 4 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "4")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
            break;
        case 5:
            cout << "\n \n How many Shakes would you like: ";
            cin >> quant;
            if (Qshake - Sshake >= quant)
            {
                Sshake = Sshake + quant;
                Total_shake = ( Total_shake + quant) *8;
                cout << "\n You have purchased "<< quant <<" rooms for $" << Total_shake << endl; 

            }
            else 
            {
                cout << "Only " << Qshake - Sshake<< " rooms are remaining"; 
            }
            cout << "Enter 5 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "5")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
            break;
        case 6:
            cout << "\n \n How many Chickens do you want: ";
            cin >> quant;
            if (Qchicken - Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = ( Total_chicken + quant) *15;
                cout << "\n You have purchased "<< quant <<" rooms for $" << Total_chicken << endl; 

            }
            else 
            {
                cout << "Only " << Qchicken - Schicken<< " rooms are remaining"; 
            }
            cout << "Enter 6 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "6")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
            break;
        case 7:
            cout <<"\n \n \t\t\t Sales and Quantity of the day: "<< endl;
            cout << "Item/products \t\t Quantity Sold Today \t\t Total Sales" << endl; 
            cout << "Rooms \t\t\t\t"<< Srooms << "\t\t\t\t" << Total_rooms <<endl;
            cout << "Pasta \t\t\t\t" << Spasta << "\t\t\t\t" << Total_pasta << endl;
            cout << "Rooms \t\t\t\t"<< Sburger << "\t\t\t\t" << Total_burger <<endl;
            cout << "Pasta \t\t\t\t" << Snoodles << "\t\t\t\t" << Total_noodles << endl;
            cout << "Rooms \t\t\t\t"<< Sshake << "\t\t\t\t" << Total_shake <<endl;
            cout << "Pasta \t\t\t\t" << Schicken << "\t\t\t\t" << Total_chicken << endl;
            cout << "Enter 7 to look at menu again or 8 to Exit: ";
            cin >> done;
            if (done == "7")
            {
                break;
            }
            else if (done == "8")
            {
                loop = false;
                break;
                
            }
        case 8:
            loop = false;
            break;
            
        }

    }
    




}
