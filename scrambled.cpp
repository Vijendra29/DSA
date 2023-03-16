#include <bits/stdc++.h>
using namespace std;

bool ScrambleString(string S1, string S2)
{
    int n = S1.length();
    int m = S2.length();

    if (n != m)
    {
        return false;
    }

    if (n == 0 || m == 0)
    {
        return true;
    }
    if (S1 == S2)
    {
        return true;
    }

    for (int i = 1; i < n; i++)
    {

        if (ScrambleString(S1.substr(0, i), S2.substr(0, i)) && ScrambleString(S1.substr(i, n - i), S2.substr(i, n - i)))
        {
            return true;
        }

        if (ScrambleString(S1.substr(0, i), S2.substr(n - i, i)) && ScrambleString(S1.substr(i, n - i), S2.substr(0, n - i)))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string S1, S2;
    cin >> S1 >> S2;

    if (ScrambleString(S1, S2))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}