#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a = {
0,
0,
0,
0,
0,
1,
0,
0,
0,
0,
3,
0,
0,
0,
0,
0,
3,
3,
0,
0,
0,
0,
0,
1,
6,
0,
3,
0,
0,
0,
0,
0,
3,
3,
6,
0,
0,
3,
0,
0,
0,
0,
3,
3,
6,
0,
6,
0,
0,
0,
3,
0,
0,
1,
6,
0,
6,
6,
0,
0,
6,
0,
0,
0,
0,
3,
3,
3,
6,
0,
6,
3,
6,
0,
0,
0,
6,
0,
0,
0,
3,
3,
9,
0,
6,
3,
6,
0,
3,
6,
0,
0,
0,
0,
6,
1,
6,
0,
6,
6,
0,
3,
12,
0,
6,
0,
0,
3,
6,
0,
0,
0,
3,
3,
12,
0,
6,
3,
6,
0,
3,
6,
9,
0,
6,
0,
0,
0,
3,
6,
3,
3,
6,
0,
6,
3,
12,
0,
3,
6,
6,
0,
6,
0,
6,
3,
6,
0,
0,
1,
6,
3,
12,
6,
0,
0,
12,
0,
6,
0,
6,
6,
12,
0,
0,
6,
0,
0,
6,
0,
12,
3,
6,
0,
6,
3,
9,
6,
3,
6,
6,
0,
6,
0,
6,
0,
15,
6,
0,
0,
6,
0,
3,
3,
12,
0,
12,
6,
6,
0,
3,
6,
6,
3,
12,
0,
6,
0,
9,
6,
0,
0,
6,
3,
12,
1,
6,
6,
6,
6,
0,
0,
18,
0,
12,
0,
3,
6,
12,
0,
0,
6,
3,
6,
12,
0,
12,
0,
0,
0,
9,
3,
9,
6,
12,
3,
12,
0,
3,
6,
6,
0,
12,
0,
12,
0,
9,
9,
0,
0,
6,
3,
6,
3,
12,
6,
9,
3,
6,
0,
12,
3,
6,
3,
9,
6,
12,
6,
6,
0,
6,
0,
9,
6,
6,
0,
12,
3,
6,
0,
9,
6,
6,
1,
6,
0,
21,
12,
6,
0,
12,
0,
12,
0,
0,
6,
15,
6,
0,
6,
12,
0,
12,
0,
12,
0,
0,
0,
12,
0,
12,
12,
3,
3,
18,
3,
6,
3,
6,
6,
9,
9,
18,
0,
6,
0,
12,
0,
9,
6,
0,
3,
12,
3,
6,
6,
12,
6,
6,
0,
0,
0,
15,
3,
18,
3,
18,
3,
12,
6,
3,
6,
9,
0,
12,
0,
12,
0,
18,
12,
0,
0,
12,
3,
6,
0,
6,
6,
9,
6,
0,
0,
18,
1,
18,
3,
12,
6,
6,
6,
12,
0,
15,
6,
12,
6,
18,
0,
0,
6,
0,
9,
12,
0,
18,
0,
6,
3,
12,
0,
12,
12,
0,
0,
12,
0,
3,
6,
12,
6,
18,
9,
18,
0,
9,
6,
18,
0,
6,
0,
6,
3,
27,
6,
6,
6,
6,
3,
6,
0,
12,
6,
9,
0,
6,
0,
18,
0,
9,
9,
15,
3,
12,
6,
6,
3,
9,
6,
12,
12,
18,
0,
18,
0,
6,
6,
21,
6,
0,
0,
6,
3,
15,
6,
12,
6,
18,
0,
0,
0,
12,
6,
6,
3,
6,
4,
18,
6,
12,
6,
3,
9,
30,
0,
18,
0,
6,
6,
12,
6,
6,
9,
12,
0,
18,
6,
18,
0,
6,
0,
12,
0,
6,
12,
6,
3,
18,
0,
6,
6,
6,
6,
15,
3,
24,
0,
6,
3,
18,
0,
12,
6,
12,
6,
24,
0,
15,
18,
9,
6,
0,
0,
18,
3,
6,
0,
15,
12,
12,
6,
6,
0,
18,
0,
6,
3,
12,
0,
12,
6,
6,
9,
9,
6,
24,
3,
24,
0,
9,
12,
6,
6,
12,
0,
12,
0,
21,
9,
15,
6,
12,
3,
18,
3,
12,
6,
12,
6,
0,
0,
12,
0,
12,
6,
24,
0,
6,
12,
6,
1,
9,
6,
12,
6,
24,
0,
18,
3,
12,
6,
6,
12,
24,
0,
12,
6,
15,
6,
18,
0,
18,
0,
0,
0,
18,
9,
21,
12,
0,
6,
18,
0,
9,
6,
6,
6,
12,
0,
12,
0,
9,
9,
27,
6,
6,
3,
18,
6,
21,
6,
6,
12,
12,
0,
12,
0,
24,
12,
0,
0,
24,
3,
24,
6,
12,
12,
18,
0,
0,
0,
12,
0,
18,
3,
15,
6,
12,
9,
6,
0,
15,
6,
9,
12,
24,
0,
12,
3,
6,
6,
21,
6,
18,
3,
18,
0,
21,
12,
15,
6,
6,
0,
12,
3,
12,
9,
18,
9,
12,
6,
6,
6,
24,
0,
18,
3,
24,
0,
6,
6,
0,
6,
9,
6,
6,
4,
30,
0,
18,
12,
9,
6,
24,
0,
18,
0,
9,
12,
21,
6,
6,
12,
12,
0,
18,
0,
21,
15,
12,
0,
12,
6,
12,
12,
18,
0,
18,
0,
6,
0,
9,
12,
18,
6,
30,
0,
0,
0,
24,
6,
9,
3,
12,
6,
30,
3,
6,
12,
6,
12,
12,
0,
36,
0,
6,
3,
27,
12,
12,
6,
6,
6,
24,
0,
12,
6,
12,
0,
18,
0,
18,
15,
18,
3,
18,
6,
12,
6,
6,
12,
3,
6,
6,
0,
12,
3,
39,
3,
12,
12,
12,
3,
18,
0,
21,
12,
21,
6,
18,
0,
12,
0,
9,
9,
12,
9,
24,
9,
12,
6,
12,
6,
33,
0,
6,
0,
18,
0,
9,
15,
12,
6,
24,
6,
6,
3,
15,
6,
15,
12,
18,
0,
18,
1,
18,
6,
12,
6,
6,
0,
24,
6,
24,
12,
18,
6,
24,
0,
6,
6,
12,
15,
24,
0,
24,
6,
6,
0,
18,
0,
15,
18,
12,
0,
24,
0,
12,
6,
12,
12,
18,
6,
24,
0,
0,
6,
24,
3,
12,
0,
12,
6,
30,
9,
6,
12,
24,
12,
12,
0,
15,
18,
12,
0,
18,
0,
24,
6,
15,
6,
18,
3,
18,
3,
12,
6,
24,
12,
12,
12,
6,
0,
36,
0,
18,
3,
6,
12,
6,
9,
12,
0,
3,
12,
36,
0,
30,
0,
12,
0,
18,
6,
12,
9,
12,
6,
24,
3,
18,
12,
15,
9,
24,
0,
18,
6,
18,
9,
18,
12,
6,
6,
24,
3,
24,
0,
12,
12,
12,
0,
6,
0,
27,
12,
18,
3,
30,
3,
18,
6
};

int main() {
    sort(a.rbegin(), a.rend());
    cout << a[0] << endl;

    // string transformed_code = "";
    // for (auto x: a) {
    //     for (int i=0; i<x; ++i) cout << '+';
    //     cout << endl;
    //     cout << ">+>>>>> >>>" << endl;
    // }
}
