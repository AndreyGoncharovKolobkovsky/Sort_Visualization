#include <iostream>
#include <fstream>
using namespace std;

void bubbleSort(int list[], int listLength)
{
    int counter = 0;
	while(listLength--)
	{
		bool swapped = false;

		for(int i = 0; i < listLength; i++)
		{
			if(list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
				const int N=100;
				string FileName = to_string(counter)+".txt";
                ofstream file (FileName);
                for(int k=0;k<N;k++){
                    cout << list[k] << endl;
                    file << list[k] << endl;
                }
                file.close();
                counter ++;
			}
		}

		if(swapped == false)
			break;
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
	bubbleSort(list, N);

}
