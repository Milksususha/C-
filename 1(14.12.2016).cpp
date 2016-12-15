#include <iostream>
using namespace std;
int myfunc (int a, int b){
    int sum;
    sum = a*b;
    return sum;
}

int main () {
    int k,m,sum;
    string stroka("text");
    cin>>stroka;
    cin>>k;
    cin>>m;
    sum = myfunc(k,m);
    cout<<sum<<endl;
    cout<<stroka<<endl;
    system("pause");
    return 0;   
}
