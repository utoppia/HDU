// hdu 2010
// by utoppia

#include<cstdio>

int a[1000];
int sqr(int x) {return x*x*x;}
int main() {
    for(int i=100,j;i<1000;i++) {
        j=sqr(i%10)+sqr(i/10%10)+sqr(i/100);
        if(i==j) a[i]=1;else a[i]=0;
    }
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        int ans = 0;
        for(int i=n;i<=m;++i)if(a[i]) {
            if(ans) printf(" ");
            printf("%d",i);
            ans++;
        }
        if(ans==0) printf("no");
        printf("\n");
    }
    return 0;
}
