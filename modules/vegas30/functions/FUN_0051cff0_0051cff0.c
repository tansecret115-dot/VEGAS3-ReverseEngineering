/* Module: vegas30.exe
   Function: FUN_0051cff0
   Address: 0051cff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051cff0(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && ((*(byte *)(*(int *)(param_1 + 0x98) + 4) & 1) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x9c) = param_2;
    FUN_0051ddc0(param_1,0);
    FUN_0051cef0(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe88) = param_2;
    InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x90) + 4),(RECT *)0x0,0);
  }
  return;
}


