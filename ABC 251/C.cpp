/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º14/05/22 20:11
*******************************/

#include<cstdio>
#include<iostream>
#include<string>
#include<set>

std::set<std::string> submission;
struct info{
	int pos, scr;
	friend bool operator<(info a, info b){
		return a.scr==b.scr ? a.pos<b.pos : a.scr>b.scr;
	}
};
std::set<info> score; 

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i){
		std::string sub;
		int scr;
		std::cin>>sub>>scr;
		if(submission.find(sub)!=submission.end()) continue;
		submission.insert(sub);
		score.insert({i, scr});
	}
	printf("%d\n", score.begin()->pos);
	return 0;
}

