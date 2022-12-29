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
    lol rows, cols, query;
    cin >> rows >> cols >> query;

    lol **arr = new lol *[rows];

    for (lol i = 0; i < rows; i++)
        arr[i] = new lol[cols];

    lol num;
    for (lol i = 0; i < rows; i++)
    {

        for (lol j = 0; j < cols; j++)
        {
            cin >> num;
            arr[i][j] = num;

            // col sum
            if (j > 0)
                arr[i][j] += arr[i][j - 1];

            // row sum
            if (i > 0)
                arr[i][j] += arr[i - 1][j];

            if (j > 0 && i > 0)
                arr[i][j] -= arr[i - 1][j - 1];
        }
    }
    // cout << "=========" << endl;
    // for (lol i = 0; i < rows; i++)
    // {

    //     for (lol j = 0; j < cols; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "=========" << endl;
    /*
       1  3  6  10 15
       6  11 16 22 36
       8  17 30 41 66
       18 39 56 76 105
       19 41 59 80 110
   */
    while (query--)
    {
        lol r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1--, c1--, r2--, c2--;

        lol sum = arr[r2][c2];

        if (c1 > 0)
            sum -= arr[r2][c1 - 1];
        if (r1 > 0)
            sum -= arr[r1 - 1][c2];
        if (r1 > 0 && c1 > 0)
            sum += arr[r1 - 1][c1 - 1];

        cout << sum << endl;
    }
}