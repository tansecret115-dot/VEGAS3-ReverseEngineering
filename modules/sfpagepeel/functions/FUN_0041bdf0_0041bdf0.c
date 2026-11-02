/* Module: sfpagepeel.dll
   Function: FUN_0041bdf0
   Address: 0041bdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bdf0(HWND param_1,int param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(uint *)(LVar1 + 4) = ((uint)(param_2 == 0) ^ *(uint *)(LVar1 + 4)) & 1 ^ *(uint *)(LVar1 + 4);
  FUN_00418a00(*(HWND *)(LVar1 + 8));
  if (*(HWND *)(LVar1 + 0x2dc) != (HWND)0x0) {
    EnableWindow(*(HWND *)(LVar1 + 0x2dc),param_2);
  }
  if (*(HWND *)(LVar1 + 0x2e0) != (HWND)0x0) {
    EnableWindow(*(HWND *)(LVar1 + 0x2e0),param_2);
  }
  if (*(HWND *)(LVar1 + 0x2e4) != (HWND)0x0) {
    EnableWindow(*(HWND *)(LVar1 + 0x2e4),param_2);
  }
  if (*(HWND *)(LVar1 + 0x2e8) != (HWND)0x0) {
    EnableWindow(*(HWND *)(LVar1 + 0x2e8),param_2);
  }
  return;
}


