/******************************************************************************
In-place merge two sorted arrays

Given two sorted arrays, X[] and Y[] of size m and n each,
merge elements of X[] with elements of array Y[] by maintaining the
sorted order, i.e., fill X[] with the first m smallest elements and
fill Y[] with remaining elements.

For example,

Input:
 
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
 
Output:
 
X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*******************************************************************************/

void merge(int x[], int y[], int m, int n){
    for(int i=0;i<m;i++){
        
        if(x[i]>y[0]){
            swap(x[i],y[0]);
            int first=y[0];
        }
        
        for(int k=1;k<n && y[k];k++){
            y[k-1]=y[k];
            
        }
        
        y[k]=first;
    }
      
}

