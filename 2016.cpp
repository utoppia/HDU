// hdu 2016
// by utoppia

#include<cstdio>

int a[110];
int n;

int main() {
    while(scanf("%d",&n),n) {
        for(int i=0;i<n;++i) scanf("%d",&a[i]);
        int j=0;
        for(int i=1;i<n;++i) if(a[i]<a[j]) j=i;
        if(j!=0) {
            a[j]^=a[0];
            a[0]^=a[j];
            a[j]^=a[0];
        }
        for(int i=0;i<n;++i) {
            if(i) printf(" ");
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
