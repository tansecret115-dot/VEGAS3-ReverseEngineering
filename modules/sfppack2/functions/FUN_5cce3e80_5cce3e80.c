/* Module: sfppack2.dll
   Function: FUN_5cce3e80
   Address: 5cce3e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cce3e80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST1;
  
  fVar2 = (float10)param_2 + (float10)param_2;
  fVar3 = (float10)-param_2;
  if (0 < param_2) {
    do {
      fcos((fVar3 * (float10)_DAT_5cd525a0) / fVar2);
      fVar2 = fVar3;
      uVar1 = ftol();
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      fVar3 = extraout_ST1 + (float10)_DAT_5cd51510;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


