/* Module: vegas30.exe
   Function: FUN_00417e10
   Address: 00417e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417e10(int param_1)

{
  FUN_0043c0e0(*(undefined4 *)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  DestroyWindow(*(HWND *)(param_1 + 0x254));
  *(undefined4 *)(param_1 + 0x254) = 0;
  return;
}


