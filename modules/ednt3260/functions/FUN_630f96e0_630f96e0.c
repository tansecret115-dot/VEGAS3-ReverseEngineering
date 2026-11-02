/* Module: ednt3260.dll
   Function: FUN_630f96e0
   Address: 630f96e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_630f96e0(undefined4 param_1,undefined4 param_2,short param_3)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  sVar1 = FUN_630f95c0((double)CONCAT44(param_2,param_1),param_3);
  if (sVar1 == param_3) {
    return (float10)_DAT_63102ba8;
  }
  iVar2 = (int)sVar1;
  fVar3 = (float10)iVar2;
  fVar4 = (float10)(double)CONCAT44(param_2,param_1);
  if (0 < sVar1) {
    do {
      sVar1 = sVar1 + -1;
      iVar2 = iVar2 + -1;
      fVar4 = fVar4 + fVar4;
    } while (iVar2 != 0);
  }
  if (sVar1 < 0) {
    iVar2 = -(int)sVar1;
    do {
      fVar4 = fVar4 * (float10)_DAT_63102b88;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (((fVar4 * fVar4 * (float10)_DAT_63102bb0 - fVar4 * (float10)_DAT_63102bb8) -
          (float10)_DAT_63102bc0) * (float10)_DAT_63102bc8) / (float10)(int)param_3 +
         fVar3 / (float10)(int)param_3;
}


