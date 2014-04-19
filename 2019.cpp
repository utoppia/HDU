// hdu 2019
// by utoppia

#include<cstdio>

int n,x,a[110];

int main() {
	while(scanf("%d%d",&n,&x),n||x){
		int first=1,ok=0;
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
			if(x<=a[i] && !ok) {
				if(!first) printf(" ");
				else first = 0;
				printf("%d",x);
				ok = 1;
			}
			if(!first) printf(" ");
			else first = 0;
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
