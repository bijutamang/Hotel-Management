#include <iostream>

using namespace std;

class Hotal
{
private:
    int quantity, choices, Total_income_of_day = 0;
    // Quantity
    int quantity_rooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // Food Items sold
    int sold_room = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Schicken = 0, Sshake = 0;
    // Total stock of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_chicken = 0, Total_shake = 0;

public:
    // k k chainxha order liko
    void takeorder();
    void rooms();
    void pasta();
    void burger();
    void shake();
    void noodles();
    void chicken_roll();
    void total_earn_money_day();

    // kk kura haru biko k k baki xha kati poisa utho
    void Information_of_sales_and_coll();
};

void Hotal ::takeorder()
{
    // Store items on hotal
    // Menu card
    cout << "\n\t Quantity of items we have.";
    cout << "\n Rooms avaliable: ";
    cin >> quantity_rooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of Shake: ";
    cin >> Qshake;
    cout << "\n Quantity of Chicken-roll: ";
    cin >> Qchicken;
}

// Rooms
void Hotal ::rooms()
{
    cout << "\n\t Enter the number of rooms you want: ";
    cin >> quantity;
    if (quantity_rooms == 0)
    {
        cout << "We don't have any rooms right now! Thank you." << endl;
    }

    else if (quantity_rooms - sold_room >= quantity)
    {
        sold_room = sold_room + quantity;
        Total_rooms = Total_rooms + quantity * 1000;
        cout << "\n\t\t " << quantity << " Room/Rooms have been alloated to you." << endl;
    }

    else
    {
        cout << "\n\t Only " << quantity_rooms - sold_room << " Rooms remaining in hotel.";
    }
}

// Pasta
void Hotal ::pasta()
{
    cout << "\n\t How many pasta you want: ";
    cin >> quantity;
    // check pasta kati xha vnyr
    if (Qpasta == 0)
    {
        cout << "We don't have any Pasta right now! Thank you." << endl;
    }

    else if (Qpasta - Spasta >= quantity)
    {
        // Pasta lai 1 ly badako
        Spasta = Spasta + quantity;
        Total_pasta = Total_pasta + quantity * 120;
        cout << "\n\t " << quantity << " Pasta have been order please wait a min." << endl;
    }

    else
    {
        cout << "\n\t Only " << Qpasta - Spasta << " Pasta Remaining in hotel." << endl;
    }
}
// Burger
void Hotal ::burger()
{
    cout << "\n\t Quantity of burger you want: ";
    cin >> quantity;
    if (Qburger == 0)
    {
        cout << "We don't have any Burger right now! Thank you." << endl;
    }

    // check pasta kati xha vnyr
    else if (Qburger - Sburger >= quantity)
    {
        // Pasta lai 1 ly badako
        Sburger = Sburger + quantity;
        Total_burger = Total_burger + quantity * 140;
        cout << "\n\t " << quantity << " Burger have been order please wait a min." << endl;
    }

    else
    {
        cout << "\n\t Only " << Qburger - Sburger << " Burger Remaining in hotel." << endl;
    }
}

// Noodles
void Hotal ::noodles()
{
    cout << "\n\t Quantity of Noodles you want: ";
    cin >> quantity;
    if (Qnoodles == 0)
    {
        cout << "We don't have any Noodles right now! Thank you." << endl;
    }

    // check pasta kati xha vnyr
    else if (Qnoodles - Snoodles >= quantity)
    {
        // Pasta lai 1 ly badako
        Snoodles = Snoodles + quantity;
        Total_noodles = Total_noodles + quantity * 120;
        cout << "\n\t " << quantity << " Noodles has been order please wait a min." << endl;
    }

    else
    {
        cout << "\n\t Only " << Qnoodles - Snoodles << " Noodles Remaining in hotel." << endl;
    }
}

// Shake
void Hotal ::shake()
{
    cout << "\n\t Quantity of Shake you want: ";
    cin >> quantity;
    if (Qshake == 0)
    {
        cout << "We don't have any Shake right now! Thank you." << endl;
    }

    // check pasta kati xha vnyr
    else if (Qshake - Sshake >= quantity)
    {
        // Pasta lai 1 ly badako
        Sshake = Sshake + quantity;
        Total_shake = Total_shake + quantity * 100;
        cout << "\n\t " << quantity << " Shake have been order please wait a min." << endl;
    }

    else
    {
        cout << "\n\t Only " << Qshake - Sshake << " Shake Remaining in hotel." << endl;
    }
}

// Chicken
void Hotal ::chicken_roll()
{
    cout << "\n\t Quantity of Chicken roll you want: ";
    cin >> quantity;
    if (Qchicken == 0)
    {
        cout << "We don't have any chickent Rool right now! Thank you." << endl;
    }

    // check pasta kati xha vnyr
    else if (Qchicken - Schicken >= quantity)
    {
        // Pasta lai 1 ly badako
        Schicken = Schicken + quantity;
        Total_chicken = Total_chicken + quantity * 200;
        cout << "\n\t " << quantity << " Chicken have been order please wait a min." << endl;
    }

    else
    {
        cout << "\n\t Only " << Qchicken - Schicken << " Chicken Remaining in hotel." << endl;
    }
}

