#include <iostream>
using namespace std;

int partition(int list[], int start, int pivot)
{
	int i = start;
	const int N = 500;
	while(i < pivot)
	{
		if(list[i] > list[pivot] && i == pivot-1)
		{
			swap(list[i], list[pivot]);
			pivot--;
		}

		else if(list[i] > list[pivot])
		{
			swap(list[pivot - 1], list[pivot]);
			swap(list[i], list[pivot]);
			pivot--;
		}
		else i++;
		for(int i=0;i<N;i++)
                    cout << list[i] << " ";
                    cout << endl;
	}
	return pivot;
}

void quickSort(int list[], int start, int end)
{
	if(start < end)
	{
		int pivot = partition(list, start, end);

		quickSort(list, start, pivot - 1);
		quickSort(list, pivot + 1, end);
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
	//cout<<"Input array ...\n";
	//for (int i = 0; i < N; i++)
	//{
	  // cout<<list[i]<<"\t";
	//}

	quickSort(list, 0, (N-1));

	//cout<<"\n\nSorted array ... \n";
	//for (int i = 0; i < N; i++)
	//{
	  // cout<<list[i]<<"\t";
	//}

	return 0;
}
