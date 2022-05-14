/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º14/05/22 20:03
*******************************/

#include<cstdio>
#include<set>

int W[300];
std::set<int> S;

int main(){
	int n, w;
	scanf("%d %d", &n, &w);
	for(int i=1; i<=n; ++i) scanf("%d", W+i);
	for(int i=1; i<=n; ++i){
		if(W[i]<=w) S.insert(W[i]);
	}
	for(int i=1; i<=n-1; ++i){
		for(int j=i+1; j<=n; ++j){
			if(W[i]+W[j]<=w) S.insert(W[i]+W[j]);
		}
	}
	for(int i=1; i<=n-2; ++i){
		for(int j=i+1; j<=n-1; ++j){
			for(int k=j+1; k<=n; ++k){
				if(W[i]+W[j]+W[k]<=w) S.insert(W[i]+W[j]+W[k]);
			}
		}
	}
	printf("%d\n", S.size());
	return 0;
}

