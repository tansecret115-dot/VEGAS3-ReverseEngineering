/* Module: vidpcore.dll
   Function: FUN_5dead920
   Address: 5dead920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead920(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


