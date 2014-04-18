// hdu 2015
// by utoppia

#include<cstdio>

int a[110];
int n,m,x;
int main() {
    while(~scanf("%d%d",&n,&m)){
        a[0]=0;
        x = 0;
        for(int i=1;i<=n;i++) a[i]=a[i-1]+2;
        for(int i=1,j=1;i<=n;i++,j++){
            x += a[i];
            if(j==m) {
                if(i!=j) printf(" ");
                printf("%d",x/m);
                x = 0;
                j=0;
            }
        }
        if(n%m!=0) {
            if(n>m) printf(" ");
            n %= m;
            printf("%d",x/n);
        }
        printf("\n");
    }
    return 0;
}
