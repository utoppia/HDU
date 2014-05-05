// HDU 3389
// by utoppia

#include<cstdio>
#include<cstring>

int n,t,a,cas=1;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int sg=0;
        for(int i=1;i<=n;i++) {
            scanf("%d",&a);
            if(i%6==0 || i%6==2 || i%6==5) sg ^= a;
        }
        printf("Case %d: %s\n",cas++,sg==0?"Bob":"Alice");
    }
    return 0;
}
