#include <iostream>
#include <cstring>
using namespace std;
//NAMA : AHMAD FATHONI
//NPM  : 1717051053
main(){
 char A[15][15] = 	{'t','g','b','b','w','i','n','t','e','r','w','s','e','s','n',
       				'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b',
       				'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r',
       				'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i',
       				'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c',
       				'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k',
       				'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a',
       				'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b',
       				'd','i','n','n','e','r','q','o','d','l','w','d','c','a','r',
       				'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c',
       				'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y',
    				'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g',
       				'm','o','s','g','z','c','z','e','t','d','b','o','o','t','o',
       				'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z',
       				'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
 
 char (*ptr)[15]=A;
 for(int i=0;i<15;i++){
 	for(int j=0;j<15;j++){
 		cout<<*(*(ptr+i)+j)<<"|";
	 	}cout<<endl;
 	}cout<<endl;
int check,panjang,temu=0;
char input[15];
LAGI:
cin>>input;
panjang=strlen(input);

for(int i=0;i<15;i++){
	for(int j=0;j<15;j++){
		if(input[0]==A[i][j]){
			//Diagonal Timur Laut
			for(int b=0;b<15;b++){
				if(input[b]==A[i+b][j+b]){
					check=b;
				}
				else{}
			}
			if(check==panjang-1){
				temu+=1;
			}else{
				temu+=0;
			}
			check=0;
			
			//Diagonal Barat Laut
			for(int b=0;b<15;b++){
				if(input[b]==A[i-b][j+b]){
					check=b;
				}
				else{}
			}
			if(check==panjang-1){
				temu+=1;
			}else{
				temu+=0;
			}
			check=0;
			
			//Diagonal Tenggara
			for(int b=0;b<15;b++){
				if(input[b]==A[i+b][j-b]){
					check=b;
				}
				else{}
			}
			if(check==panjang-1){
				temu+=1;
			}else{
				temu+=0;
			}
			check=0;
		}
	}
}
}
