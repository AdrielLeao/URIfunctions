#include <iostream>
using namespace std;

string a,b,c;
string abc(string a, string b, string c);

int abc(){
	    cin >> a;
      cin >> b;
	    cin >> c;
	    return 0;
}

int main() {
  
  abc();

  if (a=="vertebrado"){
    if(b=="ave"){
      if(c=="carnivoro") cout<<"aguia"<<endl;
      else cout<< "pomba" <<endl; 
    }
    if(b=="mamifero"){
      if(c=="onivoro") cout<<"homem"<<endl;  
      else cout<< "vaca" <<endl;  
    }
  }

  else if (a=="invertebrado"){
    if(b=="inseto"){
      if(c=="hematofago") cout<<"pulga"<<endl;
      else cout<< "lagarta" <<endl;   
    }
    if(b=="anelideo"){
      if(c=="hematofago") cout<<"sanguessuga"<<endl;
      else cout<< "minhoca" <<endl;
      
    }
  }
  
return 0;
}
