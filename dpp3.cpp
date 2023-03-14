#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Solve(vector<ll> a, ll k, ll i)
{
    if (a.size() == 1)
    {
        cout  << "\nAnswer: " << a[0] << endl;
        return;
    }
    i = (i + k) % a.size();
    cout  << "Soldier Number " << a[i] << " Killed !";
    a.erase(a.begin() + i);
    Solve(a, k, i);
}
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a;
    for (ll i = 1; i <= n; i++)
        a.push_back(i);

    k--;
    Solve(a, k, 0);

    return 0;
}