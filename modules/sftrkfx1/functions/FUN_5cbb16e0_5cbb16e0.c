/* Module: sftrkfx1.dll
   Function: FUN_5cbb16e0
   Address: 5cbb16e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cbb16e0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (param_1 < 1) {
    return 0;
  }
  fVar1 = (float10)log2((float10)param_1 * (float10)_DAT_5cc04258);
  fVar2 = (float10)log2((float10)_DAT_5cc04658);
  if ((((float10)0.6931471805599453 * fVar1) / ((float10)0.6931471805599453 * fVar2)) *
      (float10)_DAT_5cc04658 < (float10)_DAT_5cc04098) {
    uVar3 = ftol();
    return uVar3;
  }
  uVar3 = ftol();
  return uVar3;
}


