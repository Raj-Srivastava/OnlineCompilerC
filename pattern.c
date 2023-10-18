// This is the pattern problem 
#include <stdio.h>

int main() {
    // Write C code here
    int initial,start=1,count=1,val=1,counter=0,n=1;
    for(initial=1;initial<=6;initial++)
    {
        counter=1;
        if(initial%2!=0)
        {
            for(start=n;start<=val;start++)
            {
                if(counter<=initial)
                {
                    printf("%d ",start);
                    count++;
                    counter++;
                }
            }
        }
        else
        {
            for(start=val;start>=n;start--)
            {
                if(counter<=initial)
                {
                    printf("%d ",start);
                    count++;
                    counter++;
                }
            }
        }
        n=count;
        val=count+initial;
        printf("\n");
    }

    return 0;
}


//Output 
/*
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15 
21 20 19 18 17 16 
*/
