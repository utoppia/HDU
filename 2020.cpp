// hdu 2020
// by utoppia

#include<cstdio>
#include<algorithm>
using namespace std;

inline int abs(int x) {
	return x > 0 ? x : -x;
}
int cmp(int x,int y) {
	return abs(x) > abs(y);
}

int a[110],n;

int main() {
	while(scanf("%d",&n),n){
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		sort(a,a+n,cmp);
		for(int i=0;i<n;++i) {
			if(i) printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
