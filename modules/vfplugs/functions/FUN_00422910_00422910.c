/* Module: vfplugs.dll
   Function: FUN_00422910
   Address: 00422910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422910(int param_1)

{
  InvalidateRect(*(HWND *)(param_1 + 0x38),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(param_1 + 0x38));
  return;
}


