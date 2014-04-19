// hdu 2005
// by utoppia

#include<cstdio>
int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    int y,m,d;
    while(~scanf("%d/%d/%d",&y,&m,&d)){
        if(y%4==0&&y%100!=0 || y%400==0) day[2]=29;
        for(int i=1;i<m;i++) d += day[i];
        printf("%d\n",d);
        day[2] = 28;
    }
    return 0;
}
