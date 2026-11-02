/* Module: vegas30.exe
   Function: FUN_005b5820
   Address: 005b5820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b5820(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_4;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = -0x7ffb1ff9;
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x114) != 0)) {
      local_4 = 0;
      iVar1 = FUN_005b7180(param_2,1,&local_4);
      if (-1 < iVar1) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_4;
        return iVar1;
      }
    }
  }
  return iVar1;
}


