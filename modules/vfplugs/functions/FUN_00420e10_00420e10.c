/* Module: vfplugs.dll
   Function: FUN_00420e10
   Address: 00420e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420e10(HWND param_1,int param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(uint *)(LVar1 + 4) = ((uint)(param_2 == 0) ^ *(uint *)(LVar1 + 4)) & 1 ^ *(uint *)(LVar1 + 4);
  FUN_0041da20(*(HWND *)(LVar1 + 8));
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


