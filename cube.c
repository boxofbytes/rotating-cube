#include <stdio.h>
#include <math.h>
#include <string.h>
                                                  float a[16
                                                ] = {0.625 , 0
                                         , 0, 0, 0, 1, 0, 0, 0, 0, -1
                                        , 1, 0, 0,            -0.1, 0.1
                                  }; float g[                 16]={1, 0,0 , 0
                        , 0, 1, 0, 0,0                                ,0,1,0,0,0,-3,1}
                      ;float v;                                             char c[2025
               ];int main(){                                                  memset(c,10,2023)
              ;for(;;)                                                            {*    g=cos(v-=
         0.001);g[2]                                                                     =sin(v);g[8]
         =-sin(v);g                                                                        [10]=cos(v);
         float  s[16]={0                                                              };for(int   i=0;i
         <2000 ;i++){c[i/80*81+                                                i%80]=32;if(i<     64)s[
         i/16*     4+ (i%16)/4]+=                                            g[i/16*4+          (i%4)]*
         a[(i%          4)*4+(i%16)/4];}                              for(int i=0;i<            8;i++){
         float              m    [3][3];                            for(int j                   =0;j<3;
         j++){                   for(int k=0;k<3              ;k++){m[j][k]=                    ("!!!  "
         "!! !"                            " !!     !!! ! !!"                              "   ! !     "
         "!!! !!"                                "  ! !! !    !"                             "! !!!! ! !"
         " !! !  "                                  [i*9+3                                      *j+k]-32
         )*2-                                       1; }                                        float w=*
         m[j]*                                      s[3]+m                                      [j][1]*
         s[7]+                                       m[j][                                      2]*s[11
         ]+s[                                       15];for                                      (int k
         =0;k<                                      3;k++)                                      {m[j][k
         ]=(*m                                      [j]*s[                                      k]+m[j]
         [1]*s                                      [4+k]+                                      m[j][2]
         *s[8+                                       k]+s[                                      12+k])/
         w;}*m                                      [j]=(*                                      m[j]+1)
         /2*80                                      ;m[j][                                      1]=(m[j
         ][1]*                                      -1+1)/                                      2*25;}
         for(                                      int j=0;                                      j<2000;
         j++){                                      if(((j                                      %80-*m[
         0])*(                                      m[1][1                                      ]-m[0][
         1])-(                                      j/80-m                                      [0][1])
         *(*m[                                       1]-*m                                      [0])>=0
         )&((j%80                                    -*m[1                                     ])*(m[2]
         [1]-m[1][1                                 ])-(j/                               80-m[1][1])*
            (*m[2]-*m[1])>=                          0)&((                            j%80-*m[2
                   ])*(m[0][1                        ]-m[2                     ][1])-(j/80-m[2]
                     [1])*(*m[0]-*m[                2])>=0                   )){c[j/80   *81
                          +(j%80)]=                45;if(            i==0||i==4)c[j/80
                                    *81+(j%80        )]=35       ;}}}puts(c)
                                        ;}}///////   ///////////////////
                                             //////////////////////
                                             // ////////////////
                                                //   /////
                                                     //