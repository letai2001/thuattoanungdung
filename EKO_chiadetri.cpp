#include<iostream>
using namespace std;
int main(){
	int count=0;
//	int V,A,C,I,N,E,O,D;
	for(int V=1; V<=9; V++){
		for(int A=1; A<=9; A++){
			for(int C=1; C<=9; C++){
				for(int I=1; I<=9; I++){
					for(int N=1; N<=9; N++){
						for(int E=1; E<=9; E++){
							for(int O=1; O<=9; O++){
								for(int D=1; D<=9; D++){
									if(V+A+C+I+N+E+O+D==20) count++;
									}
								}
							}
						}
					}
				}
			}
		}
	
	cout<<count;
	return 0;
}
