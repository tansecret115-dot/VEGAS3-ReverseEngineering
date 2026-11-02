/* Module: vegas30k.dll
   Function: FUN_01112170
   Address: 01112170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01112170(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


