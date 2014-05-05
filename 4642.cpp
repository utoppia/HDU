// HDU 4642
// by utoppia

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
#define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)
#define DOR(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define oo (1<<30)
#define eps 1e-6
#define nMax 110
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int n,m;
int a[nMax][nMax];

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int t;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&n,&m);
        rep(i,n) rep(j,m) scanf("%d",&a[i][j]);
        printf("%s\n",a[n-1][m-1]?"Alice":"Bob");
    }
    return 0;
}
