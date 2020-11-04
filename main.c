#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
void main(){float z=0;char *grad="#$&%/+;:-,. ";while(1){for(int y=0;y<50
;++y){for(int x=0;x<100;++x){float ro[3]={0.0,0.0f,2.6};float rd[3]={(2.0
*x)/100.0-1.0f,(2.0f*y)/50-1,-1};float t=0;for(int i=0;i<100;++i){float r
[3];for(int j=0;j<3;++j)r[j]=rd[j]*t+ro[j];for(int j=0;j<2;++j){float p0=
r[0+j];float h=r[1+j];r[0+j]=p0*cos(z+z*j)+h*(-sin(z+z*j));r[1+j]=p0*sin(
z+z*j)+h*cos(z+z*j);}float d=sqrt(pow((sqrt(r[0]*r[0]+r[2]*r[2])-1),2)+r[
1]*r[1])-.5f;t+=d;if(d<0.001||t>=5.0)break;}putchar(grad[(int)(t*t<11?t*t
:11)]);}putchar('\n');}z+=1.0f/30;usleep(1.0f/30*10E5);system("clear");}}
