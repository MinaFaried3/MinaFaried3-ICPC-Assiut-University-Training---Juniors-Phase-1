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

    string str;
    cin >> str;

    int *frequency = new int[str.size() + 1]{0};

    for (int i = 0; i < str.size(); i++)
    {
        frequency[i + 1] += frequency[i];
        if (str[i] == 'a')
        {
            frequency[i + 1]++;
        }
    }

    int query;
    cin >> query;

    while (query--)
    {
        int start, end;
        cin >> start >> end;
        cout << frequency[end] - frequency[start - 1] << endl;
    }
}