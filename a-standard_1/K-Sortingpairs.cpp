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

struct Employee
{
    string name;
    int salary;

    bool operator<(Employee &employee)
    {
        if (salary == employee.salary)
            return name > employee.name;

        return salary < employee.salary;
    }
};
void solve1()
{
    int size;
    cin >> size;

    Employee *employees = new Employee[size];

    loop0(size)
            cin >>
        employees[i].name >> employees[i].salary;

    sort(employees, employees + size);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << employees[i].name << " " << employees[i].salary << endl;
    }
}

bool compareEmployee( pair<string, int> &employee1,  pair<string, int> &employee2)
{
    if (employee1.second == employee2.second)
        return employee1.first > employee2.first;

    return employee1.second < employee2.second;
}
void solve2()
{
    int size;
    cin >> size;

    pair<string, int> *employees = new pair<string, int>[size];

    loop0(size)
            cin >>
        employees[i].first >> employees[i].second;

    sort(employees, employees + size,compareEmployee);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << employees[i].first << " " << employees[i].second << endl;
    }
}
int main()
{
    mino;
    solve2();
}