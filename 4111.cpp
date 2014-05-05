// HDU 4111
// by utoppia

// 1    %2=1
// 2    (m+n)%2=0 ||

#include<cstdio>
#include<cstring>

int win[60][60000];  // win[i][j] 表示i堆是1，j表示剩余的个数和
int dfs(int u,int v) {
    if(win[u][v] != -1) {
        return win[u][v];
    }
    if(u==0)return win[u][v] = (v%2==0?0:1);
    if(v==1) return win[u][v] = dfs(u+1,0);
    win[u][v] = 0;
    if(u) win[u][v] |= !dfs(u-1,v);
    if(v) win[u][v] |= !dfs(u,v-1);
    if(u>1 && v==0) win[u][v] |= !dfs(u-2,v+2);
    if(u>1 && v) win[u][v] |= !dfs(u-2,v+3);
    if(u && v) win[u][v] |= !dfs(u-1,v+1);
    return win[u][v];
}

int T,n,cas=1;
int main() {
    memset(win,-1,sizeof(win));
    win[0][0]=0;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        int u=0,v=0,ans=0;
        for(int i=0,j;i<n;++i) {
            scanf("%d",&j);
            if(j==1) u++;
            else v+=(j+1);
        }
        if(v) --v;
        ans = dfs(u,v);
        printf("Case #%d: %s\n",cas++,ans?"Alice":"Bob");
    }
    return 0;
}
