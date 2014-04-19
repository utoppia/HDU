// hdu 2004
// by utoppia

#include<cstdio>
int main() {
    int x;
    while(~scanf("%d",&x)){

        if(x<0||x>100) {printf("Score is error!\n");continue;}x /= 10;
        if(x>=9 && x<=10) printf("A");
        else if(x==8) printf("B");
        else if(x==7) printf("C");
        else if(x==6) printf("D");
        else if(x>=0 && x<=5) printf("E");
        printf("\n");
    }
    return 0;
}
