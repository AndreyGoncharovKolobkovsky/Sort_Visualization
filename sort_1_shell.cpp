#include <iostream>
using namespace std;

void shellSort(int list[], int listLength)
{
	for(int step = listLength/2; step > 0; step /= 2)
	{
		for (int i = step; i < listLength; i += 1)
        {
			int j = i;
			while(j >= step && list[j - step] > list[i])
			{
				swap(list[j], list[j - step]);
				j-=step;
				const int N=500;
				for(int i=0;i<N;i++)
                    cout << list[i] << " ";
                    cout << endl;
			}
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
	shellSort(list, N);

	//cout<<"\n\nSorted array ... \n";
	//for (int i = 0; i < N; i++)
	//{
	  // cout<<list[i]<<"\t";
	//}
}
