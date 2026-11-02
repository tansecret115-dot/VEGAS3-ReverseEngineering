/* Module: vegas30.exe
   Function: FUN_005c7bd0
   Address: 005c7bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005c7bd0(int param_1,double param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float10 extraout_ST0;
  undefined8 uVar3;
  
  fVar2 = (float10)param_2;
  if (fVar2 <= (float10)_DAT_006129c8) {
    if (fVar2 < (float10)_DAT_006128c8) {
      fVar2 = (float10)_DAT_006128c8;
    }
  }
  else {
    fVar2 = (float10)_DAT_006129c8;
  }
  if ((param_3 != 0) && (iVar1 = *(int *)(param_1 + 0x50), iVar1 != 0)) {
    uVar3 = ftol();
    *(undefined8 *)(iVar1 + 8) = uVar3;
    fVar2 = extraout_ST0;
  }
  *(double *)(param_1 + 0x28) = (double)fVar2;
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  return 0;
}


