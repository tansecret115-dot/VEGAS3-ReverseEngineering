/* Module: vegas30.exe
   Function: FUN_005586d0
   Address: 005586d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005586d0(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  fVar4 = (float10)*(longlong *)(param_1 + 0x150) / (float10)*(longlong *)(param_1 + 0x148);
  *(double *)(param_1 + 0x138) = (double)fVar4;
  fVar4 = (float10)log2(fVar4);
  fVar1 = (float10)log2((float10)_DAT_006128e0);
  *(double *)(param_1 + 0x130) =
       (double)((((float10)0.6931471805599453 * fVar4) / ((float10)0.6931471805599453 * fVar1)) *
               (float10)_DAT_006129b0);
  iVar2 = ftol();
  *(int *)(param_1 + 8) = iVar2 / 100;
  if ((extraout_ST0 - (float10)(iVar2 / 100)) * (float10)_DAT_00610808 < (float10)_DAT_00610fd8) {
    uVar3 = ftol();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    return;
  }
  uVar3 = ftol();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}


