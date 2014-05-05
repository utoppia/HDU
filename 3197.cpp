// HDU 3197
// by utoppia

#include<cstdio>
#include<cstring>
using namespace std;
int const nMax = 2010;
#define CLR(a) memset((a),0,sizeof((a)))

class tree{
public:
    int first[nMax],to[nMax],nxt[nMax],e,sg[nMax],vis[nMax];
    void clear(){memset(first,-1,sizeof(first));e=0;CLR(vis);}
    void addadge(int ,int );
    int dfs(int );
};
void tree::addadge(int u,int v){
    to[e]=v;nxt[e]=first[u];first[u]=e;e++;
    to[e]=u;nxt[e]=first[v];first[v]=e;e++;
}
int tree::dfs(int u){
    sg[u]=0;
    vis[u]=1;
    for(int i=first[u];i!=-1;i=nxt[i])if(!vis[to[i]]){
        sg[u] ^= (dfs(to[i])+1);
    }
    return sg[u];
}

tree p;
int node[nMax];

int main(){
    int n,m;
    while(~scanf("%d",&n)){
        int sg=0;
        p.clear();m=0;
        for(int i=0,v;i<n;i++) {
            scanf("%d",&v);
            if(v==-1) node[m++]=i;
            else p.addadge(i,v);
        }
        for(int i=0;i<m;i++)sg ^= p.dfs(node[i]);
        printf("%s\n",sg?"YES":"NO");
    }
    return 0;
}
