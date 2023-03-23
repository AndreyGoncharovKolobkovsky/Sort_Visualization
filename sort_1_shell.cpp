#include <iostream>
#include <fstream>
using namespace std;

void shellSort(int list[], int listLength)
{
    int counter = 0;
	for(int step = listLength/2; step > 0; step /= 2)
	{
		for (int i = step; i < listLength; i += 1)
        {
			int j = i;
			while(j >= step && list[j - step] > list[i])
			{
				swap(list[j], list[j - step]);
				j-=step;
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
	const int N=10;
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
