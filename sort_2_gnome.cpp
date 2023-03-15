#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;

//главный функция(метод) программы в котором реализован метод гномьей сортировки
int main() {
    const int N=500;
    int A[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        A[i] = rand()%100;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    //алгоритм гномьей сортировки
    i = 0;
    while (i < N) {
        if (i == 0 || A[i - 1] <= A[i])
            ++i;
        else {
            tmp = A[i];
            A[i] = A[i - 1];
            A[i - 1] = tmp;
            --i;
        }
        // конец иттерации
        // cout << '#';
       // cout.width(2);
       // cout << i <<"# ";

        for(int i=0;i<N;i++)
            cout << A[i] << " ";
        cout << endl;
    }

    for(i=0;i<N;i++)
        cout << A[i] << " ";
    cout << endl;
    getch();
    return 0;
}
