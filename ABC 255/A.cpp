/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º${date}
*******************************/

#include<cstdio>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	for(int i=1; i<=2; ++i){
		for(int j=1; j<=2; ++j){
			int a;
			scanf("%d", &a);
			if(i==x && j==y) printf("%d\n", a);
		}
	}
	return 0;
}

