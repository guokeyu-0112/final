#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    double a[100];
    int i=1,j=0;
    if(argc==1){
        printf("The progrem needs at least one integer parameter to run!\n");
    }
    else{
        for(i=1;i<argc;i++,j++){
        a[j]=atof(argv[i]);
    }
    int x=0;
    double min=a[1];
    for(x=0;x<argc-2;x++){
        if(a[x]<min)
        {
            min=a[x];
        }
    }
    printf("Min parameter is %g\n",min);
    return 0;
    }
    
}