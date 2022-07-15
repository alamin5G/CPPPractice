/**
 * @file investmentEquationTable.cpp
 * Write a program to evaluate the following investment.
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    double v=0, p, r, n=10;
    double P[] = {1000, 2000,3000,4000,5000,6000,7000,8000,9000,10000};
    double R[] = {0.10,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19};

    cout << setw(50) << "_______________ see the rate table _____________"<< endl;
    cout << "P = ";
    for(auto i=0; i<n; i++){
        cout << setw(8) << P[i];
    }
    cout << endl;
    cout << "R = ";
    for(auto i=0; i<n; i++){
        cout << setw(8) << R[i];
    }
    cout << endl;
    cout << "Y = ";
    for(auto i=0; i<n; i++){
        cout << setw(8) << i+1;
    }

    cout << endl;
    
    for(auto i=0; i<n; i++){
        cout << "V ="<<i+1;
        for(auto j=0; j<n; j++){
            v = P[i]*(1+R[j]);
            cout << setw(8) << fixed << setprecision(1)<< v;
        }
        cout << endl;
    }


    return 0;
}