/* Module: vegas30.exe
   Function: FUN_0047dc30
   Address: 0047dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047dc30(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    if (param_6 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_6;
    }
    if (((-1 < iVar6 + -1) && (iVar1 = param_6[2], iVar1 != 0)) && (iVar6 != 0)) {
      iVar2 = **(int **)(param_1 + 0x18);
      param_6 = (int *)0x0;
      if (0 < iVar2) {
        do {
          piVar3 = *(int **)(param_1 + 0x18);
          if (piVar3 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar3;
          }
          if (((int)param_6 < 0) || (iVar5 + -1 < (int)param_6)) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(piVar3[2] + (int)param_6 * 4);
          }
          if (((iVar5 != 0) && ((param_7 < 0 || (param_7 == *(int *)(iVar5 + 0x10))))) &&
             (iVar4 = FUN_0047db60(iVar5,iVar1,iVar6), iVar4 != 0)) {
            iVar4 = FUN_0047c7d0(param_2,*(undefined4 *)(iVar5 + 0x10));
            if (iVar4 == 0) {
              iVar4 = param_3;
              if (param_3 == 0) {
                iVar4 = *(int *)(param_2 + 0x50);
              }
              local_8 = FUN_0047c730(param_2,iVar4,0,0,0xffffffff,0x7fffffff,
                                     *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),
                                     *(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x10),1,0
                                    );
              if (local_8 < 0) {
                return local_8;
              }
              iVar4 = FUN_0047c7d0(param_2,*(undefined4 *)(iVar5 + 0x10));
            }
            if (DAT_00647790 == 0) {
              FUN_0047cf70(iVar5,param_4,param_5,iVar1,iVar6);
            }
            else {
              FUN_0047d3e0(iVar5,iVar4,param_4,param_5,iVar1,iVar6);
            }
          }
          param_6 = (int *)((int)param_6 + 1);
        } while ((int)param_6 < iVar2);
      }
      return local_8;
    }
  }
  return 0;
}


