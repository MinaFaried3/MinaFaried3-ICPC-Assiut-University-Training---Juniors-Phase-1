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

    int size, query;
    cin >> size >> query;

    vector<lol> vec(size);
    loop0(size)
            cin >>
        vec[i];

    while (query--)
    {
        lol left, right;

        string function;
        cin >> function;

        if (function == "pop_back")
        {
            vec.pop_back();
        }
        else if (function == "front")
        {
            cout << vec.front() << endl;
        }
        else if (function == "back")
        {
            cout << vec.back() << endl;
        }
        else if (function == "sort")
        {
            cin >> left >> right;
            sort(&vec[left - 1], &vec[right]);
        }
        else if (function == "reverse")
        {
            cin >> left >> right;
            reverse(&vec[left - 1], &vec[right]);
        }
        else if (function == "print")
        {
            cin >> left;
            cout << vec[left - 1] << endl;
        }
        else if (function == "push_back")
        {
            cin >> left;
            vec.push_back(left);
        }
    }
}