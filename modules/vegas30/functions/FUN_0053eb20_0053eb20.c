/* Module: vegas30.exe
   Function: FUN_0053eb20
   Address: 0053eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053eb20(int param_1)

{
  if ((*(int *)(param_1 + 0x50) != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(param_1 + 0x50) + 8),0);
  }
  return;
}


