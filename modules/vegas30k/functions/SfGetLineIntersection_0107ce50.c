/* Module: vegas30k.dll
   Function: SfGetLineIntersection
   Address: 0107ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __stdcall SfGetLineIntersection(float * const,float * const,float * const,float * const,float
   * const) */

int SfGetLineIntersection
              (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  
                    /* 0x7ce50  399  ?SfGetLineIntersection@@YGHQAM0000@Z */
  fVar1 = -(param_4[1] - param_5[1]) * (*param_3 - *param_2) +
          --(*param_4 - *param_5) * (param_3[1] - param_2[1]);
  if (fVar1 == (float)_DAT_011db3f0) {
    return 0;
  }
  fVar1 = ((*param_2 - *param_4) * (param_4[1] - param_5[1]) +
          (param_2[1] - param_4[1]) * -(*param_4 - *param_5)) / fVar1;
  *param_1 = (*param_3 - *param_2) * fVar1 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * fVar1 + param_2[1];
  return 1;
}


