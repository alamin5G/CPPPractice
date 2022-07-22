/**
 * @file 1sComplementBinary.cpp
 * write a program for 1's complement
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
class complements
{
    string binary;

    void insertBinary()
    {
        cout << "Enter Binary Number: " ;
        cin >> binary;
    }

    void checkBinary()
    {
        insertBinary();

        for (auto i = 0; i < binary.size(); i++)
        {
            if (binary.at(i) != '0' && binary.at(i) !='1')
            {
                cout << "This is not a binary number!!" <<endl;
                cout << "Program has stoped!" << endl;
                exit(0);
            }
        }
    }

public:
    void getComplements()
    {
        checkBinary();

        for (auto i = 0; i < binary.size(); i++)
        {
            if (binary.at(i) == '0')
            {
                binary.at(i) = '1';
            }
            else
            {
                binary.at(i) = '0';
            }
        }

        cout << "1's Complement of the above binary is: " << binary << endl;
    }
};

int main()
{
    complements binary;
    binary.getComplements();
    return 0;
}