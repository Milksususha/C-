#include <iostream>
using namespace std;
int main()
{

const long minutes = 60; //������
const long hours = 60*minutes; //����
const long days = 24*hours; //���

cout << "Kol-vo sec: " ; //����
long seconds; //������ � ���������� ���� (long)
cin >> seconds; 
cout << seconds << " Sec = " ; //����

  if(seconds / days > 0)cout << seconds / days << " Days " ;
seconds %= days ; //�������
  if(seconds / hours > 0)cout << seconds / hours << " Hours " ;
seconds %= hours ; //�������
  if(seconds / minutes > 0)cout << seconds / minutes << " Minutes " ;
seconds %= minutes ; //�������

cout << seconds << " Sec " ;

system("pause");
return 0;
}
