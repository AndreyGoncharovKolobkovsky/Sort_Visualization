#include <iostream>
using namespace std;

void insertionSort(int list[], int listLength)
{
	for(int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		const int N = 500;
		while(j >= 0 && list[j] > list[j + 1])
		{
			swap(list[j], list[j + 1]);
			j--;
			for(int i=0;i<N;i++)
                    cout << list[i] << " ";
                    cout << endl;
		}
	}
}

int main()
{
	const int N=500;
    int list[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        list[i] = rand()%100;
        cout<<list[i]<<" ";
    }
    cout<<endl;

	insertionSort(list, N);

	return 0;
}
