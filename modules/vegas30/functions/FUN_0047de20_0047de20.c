/* Module: vegas30.exe
   Function: FUN_0047de20
   Address: 0047de20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047de20(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2;
  iVar6 = 0;
  if (*(int **)(param_2 + 0x18) == (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x50) = param_3;
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x18);
  param_2 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(iVar4 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar2;
      }
      if ((param_2 < 0) || (iVar5 + -1 < param_2)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar2[2] + param_2 * 4);
      }
      if ((iVar5 != 0) && ((param_6 < 0 || (param_6 == *(int *)(iVar5 + 0x10))))) {
        iVar3 = **(int **)(iVar5 + 0x30);
        if (iVar3 != 0) {
          iVar6 = (*(int **)(iVar5 + 0x30))[2];
          FUN_0047c810(param_1,*(undefined4 *)(iVar5 + 0x10));
          iVar6 = FUN_0047c730(param_1,param_3,*(undefined4 *)(iVar4 + 8),
                               *(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
                               *(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar5 + 0x20),
                               *(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x28),
                               *(undefined4 *)(iVar5 + 0x10),iVar3,iVar6);
          if (iVar6 < 0) break;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  if (param_4 != 0 || param_5 != 0) {
    FUN_0047c990(param_1,param_4,param_5,param_6);
  }
  return iVar6;
}


