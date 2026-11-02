/* Module: vegas30.exe
   Function: FUN_005b5890
   Address: 005b5890
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005b5890(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = -0x7ffb1ff9;
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x114) != 0)) {
      iVar1 = FUN_005b72a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x13c));
      if (-1 < iVar1) {
        *(undefined1 *)(param_1 + 0x1d0) = 0;
        return iVar1;
      }
    }
  }
  return iVar1;
}


