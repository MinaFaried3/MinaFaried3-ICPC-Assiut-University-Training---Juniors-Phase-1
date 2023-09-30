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
#define loop(n) for (int i = 0; i < n; i++)
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
map<pair<lol, lol>, string> memo;
int main()
{
    mino;
    lol ships, islands;
    cin >> ships >> islands;

    set<pair<lol, lol>> shipsIslands;
    loop(ships)
    {
        pair<lol, lol> ship;
        cin >> ship.first >> ship.second;
        shipsIslands.insert(ship);
    }

    vector<pair<lol, lol>> finalRange;
    int idx = 0;
    loopItr(shipsIslands)
    {
        pair<lol, lol> ship = *itr;

        if (sz(finalRange) == 0)
        {
            finalRange.push_back(ship);
            continue;
        }

        if (ship.first <= finalRange.back().second)
        {
            if (ship.second > finalRange.back().second)
                finalRange.back().second = ship.second;

            continue;
        }
        else
        {
            finalRange.push_back(ship);
        }
    }

    // loopSz(finalRange)
    // {
    //     cout << finalRange[i].first << " " << finalRange[i].second << endl;
    // }

    int query;
    cin >> query;
    while (query--)
    {
        int left, right;
        cin >> left >> right;

        if (left > right)
            swap(left, right);

        if (memo[{left, right}] != "")
        {
            cout << memo[{left, right}] << endl;
            continue;
        }
        bool valid = false;
        loopSz(finalRange)
        {
            if (left >= finalRange[i].first && right <= finalRange[i].second)
            {
                valid = true;
                break;
            }
        }
        valid ? memo[{left, right}] = "YES" : memo[{left, right}] = "NO";
        cout << memo[{left, right}] << endl;
    }
}
/*
5 20
1 2
2 3
5 9
7 10
15 20
18
1 2
1 3
2 3
1 4
5 4
5 10
6 9
16 19
5 16
1 2
1 3
2 3
1 4
5 4
5 10
6 9
16 19
5 16

*/