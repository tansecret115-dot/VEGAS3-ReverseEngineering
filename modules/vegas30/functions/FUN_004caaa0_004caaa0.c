/* Module: vegas30.exe
   Function: FUN_004caaa0
   Address: 004caaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004caaa0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1;
  if ((DAT_00647630 == param_1) && (0 < *(int *)(param_1 + 0xbc4))) {
    piVar1 = (int *)(param_1 + 0xbd4);
    iVar5 = 0x18;
    iVar4 = FUN_004caba0(param_1,piVar1);
    *(int *)(param_1 + 0xbd0) = iVar4;
    if ((0 < iVar4) && (piVar2 = (int *)(param_1 + 0xbb0), 0 < *piVar2)) {
      param_1 = *(int *)(param_1 + 0xbac);
      if (param_1 == 0) {
        param_1 = MulDiv(*piVar2,DAT_006477b0,0x200);
      }
      if (param_1 < 2) {
        param_1 = 1;
      }
      if (((float10)*(int *)(iVar3 + 0xbb0) / (float10)param_1) * (float10)*(int *)(iVar3 + 0xbd0) <
          (float10)*(int *)(iVar3 + 0xbb0)) {
        ftol();
        iVar5 = ftol();
      }
      iVar4 = *piVar1 * 2;
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      if (*(int *)(iVar3 + 0xbac) <= iVar5) {
        iVar5 = *(int *)(iVar3 + 0xbac);
      }
    }
    return *(int *)(iVar3 + 0xbd0) + iVar5;
  }
  return 0;
}


