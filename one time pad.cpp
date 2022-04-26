#include<bits/stdc++.h>
using namespace std;
int main()
{
 string pt , key;
 getAgain :
 cout<<"Enter Plaintext : ";
 cin>>pt;
 cout<<"Enter Key: ";
 cin>>key;
 if(pt.length()!=key.length()){
     cout<<"\n Length of key is not equal Length of Plaintext \n";
     goto getAgain;
 }
 cout<<endl<<"# Encryption ::";
 cout<<"\nPlainText :";
 for(int i = 0;i<pt.length();i++){
     cout<<pt[i]<<" ";
 }
 cout<<endl<<"Key : ";
 for(int i = 0;i<key.length();i++){
     cout<<key[i]<<" ";
 }
 cout<<endl;
 for(int i = 0;i<key.length()*2;i++){
     cout<<"__";
 }
 string en="";
 for(int i = 0;i<key.length();i++){
     int a,b,c;
     a = (int)pt[i] - 'a';
     b = (int)key[i] - 'a';
     c = a + b;
     if(c>25){
         c=c-26;
     }
     c = c + 'a';
     en = en + (char) c;
 }
 cout<<"\n\nCipherText : ";
 for(int i = 0;i<en.length();i++){
     cout<<en[i]<<" ";
 }
 cout<<endl<<endl;
 cout<<endl<<"# Decryption ::";
 cout<<"\nCipherText : ";
 for(int i = 0;i<en.length();i++){
     cout<<en[i]<<" ";
 }
 cout<<endl<<"Key : ";
 for(int i = 0;i<key.length();i++){
     cout<<key[i]<<" ";
 }
 cout<<endl;
 for(int i = 0;i<key.length()*2;i++){
     cout<<"__";
 }
 string ds="";
 for(int i = 0;i<key.length();i++){
     int a,b,c;
     a = (int)en[i] - 'a';
     b = (int)key[i] - 'a';
     c = a - b;
     if(c<0){
         c=c+26;
     }
     c = c + 'a';
     ds = ds + (char) c;
 }
 cout<<"\n\nPlainText : ";
 for(int i = 0;i<ds.length();i++){
     cout<<ds[i]<<" ";
 }
 return 0;
}
