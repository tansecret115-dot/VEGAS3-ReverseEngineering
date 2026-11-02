/* Module: sfppack2.dll
   Function: FUN_5cd38c20
   Address: 5cd38c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cd38c20(short param_1,short param_2,short param_3,int param_4)

{
  short sVar1;
  short sVar2;
  float10 fVar3;
  
  sVar1 = 1;
  fVar3 = (float10)_DAT_5cd51510;
  sVar2 = sVar1;
  if (0 < param_3) {
    do {
      for (; sVar1 <= param_2; sVar1 = sVar1 + param_3) {
        if (sVar1 != param_1) {
          fVar3 = ((float10)*(double *)(param_4 + param_1 * 8) -
                  (float10)*(double *)(param_4 + sVar1 * 8)) * fVar3;
          fVar3 = fVar3 + fVar3;
        }
      }
      sVar1 = sVar2 + 1;
      sVar2 = sVar1;
    } while (sVar1 <= param_3);
  }
  if (ABS(fVar3) < (float10)_DAT_5cd594e8) {
    return (float10)_DAT_5cd594e8;
  }
  return (float10)_DAT_5cd51510 / fVar3;
}


