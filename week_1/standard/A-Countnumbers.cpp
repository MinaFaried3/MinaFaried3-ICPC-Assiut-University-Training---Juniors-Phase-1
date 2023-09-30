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
    mino();
    int size, query;
    cin >> size >> query;

    map<int, int> appear;

    while (query--)
    {
        int type, num;
        cin >> type >> num;

        if (type == 1)
            appear[num]++;
        else
            cout << appear[num] << endl;
    }
}

void solve2()
{
    mino();
    int size, query;
    cin >> size >> query;

    int *arr = new int[size + 1];
    fill_n(arr, size + 1, 0);

    while (query--)
    {
        int type, num;
        cin >> type >> num;

        if (type == 1)
            arr[num]++;
        else
            cout << arr[num] << endl;
    }
}
int main()
{
    solve1();
}