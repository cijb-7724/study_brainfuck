#include <iostream>
#include <string>
#include <set>
#include <fstream>
using namespace std;

string code = R"(9090909090)";

/*
48'0' '1' '2' '3' '4' '5' '6' '7' '8' '9'
*/

string init = R"(
+++++ +++++
[
    -
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    > +++++
    <<<<< <<<<<
]
> --
> -
>
> +
> ++
> +++
> ++++
> +++++
> +++++ +
> +++++ ++
<<<<< <<<<
)";

int main() {
    string transformed_code = init + "\n";
    int now = 0, next = 0;
    int put_count = 0;
    for (auto c: code) {
        next = c - '0';
        
        if (now < next) {
            for (int i=now; i<next; ++i) {
                transformed_code += ">";
            }
        } else if (now == next) {
            ;
        } else {
            for (int i=now; i>next; --i) {
                transformed_code += "<";
            }
        }
        transformed_code += ".";
        ++put_count;
        if (put_count % 5 == 0) {
            transformed_code += '\n';
            put_count = 0;
        }
        now = next;
    }
    // cout << transformed_code << endl;
    
    ofstream outfile("output.txt");
    if (outfile.is_open()) {
        outfile << transformed_code;
        outfile.close();
        cout << " finish write in file\n";
    } else {
        cerr << " cant open file\n";
    }
}

