/* Module: vidcap30.exe
   Function: FUN_0056ebe0
   Address: 0056ebe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0056ebe0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0x8004e12d;
  }
  if ((param_2 == (int *)0x0) || (*(int *)(param_3 + 4) != 0)) {
    return 0x8004e12c;
  }
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    *param_2 = 0;
  }
  else {
    if (iVar1 == 2) {
      return 0x8004e131;
    }
    if (iVar1 != 7) {
      *param_2 = 0;
      return 0x8004e12c;
    }
    iVar1 = FUN_00577170();
    *param_2 = iVar1;
    if (*(int *)(param_3 + 0x20) != 0) {
      *param_2 = 0;
      return 0x4e135;
    }
    if (iVar1 == 0x5a) {
      *param_2 = *(int *)(param_1 + 0x38) * 7;
      return 0;
    }
    if (iVar1 < 0) {
      *param_2 = 7;
      return 0;
    }
    if (0x3c < iVar1) {
      *param_2 = 0x3c;
      return 0;
    }
  }
  return 0;
}


