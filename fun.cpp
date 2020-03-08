//
// Created by Anthony on 03.02.2020.
//

#include <iostream>
#include "fun.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void vubir(int k) {

    int a[N];

    switch (k) {
      case 1:
        srand(static_cast<unsigned int>(time(0)));
		for (int i = 0; i < N; i++) {
            a[i]=rand();
            cout<<a[i]<<"\t";
            if ((i+1) % 5 == 0)
                cout << "\n";}
		break;
      case 2:
		for (int i = 0; i < N; i++) {
            cout<<"a["<<i<<"]=";
            cin>>a[i];}
        for (int i = 0; i < N; i++) {
            cout<<a[i]<<"\t";
            if ((i+1) % 5 == 0)
                cout << "\n";}
		break;

	default:
		cout << "ne pravulne znachennya";
		break;
     }
}

int FindMax() {
    int a[N];
    int m = a[0];
    int pos = 0;
    for (int i = 1; i <= N; i++) {
        if (a[i] > m) {
            m = a[i];
            pos = i;
        }
    }
    return pos;
}

int FindMin() {
    int a[N];
    int m = a[0];
    int pos = 0;
    for (int i = 1; i <= N; i++) {
        if (a[i] < m) {
            m = a[i];
            pos = i;
        }
    }
    return pos;
}

void Bubble(int a[], int n) {

    char is = 1;
    int m = 0;
    int i;
    int c;
    while (is == 1) {
        is = 0;
        for (i = m + 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                /*обмін елементами*/
                c = a[i];
                a[i] = a[i - 1];
                a[i - 1] = c;
                is = 1;
            }
        }
    }

}

void AddEl() {

    int a[N], a1[N];
    int user_number;
    int min = a[0];//MINIMUM
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    int max = a[0];//MAXIMUM
    for (int i = 0; i < N; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < N; i++)//MINIMUM
    {
        if (a[i] == min)
        {
            count++;
        }
    }

    count+=13;
    int q = 0;

    for (int j = 0; j < count - 1; j++)
    {
        if (a[q] != min)
        {
            a1[j] = a[q];
        }
        else
        {
            a1[j] = a[q];
            j++;
            a1[j] = user_number;
        }
        q++;
    }

    for (int i = 0; i < count; i++)

    {
        if (a1[i] == max)
        {
            for (int j = count - 2; j > i; j--)
                a1[j + 1] = a1[j];
            a1[i + 1] = user_number;
            break;
        }
    }


    for (int i = 0; i < count; i++)
    {
        a[i] = a1[i];
    }

    for (int i = 1; i < count + 1; ++i)
    {
        if (i % 5 == 0)
            cout << a[i - 1] << '\n';
        else
            cout << a[i - 1] << '\t';
    }
    cout << endl;
}

void SortArray( int b) {
    int a[N];
    switch (b) {

        case 1:
            AddEl();

            break;

        case 2:
            Bubble(a, N);
            break;
        default:
            cout << "Вы ввели неправильное значение";
            break;
    }

}