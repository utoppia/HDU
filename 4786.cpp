// hdu 4786
// by utoppia

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int n,m;
struct T{
    int u,v,c;
    void read(){scanf("%d%d%d",&u,&v,&c); }
};

T edge[100010];
int fa[100010];
int f[100];
inline int find(int x) {
    return fa[x] = (x==fa[x]?x:find(fa[x]));
}
int sovle(int color) {
    int ans=0,x,y;
    for(int i=1;i<=n;i++) fa[i]=i;
    for(int i=0;i<m;i++) if(edge[i].c == color) {
        x = find(edge[i].u);
        y = find(edge[i].v);
        if(x != y) {
            ans ++ ;
            fa[y] = x;
        }
    }
    return ans;
}
int mi,ma,ok,x,y,k,T,cas=1;
int main() {
    f[0]=1,f[1]=2;
    for(int i=2;i<40;i++) f[i]=f[i-1]+f[i-2];
    //cerr << f[39] << endl;
    cin >> T;
    while(T--) {
        scanf("%d%d",&n,&m);
        k = n;
        for(int i=1;i<=n;i++) fa[i]=i;
        for(int i=0;i<m;i++) {
            edge[i].read();
            x = find(edge[i].u);
            y = find(edge[i].v);
            if(x!=y) {
                fa[y] = x;
                k--;
            }
        }
        if(k!=1) {
            printf("Case #%d: No\n",cas++);
            continue;
        }
        ma = sovle(1);
        mi = n-1-sovle(0);
        ok = 0;
        for(int i=0;i<40;i++) if(f[i]>=mi && f[i]<=ma) ok=1;
        printf("Case #%d: %s\n",cas++,ok?"Yes":"No");
    }
    return 0;
}
