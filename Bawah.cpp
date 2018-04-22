//NAMA  : ALHARIS DHARMARISKI
//NPM   : 1717051049

//Kiri
                for(int b=0;b<15;b++){
                    if(input[b]==A[i][j-b]){
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

//Atas
                for(int b=0;b<15;b++){
                    if(input[b]==A[i-b][j]){
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

//Bawah
                for(int b=0;b<15;b++){
                    if(input[b]==A[i+b][j]){
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
    if(temu>0){
        cout<<"ADA"<<endl;}
    else
    cout<<"TIDAK ADA"<<endl;

    char a;
    cout<<"Apakah ingin mencari kembali ?(Y/N)"<<endl;
    cin>>a;
    if(a=='Y' || a=='y'){
        goto LAGI;
    }else
    exit(0);

}
