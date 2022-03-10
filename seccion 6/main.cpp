//
//  main.cpp
//  seccion 6
//
//  Created by Ivana Castellanos Barrera on 08/03/22.
//

#include <iostream>

using namespace std;

int main()
{

    cout << "Hello, welcome to Jaime's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms{0};
    const int days{30};
    cin >> number_of_rooms;

    cout << "\nEstimate for carpete cleaning services" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    
    const int price{30};
    cout << "Price per room $ " << price << endl;
    
    int cost{price * number_of_rooms};
    cout << "Cost: $ " << cost << endl;
    
    const float tax{0.06};
    cout << "Tax: $ " << cost * tax << endl;
    cout << "=====================================" << endl;
    cout << "Total stimate: $ " << (cost) + (cost * tax) << endl;
    cout << "This stimate is valid for " << days << " days" << endl;

    return 0;
}
