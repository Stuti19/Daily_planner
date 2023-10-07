 #include<stdio.h>
 int main()
 {
  //  int num[]={1,2,2,4,5,7,7};
  //  int arr[7];
  //  int k=0;
  //  int flag=0;
  //  for(int i=0;i<7;i++){
  //   for(int j=0;j<7;j++){
  //     if(i!=j && num[i]==num[j]){
  //       for(int k1=0;k1<k;k1++)
  //         if(arr[k1]==num[j])
  //           flag=1;
  //       if(flag!=1)
  //         arr[k++]=num[j];
  //     }
  //   }
  //  }
  //  for(int i=0;i<k;i++){
  //   printf("%d",arr[i]);
  //  }
  //  return 0;

  int numbers[15] = {1,1,2,2,2,3,4,5,6,6,7,7,7,8,9}, i, j;
    int arr2[15], k = 0, k1 = 0;
    int flag = 0;
    for(i = 0; i < 15; i++)
    {
       for(j = 0; j < 15; j++)
       {
           flag = 0;
           if(i != j && numbers[i] == numbers[j])
           {
               for(k1 = 0; k1 < k; k1++)
                   if(arr2[k1] != numbers[j])
                   arr2[k++] = numbers[j];
           }
       }
    }
    for(i = 0; i < k; i++)
      printf("Number %d has duplicate values\n",arr2[i]);
    return 0;
}
