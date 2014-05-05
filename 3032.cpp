// HDU 3032
// by utoppia

#include<cstdio>
int main(){
    int t,n,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int ans=0;
        while(n--) {
            scanf("%d",&a);
            if(a%4==3) ans ^= (a+1);
            else if(a%4==0) ans ^= (a-1);
            else ans ^= a;
        }
        printf("%s\n",ans==0?"Bob":"Alice");
    }
    return 0;
}
