/* Эта программа выводит сумму двух числовых
    аргументов командной строки */
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
  double a,b;
  char x;
  if(argc!=3)
  {
    cout << "Использование: ./a.out число число\n";
    return 1;
   }
  a = atof(argv[1]);
  b = atof(argv[2]);
  cin >> x;
  if ( x == "+")
   cout << a + b;
  else
   cout << a - b;
  return 0;
}
