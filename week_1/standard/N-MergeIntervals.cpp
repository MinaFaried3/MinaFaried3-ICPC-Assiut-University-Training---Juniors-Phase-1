#include <set>
#include <map>
#include <array>
#include <list>
#include <iomanip>
#include <cmath>
#include <climits>
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
#define sz(v) ((lol)((v).size()))
#define all(v) ((v).begin()), ((v).end())
#define loop(i, n) for (int i = 0; i < n; i++)
#define loopx(n) for (int x = 0; x < n; x++)
#define loopR(x, n) for (int i = x; i <= (int)(n); ++i)
#define loopSz(v) for (int i = 0; i < sz(v); ++i)
#define loopItr(structure) for (auto itr = structure.begin(); itr != structure.end(); itr++)
#define BREAK cout << "--------------------------------------------------------------------" << endl
int numIDX = 0;
#define LABEL(title) cout << endl                                        \
                          << ++numIDX << " - " << title << " :-" << endl \
                          << endl;
#define PI 3.14159265358979323846
#define full(arr, val) memset(arr, val, sizeof(arr) - 1)
#define sizeOf(arr) sizeof(arr) / sizeof(arr[0])
#define mino                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
lol gcd(lol a, lol b)
{
    return b == 0 ? a : gcd(b, a % b);
}
lol lcm(lol a, lol b) { return a / gcd(a, b) * b; }

int main()
{
    mino;
    lol cases;
    cin >> cases;
    map<lol, lol> intervals;
    while (cases--)
    {
        lol left, right;
        cin >> left >> right;
        if (left > right)
            swap(left, right);
        if (intervals[left] == 0)
        {
            intervals[left] = right;
        }
        else
        {
            intervals[left] = max(right, intervals[left]);
        }
    }

    map<lol, lol> result;
    lol prevLeft, prevRight;
    loopItr(intervals)
    {
        if (itr == intervals.begin())
        {
            result[itr->first] = itr->second;
            prevLeft = itr->first;
            prevRight = itr->second;
            continue;
        }

        if (itr->first <= prevRight && itr->second > prevRight)
        {
            result[prevLeft] = itr->second;
            prevRight = itr->second;
        }
        else if (itr->first > prevRight)
        {
            result[itr->first] = itr->second;
            prevLeft = itr->first;
            prevRight = itr->second;
        }
    }

    loopItr(result)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}