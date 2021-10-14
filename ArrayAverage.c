# define A 16
int array[A] = {1,5,8,2,5,9,7,2,3,8,7,6,3,9,4,1}

int addition(int count int a){
  count = count + a;
  return count;
}

int average(int *a, int size){
  int add = 0;
  for (int i=0; i<size; i++){
    add = addition(add, a[i]);
  }
  add = add/size;
  return add;
}

int main ( ) {
  int result = average(array, A);
  return 0;
}
