#include <iostream>
using namespace std;

int main(){
     https://www.onlinegdb.com/#editor_1/*
  jika nilai >=90 lulus sangat memuaskan
  jika nilai >=80 lulus memuaskan 
  jika nilai >=75 cukup
  <75 tidak lulus 
  <= 75 tidak lulus
  */
  int nilai;
    cout<<"masukan nilai="; cin>>nilai;
  if (nilai>=100){
      cout<<"diluar jangkauan";
  }
else if (nilai >=90) {
    cout<<"lulus sangat memuaskan";
}
else if (nilai >=80){
   cout<<"lulus memuaskan";
}
else if (nilai >75){
    cout<<"cukup";
}
else{
    cout<<"tidak lulus";
}


  return 0;
}//end of my function
