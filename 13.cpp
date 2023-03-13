
#include <bits/stdc++.h>
using namespace std;

string Pdrm(string S)
{

    string S2 = S;
    reverse(S2.begin(), S2.end());

    if (S == S2)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    string S;
    cin >> S;
    cout << Pdrm(S);

    return 0;
}
