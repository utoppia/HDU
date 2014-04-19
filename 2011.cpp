// hdu 2011
// by utoppia

#include<cstdio>
int main() {
    int n,m;
    double ans;
    scanf("%d",&m);
    while(m--) {
        scanf("%d",&n);
        ans = 0;
        for(int i=1;i<=n;i++) {
            if(i&1) ans += 1.0/i;
            else ans -= 1.0/i;
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}
