#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   char j [20];
   char * str = &j[0];
   while (strlen(j) < 20){
      *str = 'j';
      str ++;
   }
   * str = '\0';
   printf("%s", j);

return 0;
}