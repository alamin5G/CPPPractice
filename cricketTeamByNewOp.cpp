/**
 * @file cricketTeamByNewOp.cpp
 * see the problem - https://prnt.sc/lwHfHPvzRSsD
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string *playerName;
    int *run;
    int *innings;
    int *timesNotOut;
    double *avg;
    int n;
    cout << "How many players record you want to add and show?" << endl;
    cin >> n;
    playerName = new string[n];
    run = new int[n];
    innings = new int[n];
    timesNotOut = new int[n];
    avg = new double[n];

    for (auto i = 0; i < n; i++)
    {
        cout << "Input details for player : " << i + 1 << endl;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, playerName[i]);
        cout << "Enter Run: ";
        cin >> run[i];
        cout << "Innings: ";
        cin >> innings[i];
        cout << "Times Not Out: ";
        cin >> timesNotOut[i];
        avg[i] = double(run[i]) / innings[i];
    }

    cout << setw(20) << "Player details: " << endl;
    cout << "Player's Name " << setw(10) << "Run " << setw(10) << "Innings" << setw(14) << "times not out" << setw(10) << "Averages" << endl;
    for (auto i = 0; i < n; i++)
    {
        cout << playerName[i] << setw(16) << run[i] << setw(10) << innings[i] << setw(14) << timesNotOut[i] << setw(10) << avg[i] << endl;
    }

    return 0;
}