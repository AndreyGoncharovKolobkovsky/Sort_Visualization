#include <iostream>
using namespace std;

void bubbleSort(int list[], int listLength)
{
	while(listLength--)
	{
		bool swapped = false;

		for(int i = 0; i < listLength; i++)
		{
			if(list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
				const int N=500;
				for(int i=0;i<N;i++)
                    cout << list[i] << " ";
                    cout << endl;
			}
		}

		if(swapped == false)
			break;
	}
}

int main()
{
	//int list[5] = {3,19,8,0,48};
	const int N=500;
    int list[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        list[i] = rand()%100;
        cout<<list[i]<<" ";
    }
    cout<<endl;
	//cout << "Input array ..." << endl;
	//for(int i = 0; i < N; i++)
		//cout << list[i] << '\t';
	//cout << endl;

	bubbleSort(list, N);

	//cout << "Sorted array ..." << endl;
	//for(int i = 0; i < N; i++)
		//cout << list[i] << '\t';
	//cout << endl;
}
