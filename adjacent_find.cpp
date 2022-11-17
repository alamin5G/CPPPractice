/**
 * @file adjacent_find.cpp
 * //adjacent element finding from a vector. consecutive same value 2 times. 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    int a;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        v1.push_back(a);
        // add a duplicate 7 into v1
        /*if (i == 10)
        {
            v1.push_back(i);
        }*/
    }
    vector<int>::iterator result;
    for(auto i=0; i<10; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    result = adjacent_find(v1.begin(), v1.end());
    if (result == v1.end())
    {
        cout << "Did not find adjacent elements in v1" << endl;
    }
    else
    {
        cout << "Found matching adjacent elements starting at " << *result
             << endl;
    }
}
