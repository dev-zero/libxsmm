#include <immintrin.h>
#include <micsmmmisc.h>
#include <mkl.h>
__declspec(target(mic))
void smm_dnn_14_24_23(const double* a, const double* b, double* c){
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
__m512d xa15;
__m512d xa16;
__m512d xa17;
__m512d xa18;
__m512d xa19;
__m512d xa20;
__m512d xa21;
__m512d xa22;
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
__m512d xb15;
__m512d xb16;
__m512d xb17;
__m512d xb18;
__m512d xb19;
__m512d xb20;
__m512d xb21;
__m512d xb22;
__m512d xc0;
 xb0 = _MM512_MASK_LOADU_PD(&b[0+0],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[24+0],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[48+0],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[72+0],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[96+0],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[120+0],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[144+0],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[168+0],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[192+0],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[216+0],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[240+0],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[264+0],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[288+0],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[312+0],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[336+0],255);
 xb15 = _MM512_MASK_LOADU_PD(&b[360+0],255);
 xb16 = _MM512_MASK_LOADU_PD(&b[384+0],255);
 xb17 = _MM512_MASK_LOADU_PD(&b[408+0],255);
 xb18 = _MM512_MASK_LOADU_PD(&b[432+0],255);
 xb19 = _MM512_MASK_LOADU_PD(&b[456+0],255);
 xb20 = _MM512_MASK_LOADU_PD(&b[480+0],255);
 xb21 = _MM512_MASK_LOADU_PD(&b[504+0],255);
 xb22 = _MM512_MASK_LOADU_PD(&b[528+0],255);
for(i=0;i<14;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*24+0],255);
    xa0=_mm512_set1_pd(a[i*23+0]);
    xa1=_mm512_set1_pd(a[i*23+1]);
    xa2=_mm512_set1_pd(a[i*23+2]);
    xa3=_mm512_set1_pd(a[i*23+3]);
    xa4=_mm512_set1_pd(a[i*23+4]);
    xa5=_mm512_set1_pd(a[i*23+5]);
    xa6=_mm512_set1_pd(a[i*23+6]);
    xa7=_mm512_set1_pd(a[i*23+7]);
    xa8=_mm512_set1_pd(a[i*23+8]);
    xa9=_mm512_set1_pd(a[i*23+9]);
    xa10=_mm512_set1_pd(a[i*23+10]);
    xa11=_mm512_set1_pd(a[i*23+11]);
    xa12=_mm512_set1_pd(a[i*23+12]);
    xa13=_mm512_set1_pd(a[i*23+13]);
    xa14=_mm512_set1_pd(a[i*23+14]);
    xa15=_mm512_set1_pd(a[i*23+15]);
    xa16=_mm512_set1_pd(a[i*23+16]);
    xa17=_mm512_set1_pd(a[i*23+17]);
    xa18=_mm512_set1_pd(a[i*23+18]);
    xa19=_mm512_set1_pd(a[i*23+19]);
    xa20=_mm512_set1_pd(a[i*23+20]);
    xa21=_mm512_set1_pd(a[i*23+21]);
    xa22=_mm512_set1_pd(a[i*23+22]);
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
    xc0=_mm512_mask3_fmadd_pd(xa15,xb15,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa16,xb16,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa17,xb17,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa18,xb18,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa19,xb19,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa20,xb20,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa21,xb21,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa22,xb22,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*24+0],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+8],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[24+8],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[48+8],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[72+8],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[96+8],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[120+8],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[144+8],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[168+8],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[192+8],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[216+8],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[240+8],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[264+8],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[288+8],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[312+8],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[336+8],255);
 xb15 = _MM512_MASK_LOADU_PD(&b[360+8],255);
 xb16 = _MM512_MASK_LOADU_PD(&b[384+8],255);
 xb17 = _MM512_MASK_LOADU_PD(&b[408+8],255);
 xb18 = _MM512_MASK_LOADU_PD(&b[432+8],255);
 xb19 = _MM512_MASK_LOADU_PD(&b[456+8],255);
 xb20 = _MM512_MASK_LOADU_PD(&b[480+8],255);
 xb21 = _MM512_MASK_LOADU_PD(&b[504+8],255);
 xb22 = _MM512_MASK_LOADU_PD(&b[528+8],255);
