/* Module: vidpcore.dll
   Function: FUN_5de6d180
   Address: 5de6d180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de6d180(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (undefined2 *)0x0) {
    if (param_4 == 4) {
      if ((param_2 < 0x101) && (param_3 < 0x101)) {
        iVar1 = ftol();
        iVar2 = 0;
        iVar3 = param_2 << 0xe;
        do {
          *(char *)(iVar2 + (int)param_1) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + iVar1;
        } while (iVar2 < 0x100);
        return 1;
      }
    }
    else if ((param_2 < 0x10001) && (param_3 < 0x10001)) {
      iVar1 = ftol();
      iVar2 = 0x10000;
      iVar3 = param_2 << 0xe;
      do {
        *param_1 = (short)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar2 = iVar2 + -1;
        param_1 = param_1 + 1;
        iVar3 = iVar3 + iVar1;
      } while (iVar2 != 0);
      return 1;
    }
  }
  return 0;
}


