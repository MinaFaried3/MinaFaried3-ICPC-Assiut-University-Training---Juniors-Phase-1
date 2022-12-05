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
    int size, start;
    cin >> size >> start;
    int *arr = new int[size];
    set<int> nums;

    start *= -1;
    loop(i, size)
    {
        cin >> arr[i];
        nums.insert(arr[i]);
    }

    set<int>::iterator itr;
    for (itr = nums.begin(); itr != nums.end(); itr++)
    {
        if (*itr != start)
        {
            cout << start;
            return;
        }

        start++;
    }
}

void solve2()
{
    lol size, start;
    cin >> size >> start;
    lol *arr = new lol[size];
    start *= -1;
    loop(i, size)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    loop(i, size)
    {
        if (arr[i] != start)
        {
            if (arr[i] == arr[i - 1])
                continue;
            cout << start;
            return;
        }

        start++;
    }
}
int main()
{
    mino;
    solve2();
}