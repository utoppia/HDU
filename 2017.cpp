// hdu 2017
// by utoppia

#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

string s;
int a,T;
int main() {
    cin >> T;
    while(T--){
        cin >> s;
        a = 0;
        for(int i=s.length()-1;i>=0;--i) if(s[i]>='0'&&s[i]<='9') a++;
        cout << a << endl;
    }
    return 0;
}
