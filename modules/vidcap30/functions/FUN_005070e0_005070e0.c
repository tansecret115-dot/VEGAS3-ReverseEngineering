/* Module: vidcap30.exe
   Function: FUN_005070e0
   Address: 005070e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005070e0(HWND param_1,int param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(uint *)(LVar1 + 4) = ((uint)(param_2 == 0) ^ *(uint *)(LVar1 + 4)) & 1 ^ *(uint *)(LVar1 + 4);
  FUN_00503cf0(*(undefined4 *)(LVar1 + 8));
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


