#include<stdio.h>

int main(){
	int T;
	int X,W,D,V,K,Y;
	int P;
	int waktu=0;
	scanf("%d", &T); getchar();
	for(int i=1;i<=T;i++){
		scanf("%d %d %d %d %d %d", &X, &W, &D, &V, &K, &Y); getchar();
		printf("Case #%d: ", i);
		if(X==1 && W>450){
			printf("Line broke up\n");
		}else if(X==2 && W>900){
			printf("Line broke up\n");
		}else if(X==3 && W>1320){
			printf("Line broke up\n");
		}else if(X==4 && W>3200){
			printf("Line broke up\n");
		}else if(X==5 && W>4500){
			printf("Line broke up\n");
		}else{
			while(D>=0){
				if(V>0){
					for(int j=1;j<=Y;j++){
						D=D+V;
						waktu=waktu+1;
					}
					V=V-K;
					for(int j=1;j<=Y;j++){
						D=D-5;
						waktu=waktu+1;
						if(D==0){
							break;
						}
					}
				}else if(V<=0){
					for(int j=1;j<=Y;j++){
						D=D+0;
						waktu=waktu+1;
					}
					for(int j=1;j<=Y;j++){
						D=D-5;
						waktu=waktu+1;
						if(D==0){
						break;
						}
					}
				}
				int jam=0, menit=0;
				if(D<=0){
					while(waktu>=3600){
						waktu=waktu-3600;
						jam++;
					}
					while(waktu>=60){
						waktu=waktu-60;
						menit++;
					}
					printf("%02d:%02d:%02d\n", jam, menit, waktu);
				}
				if(D<=0){
					waktu=0;
					break;
				}
		
			}
		}
	}
	
	
	return 0;
}
