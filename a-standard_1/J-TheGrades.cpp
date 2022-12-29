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

struct Student
{
    string name;
    int arabic, maths, science, english;

    int sum()
    {
        return arabic + maths + science + english;
    }

    bool operator<(Student &student)
    {
        if (this->sum() < student.sum())
            return true;
        if (this->sum() > student.sum())
            return false;

        // if (arabic < student.arabic)
        //     return true;
        // if (arabic > student.arabic)
        //     return false;

        // if (maths < student.maths)
        //     return true;
        // if (maths > student.maths)
        //     return false;

        // if (science < student.science)
        //     return true;
        // if (science > student.science)
        //     return false;

        // if (english < student.english)
        //     return true;
        // if (english > student.english)
        //     return false;

        if (name > student.name)
            return true;
        if (name < student.name)
            return false;

        return false;
    }
};

void solve1()
{
    int size;
    cin >> size;

    Student *students = new Student[size];

    loop0(size)
            cin >>
        students[i].name >> students[i].arabic >> students[i].maths >> students[i].science >> students[i].english;

    sort(students, students + size);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << students[i].name << " " << students[i].sum() << " " << students[i].arabic << " " << students[i].maths << " " << students[i].science << " " << students[i].english << endl;
    }
}
// ==================================================================
bool studentDifferent1(Student &student1, Student &student2)
{
    if (student1.sum() < student2.sum())
        return true;
    if (student1.sum() > student2.sum())
        return false;

    if (student1.name > student2.name)
        return true;
    if (student1.name < student2.name)
        return false;

    return false;
}
void solve2()
{
    int size;
    cin >> size;

    Student *students = new Student[size];

    loop0(size)
            cin >>
        students[i].name >> students[i].arabic >> students[i].maths >> students[i].science >> students[i].english;

    sort(students, students + size, studentDifferent1);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << students[i].name << " " << students[i].sum() << " " << students[i].arabic << " " << students[i].maths << " " << students[i].science << " " << students[i].english << endl;
    }
}

// ==================================================================
bool studentDifferent2(Student &student1, Student &student2)
{
    if (student1.sum() == student2.sum())
        return student1.name > student2.name;

    return student1.sum() < student2.sum();
}
void solve3()
{
    int size;
    cin >> size;

    Student *students = new Student[size];

    loop0(size)
            cin >>
        students[i].name >> students[i].arabic >> students[i].maths >> students[i].science >> students[i].english;

    sort(students, students + size, studentDifferent2);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << students[i].name << " " << students[i].sum() << " " << students[i].arabic << " " << students[i].maths << " " << students[i].science << " " << students[i].english << endl;
    }
}

int main()
{
    mino;
    solve1();
}