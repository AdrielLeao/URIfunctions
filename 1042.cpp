#include <iostream>
using namespace std;

int a, b, c, aa, bb, cc, aux;
void num(int a, int b, int c);
int main();

int main(){
  cin >> a>>b>>c;
  num(a, b, c);
  cout << a << endl << b << endl << c << endl;
  return 0;
}

void num(int a, int b, int c){

    aa = a;
    bb = b;
    cc = c;

    if (aa < bb) {
        aux = aa;
        aa = bb;
        bb = aux;
    }

    if (bb < cc){
        aux = bb;
        bb = cc;
        cc = aux;
    }

    if (aa < bb){  
        aux = aa;
        aa = bb;
        bb = aux;
    }

    cout <<cc<<endl<<bb<<endl<<aa<<endl<<endl;
}
