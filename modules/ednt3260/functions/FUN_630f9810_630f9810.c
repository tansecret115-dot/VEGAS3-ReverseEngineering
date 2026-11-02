/* Module: ednt3260.dll
   Function: FUN_630f9810
   Address: 630f9810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_630f9810(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (_DAT_63102b78 <= (double)CONCAT44(param_2,param_1)) {
    if ((double)CONCAT44(param_2,param_1) == _DAT_63102b78) {
      return (float10)_DAT_63102b78;
    }
  }
  else {
    FUN_630f92d0();
  }
  sVar1 = FUN_630f95c0((double)CONCAT44(param_2,param_1),0x30);
  fVar4 = (float10)_DAT_63102b80;
  iVar2 = (int)sVar1 / 2;
  sVar1 = (short)iVar2;
  if (0 < sVar1) {
    iVar3 = (int)sVar1;
    do {
      iVar2 = iVar2 + -1;
      sVar1 = (short)iVar2;
      iVar3 = iVar3 + -1;
      fVar4 = fVar4 + fVar4;
    } while (iVar3 != 0);
  }
  if (sVar1 < 0) {
    iVar2 = -(int)sVar1;
    do {
      fVar4 = fVar4 * (float10)_DAT_63102b88;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (; (fVar5 = fVar4 * fVar4 * (float10)(double)CONCAT44(param_2,param_1),
         (float10)_DAT_63102bd0 < fVar5 || (fVar5 < (float10)_DAT_63102bd8));
      fVar4 = ((float10)_DAT_63102be0 - fVar5 * (float10)_DAT_63102b88) * fVar4) {
  }
  return fVar4 * (float10)(double)CONCAT44(param_2,param_1);
}


