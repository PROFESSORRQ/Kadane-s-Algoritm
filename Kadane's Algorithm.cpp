#include <bits/stdc++.h>
#include <algorithm>
#include <hashtable.h>
#include <math.h>
#include <vector>
#include <string.h>
using namespace std;
#define Nmax INT_MAX;
#define Nmin INT_MIN;

int main()
{

    int n, i, j = 1, k, p, l, count = 0, flag = 0;
    cin >> n;
    int arr[n];
    int sum = 0;
    int maxSum = Nmin;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
        if (sum < 0)
            sum = 0;
        maxSum = max(maxSum, sum)
    }
    cout << maxSum;
    return 0;
}
