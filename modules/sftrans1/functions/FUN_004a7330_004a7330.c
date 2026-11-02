/* Module: sftrans1.dll
   Function: FUN_004a7330
   Address: 004a7330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a7330(float *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (0 < param_2) {
    do {
      if (*param_1 < fVar1) {
        fVar1 = *param_1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


