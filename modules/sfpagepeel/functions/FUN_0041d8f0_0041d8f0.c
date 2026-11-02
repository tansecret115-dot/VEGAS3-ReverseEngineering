/* Module: sfpagepeel.dll
   Function: FUN_0041d8f0
   Address: 0041d8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d8f0(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


