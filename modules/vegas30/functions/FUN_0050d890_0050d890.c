/* Module: vegas30.exe
   Function: FUN_0050d890
   Address: 0050d890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d890(float *param_1,float *param_2,float *param_3,int param_4,int *param_5)

{
  float fVar1;
  
  if (((DAT_00647e50 == 0) && ((*(uint *)(param_4 + 4) & 0x1000) != 0)) ||
     ((*(int *)(param_4 + 0x80) == 0 && (*(int *)(param_4 + 0x84) == 0x3ff00000)))) {
    fVar1 = (*(float *)(param_4 + 0xc) + *param_3) * *(float *)(param_4 + 8) + (float)*param_5;
  }
  else {
    fVar1 = (*param_3 * (float)*(double *)(param_4 + 0x80) + *(float *)(param_4 + 0xc)) *
            *(float *)(param_4 + 8) + (float)*param_5;
  }
  *param_1 = fVar1;
  *param_2 = (*(float *)(param_4 + 0x10) + param_3[1]) * *(float *)(param_4 + 8) + (float)param_5[1]
  ;
  return 1;
}


