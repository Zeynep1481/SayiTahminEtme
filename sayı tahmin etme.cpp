#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  int tahmin;
  int sayac=1;
  int gizli;
  char secim;
  srand(time(0));
  gizli=rand()%10;
  
  
  
  	cout<<"1-10 arasinda bir sayi tuttuk. Sayiyi tahmin edebilir misiniz?"<<endl;
    do {    
	do{
	  do{
	  	  

	  	cout<<"Tahmininiz:"<<endl;
        cin>>tahmin;

        if(tahmin==gizli){
        	cout<<"Tebrikler "<<sayac<<". Denemede buldunuz."<<endl;}
        else if(tahmin<gizli){
        	cout<<"Daha buyuk"<<endl;
        	sayac++;}
        else{
        	cout<<"Daha kucuk"<<endl;
        	sayac++;}
        }while(tahmin!=gizli);
       
        cout<<"Devam etmek ister misiniz?(E/H)"<<endl;
        cin>>secim;
        sayac=1;   
		      
		 }while(secim=='e' || secim=='E');
		if(secim=='h' || secim=='H'){
         	cout<<"Tesekkurler.."<<endl;}
         else {
        	cout<<"Yanlis bir secim yaptiniz.!"<<endl;
        	cout<<"Seciminizi tekrar giriniz?(E/H)"<<endl;
        	cin>>secim;}

		}while(secim=='e' & secim=='E');
		
        return 0;
    }
  
  
  
