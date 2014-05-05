    #include<iostream>  
    #include<cstdio>  
    #include<cstring>  
    #include<cmath>  
    #include<algorithm>  
    #include<vector>  
    #include<set>  
    #include<queue>  
    #include<map>  
      
    using namespace std;  
      
    #define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)  
    #define DOR(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)  
    #define CLR(a) memset((a),0,sizeof((a)))  
    #define pb push_back  
    #define mp make_pair  
    #define ins insert  
    #define F first  
    #define S second  
    #define bug puts("Oh Here!");  
      
    #define nMax 10010  
    #define oo 0x7fffffff  
    #define eps 1e-8  
      
    #define LL long long  
    #define Vec vector<int>  
    #define Pai pair<int,int>  
      
    int dfs(int cur,int a[7]){  
        //if(cur>=31) return 0;  
        for(int i=1;i<7;i++) if(a[i] && cur+i<=31){  
            a[i]--;  
            if(dfs(cur+i,a)==0) {  
                a[i]++;  
                return 1;  
            }  
            a[i]++;  
        }  
        return 0;  
    }  
      
    int main(){  
    #ifndef ONLINE_JUDGE  
    //    freopen("input.txt","r",stdin);  
    #endif  
        char s[130];  
        int a[7];  
        while(~scanf("%s",s)){  
            for(int i=1;i<7;i++) a[i]=4;  
            int cur=0,man=0;  
            while(s[man]){  
                cur += s[man]-'0';  
                a[s[man]-'0']--;  
                man++;  
            }  
            if(cur>=31){  
                printf("%s %s\n",s,man&1?"A":"B");  
                continue;  
            }  
            //cout<<cur<<endl;  
            int sg=dfs(cur,a);  
            if(man%2) {  
                printf("%s %s\n",s,sg?"B":"A");  
            }else {  
                printf("%s %s\n",s,sg==0?"B":"A");  
            }  
        }  
        return 0;  
    }  
