/* Module: sftrans1.dll
   Function: FUN_004bcf80
   Address: 004bcf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bcf80(HWND param_1,int param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(uint *)(LVar1 + 4) = ((uint)(param_2 == 0) ^ *(uint *)(LVar1 + 4)) & 1 ^ *(uint *)(LVar1 + 4);
  FUN_004b9b90(*(undefined4 *)(LVar1 + 8));
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


