
//Ajish Sekar 106116002

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int size,arr[100],i,j,temp;
    cout<<"Enter size of array ";
    cin>>size;
    cout<<"Enter the array\n";
    for(i=0;i<size;i++)
    {
                            cin>>arr[i];
                            }
    
    for(i=1;i<size;i++)
    {
                       j=i-1;
                       temp = arr[i];
                       while((j>=0)&&(temp<arr[j]))
                       {
                                                arr[j+1]=arr[j];
                                                j--;
                                                }
                       arr[j+1]=temp;
                       }
    cout<<"The sorted array is ";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
    getch();
}
    
