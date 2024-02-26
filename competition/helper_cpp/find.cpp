#include <iostream>
using namespace std;

int main() {
    /*
    n is wanted number
    n = k*m + l
    -> kmが作成可能
    つまり，x+ym==0 (mod 1<<8)なるx, yを見つける

    y, k, m, lを全探索すればよいのでは?
    */
    // 
    int n = 32;
    // int n = 48;
    int mod = 1<<8;
    int width = 30;
    int h = 20;

    for (int i=n-width; i<=n+width; ++i) {
        for (int y=1; y<30; ++y) {
            int x = min(y*i%mod, mod-(y*i%mod));
            int score = y + x + abs(n-i);
            if (score <= h && y*i%mod != 0){
                cout << "n= " << i;
                cout << " y= " << y << ", x = " << x << endl;
                cout << "                 score = " << score << endl;
            }
        }
    }
    for (int k=1; k<=n; ++k) {
        int m = n / k;
        int l = n - k*m;
        // n = k*m + l

        //kmを作成する
        //つまり，x+ym==0 (mod 1<<8)なるx, yを見つける
        //y, k, m, lを全探索すればよいのでは?
    }
}