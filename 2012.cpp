// hdu 2012
// by utoppia

#include<cstdio>

int f(int x) {
    if(x<=1) return 0;
    for(int i=2;i*i<=x;++i) if(x%i==0) return 0;
    return 1;
}

int main() {
    int x,y;
    while(~scanf("%d%d",&x,&y) ,x||y){
        int ok = 0;
        for(int i=x,j;i<=y;++i){
            j = i*i+i+41;
            if(f(j) == 0) {ok=1;break;}
        }
        printf("%s\n",ok?"Sorry":"OK");
    }
    return 0;
}
