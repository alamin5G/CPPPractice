/**
 * @file templateFunction.cpp
 * create a function template
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-23
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>

using namespace std;

class MaxFind
{
private:
    double a, b;

public:
    template <typename T>
    T MAX_NUMBER(T x, T y)
    {

        return x > y ? x : y;
    }
};

int main()
{
    double a, b;

    cin >> a >> b;

    MaxFind m;
    double max = m.MAX_NUMBER(a, b);
    cout << "Max number is: " << max << endl;

    return 0;
}