// Sales and how collection Deatils
void Hotal ::Information_of_sales_and_coll()
{
    cout << "\n\tDetails of sales and collection ";
    int input, a = 0;
    while (a != 3)
    {
    // jump is input is wrong
    salesJump:;
        cout << "\n1. Rooms\n";
        cout << "2. Pasta\n";
        cout << "3. Burger\n";
        cout << "4. Noodles\n";
        cout << "5. Shake\n";
        cout << "6. Chicek-roll\n";
        cout << "7. Exit\n";
        cout << "What do you wanna search for: ";
        cin >> input;
        switch (input)
        {
        // Rooms Details
        case 1:
            cout << "\n\n Number of rooms we have : " << quantity_rooms;
            cout << "\n Number of rooms we give for rent:" << sold_room;
            cout << "\n Remaining rooms: " << quantity_rooms - sold_room;
            cout << "\n Total Rooms collection of the day: " << Total_rooms << endl;
            break;
        // Pasta Details
        case 2:
            cout << "\n\n Number of Pasta we have : " << Qpasta;
            cout << "\n Number of Pasta we give for rent: " << Spasta;
            cout << "\n Remaining Pasta: " << Qpasta - Spasta;
            cout << "\n Total Pasta collection of the day: " << Total_pasta << endl;
            break;
        // Burger Details
        case 3:
            cout << "\n\n Number of Burger we have : " << Qburger;
            cout << "\n Number of Burger we give for rent: " << Sburger;
            cout << "\n Remaining Burger: " << Qburger - Sburger;
            cout << "\n Total Burger collection of the day: " << Total_burger << endl;
            break;
        // Noodles Details
        case 4:
            cout << "\n\n Number of Noodles we have : " << Qnoodles;
            cout << "\n Number of Noodles we give for rent " << Snoodles;
            cout << "\n Remaining Noodles:" << Qnoodles - Snoodles;
            cout << "\n Total Noodles collection of the day: " << Total_noodles << endl;
            break;
        // Shake Details
        case 5:
            cout << "\n\n Number of Shake we have : " << Qshake;
            cout << "\n Number of Shake we give for rent: " << Sshake;
            cout << "\n Remaining Shake: " << Qshake - Sshake;
            cout << "\n Total Shake collection of the day: " << Total_shake << endl;
            break;
        // Chicken Rool Details
        case 6:
            cout << "\n\n Number of Chicken rool we have : " << Qchicken;
            cout << "\n Number of Chicken rool we give for rent: " << Schicken;
            cout << "\n Remaining Chicken rool: " << Qchicken - Schicken;
            cout << "\n Total Chicken rool collection for the day: " << Total_chicken << endl;
            break;
        // Exit
        case 7:
            exit(0);
        default:
            cout << "\nPlease select the numbers mentioned above!" << endl;
        }
        goto salesJump;
    }
}

// Total Sales of the day
void Hotal ::total_earn_money_day()
{
    Total_income_of_day = Total_rooms + Total_burger + Total_chicken + Total_noodles + Total_pasta + Total_shake;
    cout << "Day of sales is: " << Total_income_of_day << endl;
};

int main()
{
    // Take input from user for make
    Hotal bhotal;
    int a = 0;
    int input;
    int choice;
    cout << "\t\t\t ***** Welcome to hell Hotal *****\n\n";
    // cout << "[1]For Admin\n[2] For Customer: ";
    // cin >> choice;
    // Admin xha vny
    // if (choice == 1)
    // {
    //     bhotal.takeorder();
    // }
    // // Customer ho vny
    // else
    // {
    while (a != 3)
    {
    start:;
        cout << "\n\t Please select from the menu options\n";
        cout << "\n0. Add Items\n";
        cout << "1. Rooms\n";
        cout << "2. Pasta\n";
        cout << "3. Burger\n";
        cout << "4. Noodles\n";
        cout << "5. Shake\n";
        cout << "6. Chicek-roll\n";
        cout << "7. Information reading sale and collection\n"; // this for admin and owner
        cout << "8. Total Income of the day\n";
        cout << "9. Exit\n";
        cout << "\n\n Please Enter your choice: ";
        // ordre jump
        cin >> input;
        switch (input)
        {
        case 0:
            bhotal.takeorder();
            break;
        case 1:
            bhotal.rooms();
            break;
        case 2:
            bhotal.pasta();
            break;
        case 3:
            bhotal.burger();
            break;
        case 4:
            bhotal.noodles();
            break;
        case 5:
            bhotal.shake();
            break;
        case 6:
            bhotal.chicken_roll();
            break;
        case 7:
            bhotal.Information_of_sales_and_coll();
            break;
        case 8:
            bhotal.total_earn_money_day();
            break;
        case 9:
            exit(0);
        default:
            cout << "\nPlease select the numbers mentioned above!" << endl;
            break;
        }
        goto start;
    }
    // }
    return 0;
}