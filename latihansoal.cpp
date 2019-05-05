#include<iostream>
using namespace::std;

main(){
string cari,nm;
string nomor [5]={"A001","A002","A003","A007","A008"};
string nama[5]= {"bayu","irvan","susiati","diana","roni"};
int jml;
float harga,biaya=0,tt=0,ttl=0;
string pilih,barang,Y,y,T,t;

cout<<"program kasir"<<endl;
cout<<"1.member"<<endl;
cout<<"2.non member"<<endl;
cout<<"apakah anda member (y/t)";cin>>pilih;
if(pilih==Y||pilih==y)
       cout<<endl;
        cout<<"masukan no id :";cin>>cari;
for(int i=0; i<5; i++)
        if(cari==nomor[i])
            {
            nm=nama[i];
            }
        cout<<"anda member"<<endl;
        cout<<"nomor identitas : "<<cari<<endl;
        cout<<"nama : "<<nm;
        cout<<endl;
cout<<"masukan jumllah pembelian : ";cin>>jml;
for(int i=0; i<jml; i++){
    cout<<"masukan nama barang"<<i<<": ";cin>>barang;cout<<endl;
    cout<<"masukan harga barang"<<i<<" : ";cin>>harga;cout<<endl;
    tt=tt+harga;
    cout<<endl;}
    cout<<"Total Harga : "<<tt<<endl;
    cout<<"Anda mendapatkan diskon 5%"<<endl;
    ttl=tt*0.05;
    cout<<"total setelah Diskon : "<<ttl<<endl;
    biaya=tt-ttl;
    cout<<" biaya yang harus dibayar : "<<biaya;
    if (pilih==t||pilih==T)
        cout<<"Masukan";
        cout<<"Nama Pembeli : ";
        cin>>nm;

cout<<endl;
cout<<"masukan jumllah pembelian : ";cin>>jml;
for(int i=0; i<jml; i++){
    cout<<"masukan nama barang"<<i<<": ";cin>>barang;cout<<endl;
    cout<<"masukan harga barang"<<i<<" : ";cin>>harga;cout<<endl;
    tt=tt+harga;
    cout<<endl;}
    cout<<"Total Harga : "<<tt;

}
























