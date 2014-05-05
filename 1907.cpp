// HDU 1907
// by utoppia
// anti - SG

#include<cstdio>
#include<cstring>

int t,n,k;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int sg=0,flag=0;
        while(n--){
            scanf("%d",&k);
            sg ^= k;
            if(k>1) flag=1;
        }
        if(flag)
            printf("%s\n",sg?"John":"Brother");
        else
            printf("%s\n",sg==0?"John":"Brother");
    }
    return 0;
}
