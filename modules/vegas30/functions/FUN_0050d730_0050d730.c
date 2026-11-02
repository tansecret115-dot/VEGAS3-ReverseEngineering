/* Module: vegas30.exe
   Function: FUN_0050d730
   Address: 0050d730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0050d730(float *param_1,float *param_2,int param_3,int *param_4)

{
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (*(float *)(param_3 + 8) != _DAT_00610f20) {
    *param_1 = (*param_2 - (float)*param_4) / *(float *)(param_3 + 8) - *(float *)(param_3 + 0xc);
    param_1[1] = (param_2[1] - (float)param_4[1]) / *(float *)(param_3 + 8) -
                 *(float *)(param_3 + 0x10);
    if ((((DAT_00647e50 != 0) || ((*(uint *)(param_3 + 4) & 0x1000) == 0)) &&
        (_DAT_00610fd8 != *(double *)(param_3 + 0x80))) &&
       ((*(int *)(param_3 + 0x80) != 0 || (*(int *)(param_3 + 0x84) != 0x3ff00000)))) {
      *param_1 = *param_1 / (float)*(double *)(param_3 + 0x80);
    }
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    return 1;
  }
  *param_1 = (*param_2 - (float)*param_4) - *(float *)(param_3 + 0xc);
  param_1[1] = (param_2[1] - (float)param_4[1]) - *(float *)(param_3 + 0x10);
  return 0;
}


