# define A 16      // Size to array
# define v 5       // equal values to count in the array
int array[A] = {1,5,8,2,5,9,7,2,3,8,7,6,3,9,4,1}  //array

int count(int c){
  c++;
  return c;
}

int search(int *a, int size, int value){
  int finaly = 0;
  for (int i=0; i<size; i++){
    if (value == a[i]){
      finaly = count(finaly);
  }
  return finaly;
}

int main ( ) {
  int result = search(array, A, v);
  return 0;
}
