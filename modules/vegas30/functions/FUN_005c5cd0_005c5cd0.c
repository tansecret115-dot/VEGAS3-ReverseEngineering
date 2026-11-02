/* Module: vegas30.exe
   Function: FUN_005c5cd0
   Address: 005c5cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 __thiscall FUN_005c5cd0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = 0x10;
  bVar6 = true;
  piVar4 = param_1 + 2;
  piVar5 = param_2 + 2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    return 0;
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)*param_2;
    if (piVar5 != (int *)0x0) {
      if (piVar4[4] == 3) {
        iVar1 = 0xc;
      }
      else {
        iVar1 = piVar4[8] << 2;
      }
      if (piVar5[4] == 3) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = piVar5[8] << 2;
      }
      iVar3 = *piVar4;
      if (iVar1 + iVar3 == iVar2 + *piVar5) {
        if (piVar4[4] != 3) {
          iVar3 = iVar3 + piVar4[8] * 4;
          do {
            if (iVar3 == 0) {
              return 1;
            }
            iVar3 = iVar3 + -1;
            iVar1 = *piVar5;
            iVar2 = *piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
            piVar5 = (int *)((int)piVar5 + 1);
          } while ((char)iVar2 == (char)iVar1);
          return 0;
        }
        iVar3 = iVar3 + 0xc;
        do {
          if (iVar3 == 0) {
            return 1;
          }
          iVar3 = iVar3 + -1;
          iVar1 = *piVar5;
          iVar2 = *piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((char)iVar2 == (char)iVar1);
        return 0;
      }
    }
    if (piVar4 != (int *)0x0) {
      return 0;
    }
  }
  if (*param_2 != 0) {
    return 0;
  }
  return 1;
}


