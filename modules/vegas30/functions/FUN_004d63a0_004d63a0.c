/* Module: vegas30.exe
   Function: FUN_004d63a0
   Address: 004d63a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d63a0(int param_1,undefined4 param_2)

{
  HWND pHVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    pHVar1 = GetCapture();
    if (pHVar1 == *(HWND *)(param_1 + 0x24)) {
      uVar2 = *(uint *)(param_1 + 0x80) >> 0x10;
      if (uVar2 < 4) {
        (**(code **)(**(int **)(param_1 + 0x34 + uVar2 * 4) + 0x1c))(param_1,param_2);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x1c))(param_1,param_2);
    }
  }
  return;
}


