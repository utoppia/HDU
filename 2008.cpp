// hdu 2008
// by utoppia

#include<cstdio>
double const eps = 1e-8;
int dcmp(double x) {
    if(x>=-eps && x<=eps) return 0;
    return x > 0 ? 1 : -1;
}

int n;
double x;
int a,b,c;

int main() {
    while(scanf("%d",&n),n){
        a=b=c=0;
        while(n--) {
            scanf("%lf",&x);
            if(dcmp(x) == 0) b++;
            else if(dcmp(x) > 0) c++;
            else a++;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
