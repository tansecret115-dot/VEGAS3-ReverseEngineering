/* Module: vegas30.exe
   Function: FUN_0052b710
   Address: 0052b710
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0052b710(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 0x10) == 0)) {
    iVar2 = FUN_0047c7d0(param_2 + 0x638,param_3);
    return iVar2 != 0;
  }
  piVar3 = (int *)FUN_005b87b0(param_1);
  if ((piVar3 == (int *)0x0) || (iVar2 = *piVar3, iVar2 < 1)) {
    return false;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(piVar3[2] + iVar5 * 4);
      if (((*(byte *)(iVar1 + 0x10) & 0x10) != 0) &&
         (iVar4 = FUN_0047c7d0(iVar1 + 0x638,param_3), iVar4 == 0)) {
        if (((param_3 == 0) || ((1 < param_3 && (param_3 < 0x1d)))) ||
           ((0x3f < param_3 && (param_3 < 0x60)))) {
          iVar1 = *(int *)(iVar1 + 4);
        }
        else {
          if (param_3 != 1) {
            if (param_3 == 0x1d) {
              iVar1 = *(int *)(iVar1 + 4);
            }
            else {
              if (param_3 != 0x1e) goto LAB_0052b7d0;
              iVar1 = *(int *)(iVar1 + 4);
            }
            if (iVar1 == 3) {
              return false;
            }
            goto LAB_0052b7d0;
          }
          iVar1 = *(int *)(iVar1 + 4);
        }
        if (iVar1 == 2) {
          return false;
        }
      }
LAB_0052b7d0:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return true;
}


