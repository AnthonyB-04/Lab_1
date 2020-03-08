#include <iostream>
#include "fun.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout<<"Lab2-1_masyv_K-14_Anton_Budnyk"<<endl;
    int a[N];
    for (int i = 0; i < N; i++) {
        a[i] = 0;
        cout << a[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << "\n";
    }

    cout<<"\n"<<"1 - заповнити масив псевдовипадковими числами"<<endl;
    cout<<"2 - введіть числа за допомогою клавіатури"<<endl;
    int k;
    cin>>k;
    vubir(k);
    cout << "Ваш масив заповнений. Натисніть: " << endl;
    cout <<"1.Якщо ви хочете додати элемент після першого максимального елемента та після кожного мінімального елемента 2.Якщо ви хочете сортувати методом bubblesort по зрастанню "<<endl;
    int b;
    cin >> b;
    SortArray(b);
    int c;
    cin >> c;

    return 0;
}
