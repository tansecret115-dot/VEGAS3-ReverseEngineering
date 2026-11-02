/* Module: vegas30.exe
   Function: FUN_0047e230
   Address: 0047e230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047e230(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar4 = 0;
  if (*(int **)(param_2 + 0x18) == (int *)0x0) {
    return iVar4;
  }
  iVar1 = **(int **)(param_2 + 0x18);
  local_8 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_2 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((local_8 < 0) || (iVar6 + -1 < local_8)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + local_8 * 4);
      }
      if ((iVar6 != 0) && ((param_8 < 0 || (param_8 == *(int *)(iVar6 + 0x10))))) {
        iVar3 = **(int **)(iVar6 + 0x30);
        if (iVar3 != 0) {
          iVar4 = (*(int **)(iVar6 + 0x30))[2];
          iVar5 = FUN_0047c7d0(param_1,*(undefined4 *)(iVar6 + 0x10));
          if (iVar5 == 0) {
            iVar5 = param_3;
            if (param_3 == 0) {
              iVar5 = *(int *)(param_1 + 0x50);
            }
            iVar5 = FUN_0047c730(param_1,iVar5,0,0,0xffffffff,0x7fffffff,
                                 *(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x24),
                                 *(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x10),1,0);
            if (iVar5 < 0) {
              return iVar5;
            }
            iVar5 = FUN_0047c7d0(param_1,*(undefined4 *)(iVar6 + 0x10));
          }
          iVar4 = FUN_0047cd80(iVar5,param_4,param_5,iVar4,iVar3);
          if (iVar4 < 0) {
            return iVar4;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return iVar4;
}


