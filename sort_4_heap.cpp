#include <iostream>
#include <fstream>
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
    int counter = 0;
	for(int i = listLength / 2 - 1; i >= 0; i--)
		heapify(list, listLength, i);

	for(int i = listLength - 1; i >= 0; i--)
	{
		swap(list[0], list[i]);
		heapify(list, i, 0);
		for(int i=0;i<N;i++)
                    cout << list[i] << endl;
        const int N=10;
				string FileName = to_string(counter)+".txt";
                ofstream file (FileName);
                for(int k=0;k<N;k++){
                    cout << list[k] << endl;
                    file << list[k] << endl;
                }
                file.close();
                counter ++;
	}
    string FileName = "amount.txt";
        ofstream file (FileName);
        {
        file << counter;
        file.close();
        }
}

int main()
{
	const int N=100;
    int list[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        list[i] = rand()%100;
        cout<<list[i]<<" ";
    }
    cout<<endl;
	heapSort(list, N);

}
