#include <iostream>

using namespace std;

int r, h, m, s,tempo;
int entrada();	
int cont();

int entrada(){
	cin >> r;
	return r;
}

int cont(){
  tempo = 3600;
  h = r/tempo;
  m = (r-(tempo*h))/60;
  s = (r-(tempo*h)-(m*60));
return 0;
}

int main()
{
	entrada();
	cont();
		cout <<h<< ":" <<m<< ":" <<s<< endl;
	return 0;
}
