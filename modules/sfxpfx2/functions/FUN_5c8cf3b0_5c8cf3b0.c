/* Module: sfxpfx2.dll
   Function: FUN_5c8cf3b0
   Address: 5c8cf3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8cf3b0(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0x8004e12d;
  }
  if ((param_1 == (int *)0x0) || (*(int *)(param_2 + 4) != 0)) {
    return 0x8004e12c;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    *param_1 = 0;
  }
  else {
    if (iVar1 == 2) {
      return 0x8004e131;
    }
    if (iVar1 != 7) {
      *param_1 = 0;
      return 0x8004e12c;
    }
    iVar1 = FUN_5c8d73b0(param_2);
    *param_1 = iVar1;
    if (*(int *)(param_2 + 0x20) != 0) {
      *param_1 = 0;
      return 0x4e135;
    }
    if (iVar1 == 0x5a) {
      *param_1 = *(int *)((int)this + 0x38) * 7;
      return 0;
    }
    if (iVar1 < 0) {
      *param_1 = 7;
      return 0;
    }
    if (0x3c < iVar1) {
      *param_1 = 0x3c;
      return 0;
    }
  }
  return 0;
}


