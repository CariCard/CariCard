

int main(){
/*int counter;

for(int x = 0; x<=6; x+=2){
  counter +=x;
}
*/

int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr;
int sum = 0;
  for(int i =0; i<5; ++i){
    sum+= *(ptr +i);
  }
printf("sum of array elements: %d\n", &sum);
return 0;
}