Question asked in amazon interview in 2nd round
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int
main ()
{
  int i, j, k, l, lb, n, t;
  char a[100], b[100];

 printf ("Hello the string1:");
  scanf ("%s", &a);
  l = strlen (a);
  printf ("Hello the string2:");
  scanf ("%s", &b);
  lb = strlen (b);
 if( lb>l||lb<l )
  {
      t=l;
      l=lb;
      lb=t;
  }
  for (j = 0; j < lb; j++){
      for (i = 0; i < l; i++){
	    if ((a[i]) == (b[j])){
	      printf ("%d", i);
	   return 0;
	    }
	  }
    }

  printf ("-1");
  return 0;
}
