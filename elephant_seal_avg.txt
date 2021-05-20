/*
C for everyone
Alejandro Fernandez
may,2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

double average(int row,int column,int mat[row][column]){

    int a,b;

    double sum=0.0;
    for(a=0;a<row;a++)
        for(b=0;b<column;b++)
            sum+=mat[a][b];

    return(sum/1000);

}

int main(){

    int i,j,r=50,col=20,cont=0;
    
    
    int** mat=malloc(r*sizeof(int*));
 
   for(i=0;i<r;++i)
    mat[i]=malloc(r*sizeof(int));

    FILE *file;

    file=fopen("elephant_seal_data.txt", "r");/*Text file consisting of raw data in 50 rows and 20 columns*/
    //read all the data in the txt
    for(i = 0; i < 1000; i++){

        for(j = 0; j <col; j++){

            if (!fscanf(file, "%d", &mat[i][j]))     break;

            //prints the data
            //printf("%d\t",mat[i][j]);
            if(j==col-1){
               // printf("\n\n");
            }

            
        }
        //use cont for only printing one text
        if(!cont){
        printf("Average of elephant seal is %f\n\n",average(r,col,mat));
        cont++;
        }
    }
    
    fclose(file);
    return 0;
}