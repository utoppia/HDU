// hdu 2021
// by utoppia

#include<cstdio>
int p[] = {100,50,10,5,2,1};

int n,a,x;

int main() {
	while(scanf("%d",&n),n) {
		a = 0;
		for(int i=0;i<n;++i) {
			scanf("%d",&x);
			while(x) {
				for(int j=0;j<6;++j) if(x>=p[j]) {
					x -= p[j];
					++a;
					break;
				}
			}
		}
		printf("%d\n",a);
	}
	return 0;
}
