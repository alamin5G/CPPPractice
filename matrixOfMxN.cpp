/**
 * @file matrixOfMxN.cpp
 * write a function to read a matrix of size m x n from the keyboard
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-21
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
void matrix(int m, int n)
{
    int **mtx;
    mtx = new int *[m];
    for (auto i = 0; i < n; i++)
    {
        mtx[i] = new int[n];
    }
    cout << "Enter " << m << " x " << n << " matrix element one by one" << endl;
    for (auto i = 0; i < m; i++)
    {
        for (auto j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            mtx[i][j] = value;
        }
    }
    
    cout << "Output of a " << m << " x " << n << " matrix." << endl;

    for (auto i = 0; i < m; i++)
    {
        cout << setw(3);
        for (auto j = 0; j <n; j++)
        {
            cout << mtx[i][j] << setw(3);
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "Enter M x N value for the matrix" << endl;
    cin >> m >> n;
    matrix(m,n);

    return 0;
}