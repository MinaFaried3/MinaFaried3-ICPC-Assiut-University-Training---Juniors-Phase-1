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
#define BREAK cout << "--------------------------------------------------------------------" << endl
#define LABEL(i, title) cout << " " << i << " - " << title << " :-" << endl

void mino()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve1()
{

    string str;
    cin >> str;
    map<char, int> repeatedChar;
    loopSz(i, str)
    {
        repeatedChar[str[i]]++;
    }

    map<char, int>::iterator itr;
    for (itr = repeatedChar.begin(); itr != repeatedChar.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}
void solve2()
{
    string str;
    cin >> str;

    int arr[128]{0};
    loopSz(i, str)
    {
        arr[str[i]]++;
    }

    loop(i, 128)
    {
        if (arr[i])
            cout << (char)i << " " << arr[i] << endl;
    }
}
int main()
{
    mino();
    solve2();
}