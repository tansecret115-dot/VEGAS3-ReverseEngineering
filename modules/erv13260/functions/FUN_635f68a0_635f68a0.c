/* Module: erv13260.dll
   Function: FUN_635f68a0
   Address: 635f68a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f68a0(float *param_1,int param_2,FILE *param_3)

{
  float fVar1;
  
  fVar1 = (float)param_2;
  fprintf(param_3,s_SNR_Y_____2f_636063e0,(double)(*param_1 / fVar1));
  fprintf(param_3,s_SNR_Cb_____2f_636063d0,(double)(param_1[2] / fVar1));
  fprintf(param_3,s_SNR_Cr_____2f_636063c0,(double)(param_1[1] / fVar1));
  fprintf(param_3,s________________63606274);
  return;
}


