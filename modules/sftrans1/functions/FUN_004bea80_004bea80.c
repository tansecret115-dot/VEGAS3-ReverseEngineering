/* Module: sftrans1.dll
   Function: FUN_004bea80
   Address: 004bea80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bea80(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


