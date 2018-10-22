#include "sieve.h"

int sieve( int n){
  char *array;
  int baskets = n * log(n) * 1.15;
  array = malloc(baskets);
  
  array[0] = 2;
  array[1] = 2;

  int i = 2;
  while( i < baskets){
    array[i] = 0;
    i++;
  }

  int cur_prime = 0;
  int index = 2;

  while( cur_prime < n){
    if( ! array[index]){
      cur_prime++;
      if( cur_prime == n)
	return index;
      array[index] = 1;
      int i = 2;
      while( index * i < baskets){
        array[index * i] = 2;
	i++;
      }
    }
    index++;
  }
  free(array);
  return 0;
}
    
    
