#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    long long int Qrooms = 30, Qpasta = 50, Qburger = 50, Qnooodles = 50, Qshake = 50, Qchicken = 50;

    long long int Srooms = 0, Spasta = 0, Sburger = 0, Snooodles = 0, Sshake = 0, Schicken = 0;

    long long int Totalrooms = 0, Totalpasta = 0, Totalburger = 0, Totalnoodles = 0, Totalshake = 0, Totalchicken = 0;

    long long int Totalbill = 0;

    cout << "\n\nWELCOME TO PARITOSH PENTHOUSE PUNE, India.  (3PIN)" << endl;

    cout << "\n\nQuantities of items we have : ";
    cout << "\n Rooms : "
         << "     " << Qrooms << endl;

    cout << "\n Pasta : "
         << "     " << Qpasta << endl;

    cout << "\n Burger : "
         << "    " << Qburger << endl;

    cout << "\n Noodles : "
         << "   " << Qnooodles << endl;

    cout << "\n shakes : "
         << "    " << Qshake << endl;

    cout << "\n Chicken : "
         << "   " << Qchicken << endl;

m:
    cout << "\n\nMain Menu...       Prices" << endl;
    cout << "--------------------------" << endl;
    cout << "[1] Rooms           1500" << endl;
    cout << "[2] Pasta           150 " << endl;
    cout << "[3] Burger          100 " << endl;
    cout << "[4] Noodles         100 " << endl;
    cout << "[5] Shake           150 " << endl;
    cout << "[6] Chicken         250 " << endl;
    cout << "[7] Info of Sales & Collections " << endl;
    cout << "[8] Exit " << endl;
    cout << "--------------------------" << endl;
    cout << "Enter Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n***********************" << endl;
        cout << "Rooms You Want : ";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Totalrooms = Totalrooms + quant * 1500;
            cout << "\nRooms alloted is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Rooms : " << Qrooms - Srooms << endl;
            cout << "\n***********************" << endl;
            break;
        }

    case 2:
        cout << "Enter Pasta Quantity : ";
        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Totalpasta = Totalpasta + quant * 150;
            cout << "\nPasta Ordered is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Pasta : " << Qpasta - Spasta << endl;
            cout << "\n***********************" << endl;
            break;
        }

    case 3:
        cout << "Enter Burger Quantity : ";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Totalburger = Totalburger + quant * 100;
            cout << "\nBurger Ordered is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Burger : " << Qburger - Sburger << endl;
            cout << "***********************" << endl;
            break;
        }

    case 4:
        cout << "Enter Noodeles Quantity : ";
        cin >> quant;

        if (Qnooodles - Snooodles >= quant)
        {
            Snooodles = Snooodles + quant;
            Totalnoodles = Totalnoodles + quant * 100;
            cout << "\nNoodles Ordered is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Noodles : " << Qnooodles - Snooodles << endl;
            cout << "\n***********************" << endl;
            break;
        }

    case 5:
        cout << "Enter Shakes Quantity : ";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Totalshake = Totalshake + quant * 150;
            cout << "\nShake Ordered is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Shakes : " << Qshake - Sshake << endl;
            cout << "\n***********************" << endl;
            break;
        }

    case 6:
        cout << "Enter Chicken Quantity : ";
        cin >> quant;

        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Totalchicken = Totalchicken + quant * 250;
            cout << "\nChicken Ordered is : " << quant << endl;
            cout << "***********************" << endl;
        }
        else
        {
            cout << "\nRemaining Chicken-roll : " << Qchicken - Schicken << endl;
            cout << "\n--------------------------" << endl;
            break;
        }

    case 7:
        cout << "\n=================================" << endl;
        cout << "Details of Sales & Collections " << endl;
        cout << "=================================" << endl;
        cout << "Rooms : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Rooms : " << Qrooms << endl;
        cout << "Booked Rooms : " << Srooms << endl;
        cout << "Remaining Rooms : " << Qrooms - Srooms << endl;
        cout << "Total Collections From Roomms : " << Totalrooms;

        cout << "\n\nPastas : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Pastas : " << Qpasta << endl;
        cout << "Sold Pastas : " << Spasta << endl;
        cout << "Remaining Pastas : " << Qpasta - Spasta << endl;
        cout << "Total Collections From Pastas : " << Totalpasta;

        cout << "\n\nBurgers : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Burgers : " << Qburger << endl;
        cout << "Sold Burgers : " << Sburger << endl;
        cout << "Remaining Burgers : " << Qburger - Sburger << endl;
        cout << "Total Collections From Burger : " << Totalburger;

        cout << "\n\nNoodles : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Noodles : " << Qnooodles << endl;
        cout << "Sold Noodles : " << Snooodles << endl;
        cout << "Remaining Noodles : " << Qnooodles - Snooodles << endl;
        cout << "Total Collections From Noodles : " << Totalnoodles;

        cout << "\n\nShakes : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Shakes : " << Qshake << endl;
        cout << "Sold Shakes : " << Sshake << endl;
        cout << "Remaining Shakes : " << Qshake - Sshake << endl;
        cout << "Total Collections From Shakes : " << Totalshake;

        cout << "\n\nChicken-rolls : " << endl;
        cout << "--------------------------" << endl;
        cout << "Total Chicken-rolls : " << Qchicken << endl;
        cout << "Sold Chicken-rolls : " << Schicken << endl;
        cout << "Remaining Chicken-rolls : " << Qchicken - Schicken << endl;
        cout << "Total Collections From Chicken-rolls : " << Totalchicken;

        Totalbill = Totalrooms + Totalpasta + Totalnoodles + Totalshake + Totalchicken + Totalburger;

        cout << "\n==========================" << endl;
        cout << "Total Bill : " << Totalbill;
        cout << "\n==========================" << endl;
        break;

    case 8:
        exit(0);

    default:
        cout << "\nInvalid..." << endl;
    }
    goto m;

    return 0;
}