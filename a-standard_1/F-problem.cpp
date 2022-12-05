#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <stdio.h>
#include <assert.h>
#include <memory.h>
#include <bitset>
using namespace std;

#define lol long long int
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define loop0(n) for (size_t i = 0; i < n; i++)
#define loop1(n) for (size_t i = 1; i <= n; i++)
#define loop(i, n) for (int i = 0; i < (int)(n); ++i)
#define loopSz(i, v) for (int i = 0; i < sz(v); ++i)
#define full(arr, val) memset(arr, val, sizeof(arr) - 1)
#define mino                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    mino;

    lol size, query;
    cin >> size >> query;

    lol *arr = new lol[size + 1];
    lol *addedValue = new lol[size + 1];
    addedValue[0] = 0;
    loop1(size)
    {
        cin >> arr[i];
        addedValue[i] = 0;
    }

    while (query--)
    {
        lol left, right, val;
        cin >> left >> right >> val;
        addedValue[left] += val;
        addedValue[right + 1] -= val;
    }

    loop1(size)
        addedValue[i] += addedValue[i - 1];

    loop1(size)
        cout << arr[i] + addedValue[i] << " ";

}