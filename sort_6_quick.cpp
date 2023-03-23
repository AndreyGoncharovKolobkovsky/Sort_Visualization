#include <iostream>
#include <fstream>
using namespace std;

int counter = 0;

int partition(int list[], int start, int pivot)
{
	int i = start;
	const int N = 100;
	while(i < pivot)
	{
		if(list[i] > list[pivot] && i == pivot-1)
		{
			swap(list[i], list[pivot]);
			pivot--;
            cout << list[i] << endl;
            string FileName = to_string(counter)+".txt";
            ofstream file (FileName);
            counter ++;
            for(int k=0;k<N;k++){
            cout << list[k] << endl;
                file << list[k] << endl;
            }
            file.close();
		}
		else if(list[i] > list[pivot])
		{
			swap(list[pivot - 1], list[pivot]);
			swap(list[i], list[pivot]);
			pivot--;
            string FileName = to_string(counter)+".txt";
            ofstream file (FileName);
            counter ++;
            for(int k=0;k<N;k++){
            cout << list[k] << endl;
                file << list[k] << endl;
            }
            file.close();
        }
		else i++;

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
	 const int N=100;
    int list[N],i,tmp;
    //randomize();

    for(i=0;i<N;i++) {
        list[i] = rand()%100;
        cout<<list[i]<<" ";
    }
    cout<<endl;
	quickSort(list, 0, (N-1));

	string FileName = "amount.txt";
	ofstream file (FileName);
    file << counter;
    file.close();
	return 0;
}
