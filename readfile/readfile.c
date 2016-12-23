#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "file.txt";
    FILE *fp;
    // open file in text mode
    if (!(fp = fopen(filename,"r"))) {
        fprintf(stderr,"loadbatch: Can't open %s\n",filename);
        exit(1);
    }

    int numLine;
    fscanf(fp,"%i\n", &numLine);

    float fvalue;
    float fother;
    float fanother;
    for(int i=0; i<numLine; i++){
        fscanf(fp,"%f, %f, %f\n", &fvalue, &fother, &fanother);
        printf("[%f] [%f] [%f]\n", fvalue, fother, fanother);
    }

    fclose(fp);
}

