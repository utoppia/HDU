// hdu 2007
// by utoppia

#include<cstdio>

#define sqr(x) (x*x)
#define sqrr(x) (x*x*x)

int main() {
    int l,r,a,b;
    while(~scanf("%d%d",&l,&r)){
        if(l>r) {
            l ^= r;
            r ^= l;
            l ^= r;
        }
        a=b=0;
        for(int i=l;i<=r;i++) if(i&1) b += sqrr(i); else a += sqr(i);
        printf("%d %d\n",a,b);
    }
    return 0;
}
