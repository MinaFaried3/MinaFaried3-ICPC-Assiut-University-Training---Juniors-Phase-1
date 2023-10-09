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
void solve1()
{
    string headline, text;
    getline(cin, headline);
    getline(cin, text);

    map<char, int> letters;
    for (char chr : headline)
    {
        if (chr == ' ')
            continue;
        letters[chr]++;
    }

    for (char chr : text)
    {
        if (chr == ' ')
            continue;
        letters[chr]--;
        if (letters[chr] == -1)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

void solve2()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int cntr = 0, sp = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == ' ')
        {
            sp++;
            continue;
        }
        for (int j = 0; j < s1.size(); j++)
        {
            if (s1[j] == s2[i])
            {
                cntr++;
                s1[j] = '*';
                break;
            }
        }
    }

    if (cntr == s2.size() - sp)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    solve2();
}