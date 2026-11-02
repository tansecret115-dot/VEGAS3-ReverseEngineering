/* Module: mpgmux.dll
   Function: FUN_1000ec0d
   Address: 1000ec0d
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000ec0d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000e78d(2);
  iVar4 = 0;
  if (0 < DAT_1001c660) {
    do {
      iVar2 = *(int *)(DAT_1001b644 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000eada(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1001b644 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000eb7a(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000eb7a(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1000eb2c(iVar4,*(int *)(DAT_1001b644 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1001c660);
  }
  FUN_1000e7ee(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}


