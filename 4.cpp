#include <iostream>
using namespace std;
int main()
{

const long minutes = 60; //Минуты
const long hours = 60*minutes; //Часы
const long days = 24*hours; //Дни

cout << "Kol-vo sec: " ; //Ввод
long seconds; //Запись в переменную типа (long)
cin >> seconds; 
cout << seconds << " Sec = " ; //Ввод

  if(seconds / days > 0)cout << seconds / days << " Days " ;
seconds %= days ; //Условие
  if(seconds / hours > 0)cout << seconds / hours << " Hours " ;
seconds %= hours ; //Условие
  if(seconds / minutes > 0)cout << seconds / minutes << " Minutes " ;
seconds %= minutes ; //Условие

cout << seconds << " Sec " ;

system("pause");
return 0;
}
