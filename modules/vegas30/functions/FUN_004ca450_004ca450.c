/* Module: vegas30.exe
   Function: FUN_004ca450
   Address: 004ca450
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca450(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10) >> 7 & 1;
  if (uVar1 != 0) {
    FUN_004c7de0(param_1,param_2,0);
  }
  *(undefined4 *)(param_2 + 0x40) = param_3;
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(*(int *)(param_2 + 0x69c) + 0x54) + 0x84),
                 0);
  if (uVar1 != 0) {
    FUN_004c7de0(param_1,param_2,1);
  }
  return;
}


