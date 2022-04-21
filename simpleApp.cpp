/**
 * @file simpleApp.cpp
 * make a simple food ordering app
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    string foodItem[] = {"Apple Juice", "Burger", "Cake", "Sandwich", "Coffee", "Tea", "Drink"};
    int foodPrice[] = {78, 250, 150, 100, 80, 50, 42};
    int len = size(foodItem);
    cout << "----Welcome Simple App Store----\n"
         << endl;
    cout << "Item we have today:\n\t";

    for (i = 0; i < len; i++)
    {
        cout << i + 1 << "." << foodItem[i] << "\t= " << foodPrice[i] << " tk\n\t";
    }

    cout << "Which item do you want to chose? " << endl;

    int foodItemSelect;
    cin >> foodItemSelect;

    if (foodItemSelect > len)
    {
        cout << "You have inputted unlisted item..\n";
        exit(0);
    }
    foodItemSelect = foodItemSelect - 1;
    cout << "You Have selected " << foodItem[foodItemSelect] << endl;
    cout << "How many " << foodItem[foodItemSelect] << ", Do you want to order?\n";
    int purchaseItem;
    cin >> purchaseItem;
    double vat = 0.15;
    cout << "Your bill for: " << endl;
    cout << foodItem[foodItemSelect] << " " << purchaseItem << "pc(s) = " << fixed << setprecision(2) << purchaseItem * (foodPrice[foodItemSelect]) << " tk" << endl;
    cout << "Vat (15%): " << fixed << setprecision(2) << purchaseItem * foodPrice[foodItemSelect] * vat << " tk" << endl;
    double totalTk = purchaseItem * (foodPrice[foodItemSelect]) + purchaseItem * foodPrice[foodItemSelect] * vat;
    cout << "Total = " << fixed << setprecision(2) << totalTk << " tk" << endl;
    cout << "Please, Pay your bill, sir: ";
    double money;
    cin >> money;

    while (money < totalTk)
    {
        double pay = totalTk - money;
        cout << "Still You will you have to pay :" << fixed << setprecision(2) << pay << " tk" << endl;
        double moneyAgain;
        cin >> moneyAgain;
        money = money + moneyAgain;
        
    }
    if (money > totalTk)
    {
        cout << "You will get returned :" << fixed << setprecision(2) << money - totalTk << " tk" << endl;
    }

    cout << "Thank you for having with us." << endl;

    return 0;
}
