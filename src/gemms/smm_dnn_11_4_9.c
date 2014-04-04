#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec(target(mic))
void smm_dnn_11_4_9(const double* a, const double* b, double* c){
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
__m512d xb0;
__m512d xb1;
__m512d xb2;
__m512d xb3;
__m512d xb4;
__m512d xb5;
__m512d xb6;
__m512d xb7;
__m512d xb8;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],15);
 xb1 = _MM512_MASK_LOADU_PD(&b[4+0],15);
 xb2 = _MM512_MASK_LOADU_PD(&b[8+0],15);
 xb3 = _MM512_MASK_LOADU_PD(&b[12+0],15);
 xb4 = _MM512_MASK_LOADU_PD(&b[16+0],15);
 xb5 = _MM512_MASK_LOADU_PD(&b[20+0],15);
 xb6 = _MM512_MASK_LOADU_PD(&b[24+0],15);
 xb7 = _MM512_MASK_LOADU_PD(&b[28+0],15);
 xb8 = _MM512_MASK_LOADU_PD(&b[32+0],15);
for(i=0;i<11;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*4+0],15);
    xa0=_mm512_set1_pd(a[i*9+0]);
    xa1=_mm512_set1_pd(a[i*9+1]);
    xa2=_mm512_set1_pd(a[i*9+2]);
    xa3=_mm512_set1_pd(a[i*9+3]);
    xa4=_mm512_set1_pd(a[i*9+4]);
    xa5=_mm512_set1_pd(a[i*9+5]);
    xa6=_mm512_set1_pd(a[i*9+6]);
    xa7=_mm512_set1_pd(a[i*9+7]);
    xa8=_mm512_set1_pd(a[i*9+8]);
    xc0=_mm512_mask3_fmadd_pd(xa0,xb0,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa1,xb1,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa2,xb2,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa3,xb3,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa4,xb4,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa5,xb5,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa6,xb6,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa7,xb7,xc0,15);
    xc0=_mm512_mask3_fmadd_pd(xa8,xb8,xc0,15);
    _MM512_MASK_STOREU_PD(&c[i*4+0],xc0,15);
}
#else
printf("cppgemm_2_11_9_4\n");
for(int m=0;m<11;m++){
   for(int n=0;n<4;n++){
      for(int k=0;k<9;k++){
         c[m*4+n]+=a[m*9+k]*b[k*4+n];
      }
   }
}
#endif
}
 
