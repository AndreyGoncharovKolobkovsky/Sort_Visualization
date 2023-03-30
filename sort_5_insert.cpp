#include <iostream>
#include <fstream>
using namespace std;

void insertionSort(int list[], int listLength)
{
    int counter = 0;
	for(int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		const int N = 100;
		while(j >= 0 && list[j] > list[j + 1])
		{
			swap(list[j], list[j + 1]);
			j--;
			for(int i=0;i<N;i++){
                   
                    string FileName = to_string(counter)+".txt";
                ofstream file (FileName);
                for(int k=0;k<N;k++){
                    
                    file << list[k] << endl;
                }
                file.close();
                counter ++;
			}
		}
	}
	string FileName = "amount.txt";
                    std::ofstream file (FileName);
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
        
    }
   

	insertionSort(list, N);

	return 0;
}
