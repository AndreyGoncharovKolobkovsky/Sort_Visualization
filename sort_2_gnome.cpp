#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include <fstream>

using namespace std;

//главный функция(метод) программы в котором реализован метод гномьей сортировки
int main() {
    const int N=100;
    int counter = 0;
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
            string FileName = to_string(counter)+".txt";
                ofstream file (FileName);
                for(int k=0;k<N;k++){
                    cout << A[k] << endl;
                    file << A[k] << endl;
                }
                file.close();
                counter ++;
        }
    }
        // конец иттерации
        // cout << '#';
       // cout.width(2);
       // cout << i <<"# ";
    string FileName = "amount.txt";
    ofstream file (FileName);
    file << counter;
    file.close();
    getch();
    return 0;
}

