/* Module: mpegin.dll
   Function: FUN_10014d01
   Address: 10014d01
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10014d01(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10010ee5(2);
  iVar4 = 0;
  if (0 < DAT_1001d940) {
    do {
      iVar2 = *(int *)(DAT_1001c928 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10012e14(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1001c928 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10014c6e(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10014c6e(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10012e66(iVar4,*(int *)(DAT_1001c928 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1001d940);
  }
  FUN_10010f46(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


