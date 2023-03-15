#include <iostream>
using namespace std;

void heapify(int list[], int listLength, int root)
{
	int largest = root;
	int l = 2*root + 1;
	int r = 2*root + 2;

	if (l < listLength && list[l] > list[largest])
		largest = l;

	if (r < listLength && list[r] > list[largest])
		largest = r;

	if (largest != root)
	{
		swap(list[root], list[largest]);
		heapify(list, listLength, largest);
	}
}

void heapSort(int list[], int listLength)
{
    const int N = 100;
	for(int i = listLength / 2 - 1; i >= 0; i--)
		heapify(list, listLength, i);

	for(int i = listLength - 1; i >= 0; i--)
	{
		swap(list[0], list[i]);
		heapify(list, i, 0);
		for(int i=0;i<N;i++)
                    cout << list[i] << " ";
                    cout << endl;
	}

}

int main()
{
	const int N=100;
    int list[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        list[i] = rand()%500;
        cout<<list[i]<<" ";
    }
    cout<<endl;
	//cout<<"Input array ..."<<endl;
	//for(int i = 0; i < N; i++)
		//cout << list[i] << '\t';
	//cout << endl;

	heapSort(list, N);

	//cout << "Sorted array"<<endl;
	//for(int i = 0; i < N; i++)
		//cout << list[i] << '\t';
	//cout << endl;
}
