#include <stdio.h>

int main (){

  int cat1, cat2, hip;

  for (hip=1;hip <= 500;hip++){
    for (cat1 = 1;cat1 < hip; cat1++){
      for (cat2 = cat1; cat2 < hip; cat2++){

        if (cat1 * cat1 + cat2 * cat2 == hip * hip){
           printf ("%d %d %d\n",cat1, cat2, hip);
        }
      }
    }
  }
  return 0;
}
