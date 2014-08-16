/*
 ID: dearxia1
 PROG: milk2
 LANG: C++
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    //    ofstream fout ("milk2.out");
    //    ifstream fin ("milk2.in");
    int n, begin = 0, end = 0, now = 0, max1 = 0, max2 = 0, start = 111111, dest = 0;
    bool milk[1111111] = {};
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> begin >> end;
        if (begin < start) start = begin;
        if (end > dest) dest = end;
        for (int j = begin; j < end; j ++) {
            milk[j] = true;
        }
    }
//at least one cow is milked
    for (int i = start; i < dest; i ++) {
        if (milk[i]) {
            now ++;
            if (i < dest - 1)
                continue;
        }
        if (now > max1)
            max1 = now;
        now = 0;
    }
//none cow is milked
    now = 0;
    for (int i = start; i < dest ; i ++) {
        if (!milk[i]){
            now ++;
            continue;
        }
        if (now > max2)
            max2 = now;
        now = 0;
    }
    cout << max1 << ' ' << max2 << '\n';
    return 0;
}
