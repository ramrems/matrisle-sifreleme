#include <stdio.h>
#include <stdlib.h>
int main(){
    int*p;
    int z=0;
    char a[3][3];
    for(int j=0;j<3;j++){
            printf("\n\n");
        for(int i=0;i<3;i++){
        a[i][j]=65+z;
         z++;}}
   /* printf("%5c",a[j][i]);}}
    p=a;
    printf("\n\n");
    for(int k=1;k<4;k++){
            for(int m=1;m<4;m++){
             printf("adrs %d,%d:%p ",k,m,(p+m));}
             printf("\n\n");}*/
printf("\nsifrenizin kac haneli oldugunu(harf cinsinden) giriniz: ");
int hane,*px,*py,x,y,sif;
px=&x;
py=&y;
scanf("%d",&hane);
char*psiffre;
char siffre[hane];
psiffre=siffre;
printf("sifrenizi giriniz: ");
for(int n=0;n<hane;n++){
scanf("%d",&sif);
*py=sif%10;
*px=sif/10;
siffre[n]=a[*px-1][*py-1];}
printf("sifreniz:");
for(int n=0;n<hane;n++) printf("%c",*psiffre++);
    return 0;}
