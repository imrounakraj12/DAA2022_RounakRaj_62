#include <iostream>
using namespace std;

void bubble(int a[], int n) 
 {  
 int i, j, temp, count=0;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {   count++; 
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;
                
            }   
             
        } 
       
    }  
    cout<<"total no of comparison: "<<count<<"\n";
    
 }  

int main()
{
    int n;
    int a[n];

    
    cout<<"enter the size of array\n";
    cin>>n;
    
   for (int i=0;i<n;++i)
   {
       cin>>a[i];
   }
   
  

  bubble(a,n);
  for (int i=0;i<n;++i)
   {
       cout<< a[i]<< " ";
   }
   
    return 0;
}
