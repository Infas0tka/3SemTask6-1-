#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int N, i;
    cin >> N;
    vector<pair<float, pair<int, int> > > a;
    a.resize(N);

    for (i = 0; i < N; i++)
    {
        a[i].second.first = rand() % 21 - 10;
        a[i].second.second = rand() % 21 - 10;
        a[i].first = sqrt(pow(a[i].second.first, 2) + pow(a[i].second.second, 2));
        cout << a[i].second.first << " " << a[i].second.second << " " << a[i].first << endl;
    }
    cout << endl;

    sort(a.begin(), a.end());

    for (i = 0; i < N; i++)
        cout << a[i].second.first << " " << a[i].second.second << " " << a[i].first << endl;



}
