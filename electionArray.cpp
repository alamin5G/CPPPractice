/**
 * @file electionArray.cpp
 * see the problem - https://prnt.sc/kKqFb-Zm7mJ3
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
    const int c = 5;
    int count[c];
    int spoiltCount = 0;
    for (auto i = 0; i < c; i++)
    {
        count[i] = 0;
    }

    cout << "Press 1. for Candidate 1 vote\n";
    cout << "Press 2. for Candidate 2 vote\n";
    cout << "Press 3. for Candidate 3 vote\n";
    cout << "Press 4. for Candidate 4 vote\n";
    cout << "Press 5. for Candidate 5 vote\n";
    cout << "Press anything for spoilt vote\n";
    cout << "Press 0 for stoping the vote\n";

    int vote;
    while (cin >> vote)
    {
        for (auto i = 0; i < c; i++)
        {
            if (vote-1 == i)
            {
                count[i]= count[i]+1;
            }
        }

        if (vote == 0)
        {
            break;
        }
        else if (vote > 5)
        {
            spoiltCount++;
        }
    }
   

    
        cout << setw(20) << "--------------- Candidate Got Votes--------------" << endl;

        for (auto i = 0; i < c; i++)
        {
            cout << "Candidate-" << i+1 << setw(13);
        }
        cout << endl;
        for (auto i = 0; i < c; i++)
        {
            cout << "Get Votes-" << count[i] << setw(13);
        }
        cout << endl;
        cout << "Spoilt votes " << spoiltCount << endl;
        exit(0);
    
    return 0;
}