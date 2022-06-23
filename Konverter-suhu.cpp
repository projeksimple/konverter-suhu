#include <iostream>
using namespace std;
int main(){
   string username,password;
   float a,b,c,d,e,f,g,h,i,j;
   char opsi,confirm;
   cout << "Harap login terlebih dahulu....."<<endl;
   cout << "Masukkan username:";getline(cin,username);
   cout << "Masukkan password:";getline(cin,password);

   if(username=="admin" || password=="1234"){
    cout << "selamat datang," << username<<endl;
     cout << "=============Konverter suhu sederhana==========="<< endl;
   cout << "A.Celcius ke Reamur      || E.Reamur ke Celcius "<<endl;
   cout << "B.Celcius ke Fahrenheit  || F.Kelvin ke Celcius"<<endl;
   cout << "C.Celcius ke Kelvin      || G.Reamur ke Fahrenheit"<<endl;
   cout << "D.Fahrenheit ke Celcius  || H.Fahrenheit ke Reamur"<<endl;
   cout << "I.Kontak kami            || J.Tentang saya"<<endl;
   cout << "Masukkan opsi:";
   cin >> opsi;
  switch (opsi){
  case 'A':
  case 'a':
  cout << "Masukkan angka:";
  cin >> a;
  cout << a << " derajat celcius: " << (4*a/5) << " derajat reamur"<<endl;
  break;
  
  case 'B':
  case 'b':
  cout << "Masukkan angka:";
  cin >> b;
  cout << b << " derajat celcius: "<<(9*b/5+32) << " derajat fahrenheit";
  break;
 
  case 'C':
  case 'c':
  cout << "Masukkan angka:";
  cin >> c;
  cout << c << " derajat celcius: " << (c+273) << " derajat kelvin";
  break;

  case 'D':
  case 'd':
  cout << "Masukkan angka:";
  cin >> d;
  cout << d << " derajat fahrenheit: " << (5*(d-32)/9) <<" derajat celcius";
  break;

  case 'E':
  case 'e':
  cout << "Masukkan angka:";
  cin >> e;
  cout << e << " derajat reamur: "<< (5*e/4) << " derajat celcius";
  break;

  case 'F':
  case 'f':
  cout << "Inputkan sebuah angka";
  cin >> f;
  cout << f << " derajat kelvin: " << (f-27) << " derajat celcius";
  break;

  case 'G':
  case 'g':
  cout << "inputkan sebuah angka:";
  cin >>  g;
  cout << g << " derajat reamur: " << (9*g/4+32) << "derajat fahrenheit";
  break;

  case 'H':
  case 'h':
  cout << "inputkan sebuah angka:";
  cin >>  h;
  cout << h << " derajat fahrenheit: " << (4*h-32/9) << "derajat reamur";
  break;

  case 'I':
  case 'i':
  cout << "###########Contact:#########"<<endl;
	cout << "Instagram:https://www.instagram.com/andrafisha"<<endl;
	cout << "Email:projeksederhanadev@gmail.com"<<endl;
	cout << "Github:github.com/projeksimple"<<endl;
	cout << "Netlify:[coming soon]"<<endl;
    break;

  case 'J':
  case 'j':
  cout << "Cuma seorang bocah remaja yang kadang iseng iseng bikin program yang saya pun gatau artinya"<<endl;
  break;
default:
cout << "END OF PROGRAM>..";
    break;
}
}
else{
    cout << "selamat tinggal,"<<username;
}
  
    return 0;
}