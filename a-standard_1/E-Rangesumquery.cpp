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
#define BREAK cout << endl \
                   << "--------------------------------------------------------------------" << endl
#define LABEL(i, title) cout << " " << i << " - " << title << " :-" << endl \
                             << endl;
#define full(arr, val) memset(arr, val, sizeof(arr) - 1)
#define mino                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

    
void solve1()
{
    lol size, query;
    cin >> size >> query;

    lol *arr = new lol[size];
    lol num;
    loop0(size)
    {
        cin >> num;
        if (i == 0)
            arr[0] = num;
        else
            arr[i] = num + arr[i - 1];
    }

    while (query--)
    {
        lol left, right;
        cin >> left >> right;

        left--, right--;

        if (left == 0)
        {
            cout << arr[right] << endl;
            continue;
        }

        cout << arr[right] - arr[left - 1] << endl;
    }
}

void solve2()
{
    lol size, query;
    cin >> size >> query;

    lol *arr = new lol[size + 1];
    arr[0] = 0;
    lol num;
    loop1(size)
    {
        cin >> num;
        arr[i] = num + arr[i - 1];
    }

    while (query--)
    {
        lol left, right;
        cin >> left >> right;

        cout << arr[right] - arr[left - 1] << endl;
    }
}
int main()
{
    mino;
    solve2();
}