// HDU 4678
// by utoppia

#include<cstdio>

int const nMax = 1010;
int const mo = nMax*nMax;
int dx[] = {0,-1,-1,-1,0,1,1,1};
int dy[] = {-1,-1,0,1,1,1,0,-1};

int vis[nMax][nMax],n,m,k;
void clear(int n,int m){
    for(int i=1;i<=n;++i) for(int j=1;j<=m;++j) vis[i][j]=0;
}
bool inline in(int x,int y) {
    if(x<1 || x>n) return false;
    if(y<1 || y>m) return false;
    if(vis[x][y]==1)  return false;
    return true;
}
struct Queue{
    int st[mo],head,tail;
    void clear() { head=tail=0;}
    void push(int val){st[tail++] = val;if(tail==mo)tail=0;}
    int pop() {return st[head++];if(head==mo)head=0;}
    int empty() { return head==tail;}
};
Queue que[2];
int bfs(int x,int y){
    int ans=1;
    que[0].clear(),que[1].clear();
    vis[x][y] = 1;
    que[0].push(x),que[1].push(y);
    int u,v;
    while(!que[0].empty()){
        x = que[0].pop();y = que[1].pop();
        for(int i=0;i<8;++i) {
            u = x + dx[i];
            v = y + dy[i];
            if(in(u,v)){
                if(vis[u][v]==-1) {ans++;vis[u][v]=1;}
                if(vis[u][v]==0) {vis[u][v]=1;que[0].push(u),que[1].push(v);}
            }
        }
    }
    return ans&1 ? 1 : 2;
}
int main() {
    int T,cas=1;
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d%d",&n,&m,&k);
        clear(n,m);
        for(int i=0,x,y;i<k;++i) {
            scanf("%d%d",&x,&y);
            x++,y++;
            vis[x][y] = 1;
            for(int j=0;j<8;++j) if(in(x+dx[j],y+dy[j])) vis[x+dx[j]][y+dy[j]] = -1;
        }
        int sg = 0;
        for(int i=1;i<=n;++i) for(int j=1;j<=m;++j) if(vis[i][j] == 0) sg ^= bfs(i,j);
        for(int i=1;i<=n;++i) for(int j=1;j<=m;++j) if(vis[i][j]==-1) sg^=1;
        printf("Case #%d: %s\n",cas++,sg?"Xiemao":"Fanglaoshi");
    }
    return 0;
}

// sg[1]=1,sg[2]=2;sg[3]=1;sg[4]
