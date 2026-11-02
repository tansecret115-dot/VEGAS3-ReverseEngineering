/* Module: mp3plug.dll
   Function: FUN_5f6f4490
   Address: 5f6f4490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6f4490(uint param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_4 == 0) {
    iVar3 = 0;
    if (0 < (int)param_1) {
      if (0 < (int)(param_1 & 0xfffffffe)) {
        do {
          *(undefined4 *)(param_2 + iVar3 * 4) = *(undefined4 *)(param_3[iVar3] + 0x20);
          *(undefined4 *)(param_2 + 4 + iVar3 * 4) = *(undefined4 *)(param_3[iVar3 + 1] + 0x20);
          iVar3 = iVar3 + 2;
        } while (iVar3 < (int)(param_1 & 0xfffffffe));
      }
      for (; iVar3 < (int)param_1; iVar3 = iVar3 + 1) {
        *(undefined4 *)(param_2 + iVar3 * 4) = *(undefined4 *)(param_3[iVar3] + 0x20);
      }
    }
  }
  else {
    if (0 < (int)param_1) {
      for (piVar2 = param_3;
          (int)piVar2 <
          (int)(((int)(param_3 + param_1) - (int)param_3 & 0xfffffff8U) + (int)param_3);
          piVar2 = piVar2 + 2) {
        iVar3 = *(int *)(&DAT_5f741870 +
                        *(int *)(piVar2[1] + 0x20) * 4 +
                        *(int *)(&DAT_5f741870 + *(int *)(*piVar2 + 0x20) * 4 + iVar3 * 0x10) * 0x10
                        );
      }
      for (; (int)piVar2 < (int)(param_3 + param_1); piVar2 = piVar2 + 1) {
        iVar3 = *(int *)(&DAT_5f741870 + *(int *)(*piVar2 + 0x20) * 4 + iVar3 * 0x10);
      }
    }
    iVar4 = 0;
    if (0 < (int)param_1) {
      if (0 < (int)(param_1 & 0xfffffffe)) {
        iVar4 = 0;
        do {
          *(int *)(param_2 + iVar4 * 4) = iVar3;
          *(int *)(*(int *)(param_3[iVar4] + 0x18) + 0x20) = iVar3;
          *(int *)(param_2 + 4 + iVar4 * 4) = iVar3;
          iVar1 = iVar4 + 1;
          iVar4 = iVar4 + 2;
          *(int *)(*(int *)(param_3[iVar1] + 0x18) + 0x20) = iVar3;
        } while (iVar4 < (int)(param_1 & 0xfffffffe));
      }
      for (; iVar4 < (int)param_1; iVar4 = iVar4 + 1) {
        *(int *)(param_2 + iVar4 * 4) = iVar3;
        *(int *)(*(int *)(param_3[iVar4] + 0x18) + 0x20) = iVar3;
      }
    }
  }
  return 1;
}


