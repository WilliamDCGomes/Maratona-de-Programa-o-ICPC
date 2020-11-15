#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int d, l;
int naval[11][11] = {};

int MontandoTabuleiro(int r, int c){
    if(naval[r][c] != 0) return -1;
    if(d == 0){
        for(int i=c;i<=(c+l)-1;i++){
            if(i > 10) return -1;
            if(naval[r][i] != 0) return -1;
            naval[r][i] = 1;
        }
    } else {
        for(int i=r;i<=(r+l)-1;i++){
            if(i > 10) return -1;
            if(naval[i][c] != 0) return -1;
            naval[i][c] = 1;
        }
    }
    
    return 0;
    
}

int main () {

    char isVerify = 'Y';

    int n;
    cin >> n;
    while(n--){
        int r, c;
        cin >> d >> l >> r >> c;
        if(MontandoTabuleiro(r, c) == -1){
            isVerify = 'N';
            break;
        }
    }
    cout << isVerify << endl;

    return 0;
}
