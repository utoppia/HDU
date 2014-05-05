// HDU 1848
// by utoppia

#include<cstdio>
int sg[1010],f[20],vis[1010],m,n,p;
int main() {
    sg[0]=0;
    f[1]=f[0]=1;
    for(int i=2;i<20;++i) f[i] = f[i-1] + f[i-2];//printf("f20 = %d\n",f[19]);

    for(int i=1;i<1010;++i) {
        for(int j=0;j<1010;++j) vis[j] = 0;
        for(int j=1;j<20;++j) if(f[j] <= i) vis[sg[i-f[j]]] = 1;
        for(int j=0;j<1010;++j) if(vis[j] == 0) { sg[i] = j;break;}
    }
    while(scanf("%d%d%d",&m,&n,&p), m||n||p){
        printf("%s\n",sg[m]^sg[n]^sg[p] ? "Fibo" : "Nacci");
    }
    return 0;
}
