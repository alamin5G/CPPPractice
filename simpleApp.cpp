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
    string foodItem[] = {"Apple Juice", "Burger", "Cake", "Sandwich", "Coffee", "Tea", "Drink"};
    cout << "----Welcometo Simple App Store----\n"<<endl;
    cout << "Item we have today:\n\t";
    for (int i = 1; i <=std::size(foodItem); i++)
    {
        cout << foodItem[i] << "\n\t";
    }
    
    return 0;
}
