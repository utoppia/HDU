// HDU 4664
// by utoppia

#include<cstring>
#include<cstdio>

int sg[1000];
int dfs(int n) {
    if(sg[n] != -1) return sg[n];
    if(n<=1) return sg[n] = 0;
    int g[100] = {0};
    for(int i=0;i<=n/2;++i)if(n-i-2>=0) g[dfs(i) ^ dfs(n-i-2)] = 1;
    for(int i=0;;++i) if(!g[i]) return sg[n] = i;
}

int test() {
    memset(sg,-1,sizeof(sg));
    //for(int i=78,j=180;i<180;++i,j++) if(dfs(i)!=dfs(j)) printf("Hehe");//printf("Over");//printf("-- %d %d\n",i,dfs(i)==dfs(j));
    for(int i=0;i<300;++i) dfs(i);
    return 0;
}

int SG(int n) {
    if(n<200) return sg[n];
    else return sg[(n-78)%102+78];
}

int main() {
    test();
    int T,n,Sg;
    scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        Sg = 0;
        for(int i=0,j;i<n;++i) {
            scanf("%d",&j);
            Sg ^= SG(j);
        }
        printf("%s\n",Sg?"Carol":"Dave");
    }
    return 0;
}
