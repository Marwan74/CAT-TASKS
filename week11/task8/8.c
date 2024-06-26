void findMinMax(int *arr, int size, int *min, int *max){
    *min = *max= arr[0];
     for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }

}



int main()
{
   int size;
   printf("enter the size of array : ");
   scanf("%d",&size);
   int arr[size];
   printf("enter %d elements of array : ",size);
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   int min,max;
   findMinMax(arr, size, &min, &max);
   printf("Minimum value in the array: %d\n", min);
   printf("Maximum value in the array: %d\n", max);

    return 0;
}