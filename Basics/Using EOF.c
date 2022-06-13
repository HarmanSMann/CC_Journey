// Reading through a file, there are multiple ways, but heres a beginner way. 

#include <stdio.h>

main()
{
  int c;
  int count = 0;
  c = getchar();
  while(c != EOF) // refers to end of file
  {
    c = getchar();
    if (c != '\n')
    {
      count++;
    }
  }
  printf("Number of chars: %d\n", count);
}
