#include <iostream>
#include <iomanip>

using namespace std;
double r, Vol, p = 3.14159;
double volume(),entrada();

double entrada(){
	cin >> r;
  return 0;
}

double volume()
{
    Vol = (4 / 3.0)*p*r*r*r;
    return Vol;
}

int main()
{
    entrada();
    volume();
    
     cout << fixed<< setprecision(3);
    
    cout << "VOLUME = " << Vol << endl;
    return 0;
}



