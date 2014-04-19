// hdu 2009
// by utoppia

#include<cstdio>
#include<math.h>

double n;
int m;
double ans;

int main() {
    while(~scanf("%lf%d",&n,&m)){
        ans = 0;
        while(m--) {
            ans += n;
            n = sqrt(n);
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}
