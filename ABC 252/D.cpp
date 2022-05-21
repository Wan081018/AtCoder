/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º21/05/22 20:19
*******************************/

#include<cstdio>
#include<set>

long long combine3(int n){
	long long res=1;
	for(int i=n; i>n-3; --i) res*=i;
	return res;
}

long long combine2(int n){
	long long res=1;
	for(int i=n; i>n-2; --i) res*=i;
	return res;
}

int A[200005], cnt[200005], lst[200005], pos[200005];
bool vis[200005];
std::set<int> num;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		scanf("%d", A+i);
		num.insert(A[i]); 
		++cnt[A[i]];
	}
	long long ans=combine3(n)/6;
//	printf("%lld\n", ans);
	for(auto i:num) ans-=combine3(cnt[i])/6;
//	for(int i=n; i>0; --i){
//		if(!vis[A[i]]){
//			pos[A[i]]=i;
//			vis[A[i]]=true;
//		}
//	}
//	for(auto i:num) printf("%d: %d %d\n", i, cnt[i], pos[i]);
	for(auto i:num)
		ans-=(combine2(cnt[i])/2)*(n-cnt[i]);
	
	printf("%lld\n", ans);
	return 0;
}

