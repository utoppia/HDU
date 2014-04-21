// hdu 1066
// by utoppia

#include<cstring>
#include<cstdio>
#define nMax 10000
const int mod[]={1,1,2,6,4,4,4,8,4,6};

void chu(int* a,int& len){
    int b[1000];
    int d=0,k=0;
    int i=0;
    while(d<5 && i<len) {d=d*10+a[i];i++;}
    b[k++] = d/5;d%=5;
    for(;i<len;i++) {
        d = d*10 + a[i];
        b[k++] = d/5;d%=5;
    }
    for(int i=0;i<k;i++) a[i]=b[i];len=k;
}
int f(int x) {
    if(x==2 || x==6) x=x+10;
    return x/2;
}
int ff(int* a,int& len){
    //for(int i=0;i<len;++i) printf("%d",a[i]);//printf("\n");
    int ans = 1;
    while(1){
        if(len==1) {
            ans = ans*mod[a[0]]%10;
            if(a[0]>=5) ans = f(ans);
            break;
        }
        ans = ans*mod[a[len-1]]*6%10;
        chu(a,len);
        int t=1,k=0;
        for(int i=len-1;i>=0;--i) {
            k=(k+a[i]*t)%4;
            t = t*10%4;
        }
        for(int i=0;i<k;++i) ans=f(ans);
    }
    return ans;
}
int sovle(char *buf){
    int a[1000];
    int len = strlen(buf);
    for(int i=0;i<len;i++) a[i]=buf[i]-'0';
    return ff(a,len);
}
int main()
{
    char a[1000];
    while(scanf("%s",&a)!=EOF){
        int ans = sovle(a);
        printf("%d\n",ans);
    }
    return 0;
}
