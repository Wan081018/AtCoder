/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º21/05/22 20:05
*******************************/

#include<cstdio>
#include<cstring>

#define max(a, b) ((a)>(b) ? (a) : (b))
#define min(a, b) ((a)<(b) ? (a) : (b))
#define INF 1000000

char str[105][15];
bool vis[2005];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i) scanf("%s", str[i]+1);
	int ans=INF;
	for(int i=0; i<10; ++i){
		memset(vis, 0, sizeof(vis));
		int mx=0;
		for(int j=1; j<=n; ++j){
			for(int k=1; k<=10; ++k){
				if(str[j][k]==i+'0'){
					int num=k-1;
					while(vis[num]) num+=10;
					mx=max(mx, num);
					vis[num]=true;
				}	
			}
		}
		ans=min(ans, mx);
	}
	printf("%d\n", ans);
	return 0;
}