for(i=0;i<14;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*24+8],255);
    xa0=_mm512_set1_pd(a[i*23+0]);
    xa1=_mm512_set1_pd(a[i*23+1]);
    xa2=_mm512_set1_pd(a[i*23+2]);
    xa3=_mm512_set1_pd(a[i*23+3]);
    xa4=_mm512_set1_pd(a[i*23+4]);
    xa5=_mm512_set1_pd(a[i*23+5]);
    xa6=_mm512_set1_pd(a[i*23+6]);
    xa7=_mm512_set1_pd(a[i*23+7]);
    xa8=_mm512_set1_pd(a[i*23+8]);
    xa9=_mm512_set1_pd(a[i*23+9]);
    xa10=_mm512_set1_pd(a[i*23+10]);
    xa11=_mm512_set1_pd(a[i*23+11]);
    xa12=_mm512_set1_pd(a[i*23+12]);
    xa13=_mm512_set1_pd(a[i*23+13]);
    xa14=_mm512_set1_pd(a[i*23+14]);
    xa15=_mm512_set1_pd(a[i*23+15]);
    xa16=_mm512_set1_pd(a[i*23+16]);
    xa17=_mm512_set1_pd(a[i*23+17]);
    xa18=_mm512_set1_pd(a[i*23+18]);
    xa19=_mm512_set1_pd(a[i*23+19]);
    xa20=_mm512_set1_pd(a[i*23+20]);
    xa21=_mm512_set1_pd(a[i*23+21]);
    xa22=_mm512_set1_pd(a[i*23+22]);
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
    xc0=_mm512_mask3_fmadd_pd(xa15,xb15,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa16,xb16,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa17,xb17,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa18,xb18,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa19,xb19,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa20,xb20,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa21,xb21,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa22,xb22,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*24+8],xc0,255);
}
 xb0 = _MM512_MASK_LOADU_PD(&b[0+16],255);
 xb1 = _MM512_MASK_LOADU_PD(&b[24+16],255);
 xb2 = _MM512_MASK_LOADU_PD(&b[48+16],255);
 xb3 = _MM512_MASK_LOADU_PD(&b[72+16],255);
 xb4 = _MM512_MASK_LOADU_PD(&b[96+16],255);
 xb5 = _MM512_MASK_LOADU_PD(&b[120+16],255);
 xb6 = _MM512_MASK_LOADU_PD(&b[144+16],255);
 xb7 = _MM512_MASK_LOADU_PD(&b[168+16],255);
 xb8 = _MM512_MASK_LOADU_PD(&b[192+16],255);
 xb9 = _MM512_MASK_LOADU_PD(&b[216+16],255);
 xb10 = _MM512_MASK_LOADU_PD(&b[240+16],255);
 xb11 = _MM512_MASK_LOADU_PD(&b[264+16],255);
 xb12 = _MM512_MASK_LOADU_PD(&b[288+16],255);
 xb13 = _MM512_MASK_LOADU_PD(&b[312+16],255);
 xb14 = _MM512_MASK_LOADU_PD(&b[336+16],255);
 xb15 = _MM512_MASK_LOADU_PD(&b[360+16],255);
 xb16 = _MM512_MASK_LOADU_PD(&b[384+16],255);
 xb17 = _MM512_MASK_LOADU_PD(&b[408+16],255);
 xb18 = _MM512_MASK_LOADU_PD(&b[432+16],255);
 xb19 = _MM512_MASK_LOADU_PD(&b[456+16],255);
 xb20 = _MM512_MASK_LOADU_PD(&b[480+16],255);
 xb21 = _MM512_MASK_LOADU_PD(&b[504+16],255);
 xb22 = _MM512_MASK_LOADU_PD(&b[528+16],255);
for(i=0;i<14;i+=1){
    xc0 = _MM512_MASK_LOADU_PD(&c[i*24+16],255);
    xa0=_mm512_set1_pd(a[i*23+0]);
    xa1=_mm512_set1_pd(a[i*23+1]);
    xa2=_mm512_set1_pd(a[i*23+2]);
    xa3=_mm512_set1_pd(a[i*23+3]);
    xa4=_mm512_set1_pd(a[i*23+4]);
    xa5=_mm512_set1_pd(a[i*23+5]);
    xa6=_mm512_set1_pd(a[i*23+6]);
    xa7=_mm512_set1_pd(a[i*23+7]);
    xa8=_mm512_set1_pd(a[i*23+8]);
    xa9=_mm512_set1_pd(a[i*23+9]);
    xa10=_mm512_set1_pd(a[i*23+10]);
    xa11=_mm512_set1_pd(a[i*23+11]);
    xa12=_mm512_set1_pd(a[i*23+12]);
    xa13=_mm512_set1_pd(a[i*23+13]);
    xa14=_mm512_set1_pd(a[i*23+14]);
    xa15=_mm512_set1_pd(a[i*23+15]);
    xa16=_mm512_set1_pd(a[i*23+16]);
    xa17=_mm512_set1_pd(a[i*23+17]);
    xa18=_mm512_set1_pd(a[i*23+18]);
    xa19=_mm512_set1_pd(a[i*23+19]);
    xa20=_mm512_set1_pd(a[i*23+20]);
    xa21=_mm512_set1_pd(a[i*23+21]);
    xa22=_mm512_set1_pd(a[i*23+22]);
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
    xc0=_mm512_mask3_fmadd_pd(xa15,xb15,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa16,xb16,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa17,xb17,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa18,xb18,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa19,xb19,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa20,xb20,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa21,xb21,xc0,255);
    xc0=_mm512_mask3_fmadd_pd(xa22,xb22,xc0,255);
    _MM512_MASK_STOREU_PD(&c[i*24+16],xc0,255);
}
#else
printf("cppgemm_2_14_23_24\n");
for(int m=0;m<14;m++){
   for(int n=0;n<24;n++){
      for(int k=0;k<23;k++){
         c[m*24+n]+=a[m*23+k]*b[k*24+n];
      }
   }
}
#endif
}
 
