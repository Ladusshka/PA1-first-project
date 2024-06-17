#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>


int prtriangle(double x1,double x2, double x3,double y1,double y2, double y3)
{
    double a = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    double b = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    double c = sqrt(pow((x1-x3),2)+pow((y1-y3),2));

  if ( fabs (a*a + b*b - c*c) < 1000 * DBL_EPSILON * c*c )
  {
    return 1;
  }
  else
  {
    return 0;
  }

}
int main() {
    double x1,x2,x3,x4,y1,y2,y3,y4;
    char d1,d2,d3;
        if(scanf(" %c %lf %c %lf %c",&d1,&x1,&d3,&y1,&d2)!=5 || d1!=40 || d2!=41 || d3!=44){
        printf("Bod #1:\nNespravny vstup.\n");
        return 1;
        }
        if(scanf(" %c %lf %c %lf %c",&d1,&x2,&d3,&y2,&d2)!=5 || d1!=40 || d2!=41 || d3!=44){
        printf("Bod #1:\nBod #2:\nNespravny vstup.\n");
        return 1;
        }
        if(scanf(" %c %lf %c %lf %c",&d1,&x3,&d3,&y3,&d2)!=5 || d1!=40 || d2!=41 || d3!=44){
        printf("Bod #1:\nBod #2:\nBod #3:\nNespravny vstup.\n");
        return 1;
        }
        if(scanf(" %c %lf %c %lf %c",&d1,&x4,&d3,&y4,&d2)!=5 || d1!=40 || d2!=41 || d3!=44){
        printf("Bod #1:\nBod #2:\nBod #3:\nBod #4:\nNespravny vstup.\n");
        return 1;
        }

    int result1 = prtriangle(x1,x2,x3,y1,y2,y3);
    int result2 = prtriangle(x2,x3,x4,y2,y3,y4);
    int result3 = prtriangle(x3,x4,x1,y3,y4,y1);
    if(result1&&result2&&result3){
        printf("Bod #1:\nBod #2:\nBod #3:\nBod #4:\nBody tvori obdelnik.\n");
    }
    else{
        printf("Bod #1:\nBod #2:\nBod #3:\nBod #4:\nBody netvori obdelnik.\n");
    }
    return 0;
}
