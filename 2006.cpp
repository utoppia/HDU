// hdu 2006
// by utoppia

#include<cstdio>
int n,a,ans;
int main() {
    while(~scanf("%d",&n)){
        ans = 1;
        while(n--) {
            scanf("%d",&a);
            if(a&1) ans *= a;
        }
        printf("%d\n",ans);
    }
    return 0;
}
