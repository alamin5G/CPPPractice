/**
 * @file iteratorWithVector.cpp
 * The following code creates and uses an iterator with a vector:
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vi;
    vector<int>::iterator it;
    for(auto i=1; i<=10; i++){
        vi.push_back(i);
    }

    it = vi.begin();
    int sum=0;
    while (it!= vi.end()){
        sum+=*it;
        it++;
    }
    
    cout << "Total = " << sum << endl;
    

    return 0;
}