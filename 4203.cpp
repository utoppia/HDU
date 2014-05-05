// HDU 4203
// by utoppia

#include<cstdio>

int S,k;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&S,&k);
        S=S%(k+1);
        if(k&1){
            printf("%s\n",S&1?"1":"0");
        }else {
            if(S<k) printf("%s\n",S&1?"1":"0");
            else printf("%d\n",k);
        }
    }
    return 0;
}
