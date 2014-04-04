#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec(target(mic))
void smm_dnn_12_23_15(const double* a, const double* b, double* c){
#ifdef __MIC__
int i;
__m512d xa0;
__m512d xa1;
__m512d xa2;
__m512d xa3;
__m512d xa4;
__m512d xa5;
__m512d xa6;
__m512d xa7;
__m512d xa8;
__m512d xa9;
__m512d xa10;
__m512d xa11;
__m512d xa12;
__m512d xa13;
__m512d xa14;
__m512d xb0;
__m512d xb1;
__m512d xb2;
__m512d xb3;
__m512d xb4;
__m512d xb5;
__m512d xb6;
__m512d xb7;
__m512d xb8;
__m512d xb9;
__m512d xb10;
__m512d xb11;
__m512d xb12;
__m512d xb13;
__m512d xb14;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[23+0],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[46+0],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[69+0],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[92+0],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[115+0],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[138+0],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[161+0],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[184+0],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[207+0],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[230+0],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[253+0],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[276+0],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[299+0],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[322+0],255);
for(i=0;i<12;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*23+0],255);
    xa0=_mm512_set1_pd(a[i*15+0]);
    xa1=_mm512_set1_pd(a[i*15+1]);
    xa2=_mm512_set1_pd(a[i*15+2]);
    xa3=_mm512_set1_pd(a[i*15+3]);
    xa4=_mm512_set1_pd(a[i*15+4]);
    xa5=_mm512_set1_pd(a[i*15+5]);
    xa6=_mm512_set1_pd(a[i*15+6]);
    xa7=_mm512_set1_pd(a[i*15+7]);
    xa8=_mm512_set1_pd(a[i*15+8]);
    xa9=_mm512_set1_pd(a[i*15+9]);
    xa10=_mm512_set1_pd(a[i*15+10]);
    xa11=_mm512_set1_pd(a[i*15+11]);
    xa12=_mm512_set1_pd(a[i*15+12]);
    xa13=_mm512_set1_pd(a[i*15+13]);
    xa14=_mm512_set1_pd(a[i*15+14]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa14,xb14,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*23+0],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+8],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[23+8],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[46+8],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[69+8],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[92+8],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[115+8],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[138+8],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[161+8],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[184+8],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[207+8],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[230+8],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[253+8],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[276+8],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[299+8],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[322+8],255);
for(i=0;i<12;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*23+8],255);
    xa0=_mm512_set1_pd(a[i*15+0]);
    xa1=_mm512_set1_pd(a[i*15+1]);
    xa2=_mm512_set1_pd(a[i*15+2]);
    xa3=_mm512_set1_pd(a[i*15+3]);
    xa4=_mm512_set1_pd(a[i*15+4]);
    xa5=_mm512_set1_pd(a[i*15+5]);
    xa6=_mm512_set1_pd(a[i*15+6]);
    xa7=_mm512_set1_pd(a[i*15+7]);
    xa8=_mm512_set1_pd(a[i*15+8]);
    xa9=_mm512_set1_pd(a[i*15+9]);
    xa10=_mm512_set1_pd(a[i*15+10]);
    xa11=_mm512_set1_pd(a[i*15+11]);
    xa12=_mm512_set1_pd(a[i*15+12]);
    xa13=_mm512_set1_pd(a[i*15+13]);
    xa14=_mm512_set1_pd(a[i*15+14]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa14,xb14,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*23+8],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+16],127);
 xb1 = _MM512_MASK_LOADU_PD(&b[23+16],127);
 xb2 = _MM512_MASK_LOADU_PD(&b[46+16],127);
 xb3 = _MM512_MASK_LOADU_PD(&b[69+16],127);
 xb4 = _MM512_MASK_LOADU_PD(&b[92+16],127);
 xb5 = _MM512_MASK_LOADU_PD(&b[115+16],127);
 xb6 = _MM512_MASK_LOADU_PD(&b[138+16],127);
 xb7 = _MM512_MASK_LOADU_PD(&b[161+16],127);
 xb8 = _MM512_MASK_LOADU_PD(&b[184+16],127);
 xb9 = _MM512_MASK_LOADU_PD(&b[207+16],127);
 xb10 = _MM512_MASK_LOADU_PD(&b[230+16],127);
 xb11 = _MM512_MASK_LOADU_PD(&b[253+16],127);
 xb12 = _MM512_MASK_LOADU_PD(&b[276+16],127);
 xb13 = _MM512_MASK_LOADU_PD(&b[299+16],127);
 xb14 = _MM512_MASK_LOADU_PD(&b[322+16],127);
for(i=0;i<12;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*23+16],127);
    xa0=_mm512_set1_pd(a[i*15+0]);
    xa1=_mm512_set1_pd(a[i*15+1]);
    xa2=_mm512_set1_pd(a[i*15+2]);
    xa3=_mm512_set1_pd(a[i*15+3]);
    xa4=_mm512_set1_pd(a[i*15+4]);
    xa5=_mm512_set1_pd(a[i*15+5]);
    xa6=_mm512_set1_pd(a[i*15+6]);
    xa7=_mm512_set1_pd(a[i*15+7]);
    xa8=_mm512_set1_pd(a[i*15+8]);
    xa9=_mm512_set1_pd(a[i*15+9]);
    xa10=_mm512_set1_pd(a[i*15+10]);
    xa11=_mm512_set1_pd(a[i*15+11]);
    xa12=_mm512_set1_pd(a[i*15+12]);
    xa13=_mm512_set1_pd(a[i*15+13]);
    xa14=_mm512_set1_pd(a[i*15+14]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa9,xb9,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa10,xb10,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa11,xb11,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa12,xb12,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa13,xb13,xc0,127);
    xc0=_mm512_mask3_fmadd_pd(xa14,xb14,xc0,127);
    _MM512_MASK_STOREU_PD(&c[i*23+16],xc0,127);
}
#else
printf("cppgemm_2_12_15_23\n");
for(int m=0;m<12;m++){
   for(int n=0;n<23;n++){
      for(int k=0;k<15;k++){
         c[m*23+n]+=a[m*15+k]*b[k*23+n];
      }
   }
}
#endif
}
 
