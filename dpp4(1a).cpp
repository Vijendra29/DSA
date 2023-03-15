#include <bits/stdc++.h>
using namespace std;
#define ll long long

int knapsack(int W[], int V[], int w, int n)
{
    if (w == 0 || n == 0)
    {
        return 0;
    }
    if (W[n - 1] > w)
    {
        return knapsack(W, V, w, n - 1);
    }
    else
    {
        ll taken = V[n - 1] + knapsack(W, V, w - W[n - 1], n - 1);
        ll not_taken = knapsack(W, V, w, n - 1);
        return max(taken, not_taken);
    }
}