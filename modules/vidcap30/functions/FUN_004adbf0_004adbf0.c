/* Module: vidcap30.exe
   Function: FUN_004adbf0
   Address: 004adbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004adbf0(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


