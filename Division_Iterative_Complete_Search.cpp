#include <bits/stdc++.h>
using namespace std;

int main(){

    int N = 0;
    cin >> N;
    for(int fghij = 1234; fghij <= 98765 / N; fghij++){
        int abcde = fghij * N;
        int used = (fghij < 10000);
        int temp = abcde;
        while(temp){used |= (1 << (temp % 10)); temp /= 10;}
        temp = fghij;
        while(temp){used |= (1 << (temp % 10)); temp /= 10;}

        if (used == (1 << 10) - 1){
            cout << abcde << "/" << fghij << " = " << N << endl; 
        }
    }
}