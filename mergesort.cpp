#include <iostream>
using namespace std;

int mrg_sort(int arr1[],int n1,int arr2[],int n2,int result[]){
     int i,j,k;
     i=j=k=0;
     while(i< n1 && j<n2)
	 {
	     if(arr1[i] < arr2[j])
	         result[k++] = arr1[i++];
	     else if(arr1[i] > arr2[j])
	         result[k++] = arr2[j++];
	     else
		 {
	         result[k++]=arr1[i++];
	         j++;
     	}
     }
     if(i<n1)
	 {
	     while(i<n1)
	       result[k++]=arr1[i++];
     }
     else if(j<n2)
	 {
	     while(j<n2)
	         result[k++]=arr2[j++];
     }
     return(k);
}

main()
{
    int arr1[10],arr2[10],result[20],i;

    cout<<"Enter 10 numbers [arr1]: ";
    for(i=0;i<10;i++)
      cin>>arr1[i];
    cout<<"\nEnter 10 numbers [arr2]: ";
    for(i=0;i<10;i++)
      cin>>arr2[i];

    int item=mrg_sort(arr1,10,arr2,10,result);
    cout<<"\n\nAfter sort : ";
    for(i=0;i<item;i++)
      cout<<result[i]<<" ";
}
