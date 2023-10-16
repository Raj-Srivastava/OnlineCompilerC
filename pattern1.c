/*This is for this pattern
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         * 
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
 * * * * * * * * * *
*/

#include <stdio.h>

int main() {
    // Write C code here
    int i,j,count=0;
    for(j=1;j<=10;j++)
    {
        count++;
        for(i=2;i<=count;i++)
        {
            printf(" ");
        }
        for(i=j;i<=10;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(j=1;j<=10;j++)
    {
        count--;
        for(i=count;i>=2;i--)
        {
            printf(" ");
        }
        for(i=1;i<=j;i++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
