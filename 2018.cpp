// hdu 2018
// by utoppia

#include<cstdio>
int a[100],b[100];
int main() {
	a[1] = 1;
	b[1] = 1;
	for(int i=1;i<70;++i) {
		a[i+1] = a[i]+b[i];
		b[i+1] += b[i];
		b[i+3] += b[i];
	}
	int n;
	while(scanf("%d",&n),n){
		printf("%d\n",a[n]);
	}
	return 0;
}
