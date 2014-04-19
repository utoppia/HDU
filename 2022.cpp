// hdu 2022
// by utoppia

#include<cstdio>
int inline abs(int x) { return x > 0 ? x : -x;}
int x,y,z,a,n,m;
int main() {
	while(~scanf("%d%d",&n,&m)){
		x=0,y=0,z=0;
		for(int i=0;i<n;++i) {
			for(int j=0;j<m;++j) {
				scanf("%d",&a);
				if(abs(a) > abs(z)){
					x=i+1,y=j+1,z=a;
				}
			}
		}
		printf("%d %d %d\n",x,y,z);
	}
	return 0;
}
