/* Module: sfppack2.dll
   Function: FUN_5cd38ca0
   Address: 5cd38ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cd38ca0(short param_1,short param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  short sVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = (float10)_DAT_5cd51520;
  sVar2 = 1;
  fVar4 = (float10)fcos((float10)*(double *)(param_3 + param_1 * 8) * (float10)_DAT_5cd525a0);
  fVar5 = (float10)_DAT_5cd51520;
  if (0 < param_2) {
    do {
      iVar1 = sVar2 * 8;
      fVar6 = (float10)(double)fVar4 - (float10)*(double *)(iVar1 + param_4);
      if (ABS(fVar6) < (float10)_DAT_5cd594e8) {
        return (float10)_DAT_5cd594e8;
      }
      fVar6 = (float10)*(double *)(iVar1 + param_6) / fVar6;
      sVar2 = sVar2 + 1;
      fVar5 = fVar6 + fVar5;
      fVar3 = fVar6 * (float10)*(double *)(iVar1 + param_5) + fVar3;
    } while (sVar2 <= param_2);
  }
  if ((float10)_DAT_5cd594e8 <= ABS(fVar5)) {
    return fVar3 / fVar5;
  }
  return (float10)_DAT_5cd594e8;
}


