// hdu 2003
// by utoppia

#include<cstdio>
double eps = 1e-8;
double x;
int main() {
    while(~scanf("%lf",&x)){
        if(x>=-eps && x<=eps) x = 0;
        else if(x<0) x = -x;
        printf("%.2lf\n",x);
    }
    return 0;
}
