#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "What do you want to eat?" << endl;
    string foodName;
    getline(cin, foodName);
    cout << "How many you want?" << endl;
    int piece;
    cin >> piece;
    cout << "You want "<< piece << " piece(s) " << foodName << " to eat." << endl;

    
    return 0;
}
