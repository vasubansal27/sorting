//useful when elements are in small range
//O(n+k), where k is the elements range
//not a comparison based algo
//it counts the occurence
//stable
//here range of elements i.e. k should be given

//naive implementation
void countSort(arr, n, k) //numbers starting from 0 to k
{
  int count[k];   //countArray
  for(int i=0;i<k;i++)
  {
     count[i]=0;
  }
  for(int i=0;i<n;i++)
  {
      count[arr[i]]++;
  }
  int index=0;
  for(int i=0;i<k;i++)
  {
     for(int j=0;j<count[i];j++)
     {
         arr[index]=i;
         index++;
     }
  }
}


//optimised approach
void countSort(arr, n, k)
{
   int count[k];
   for(int i=0;i<k;i++)
     count[i]=0;
   for(int i=0;i<n;i++)
      count[arr[i]]++;
   int output[n];
   for(int i=n-1;i>=0;i--)
   {
       output[count[arr[i]]-1]=arr[i];
       count[arr[i]]--;
   }
   for(int i=0;i<n;i++)
      arr[i]=output[i];
}
