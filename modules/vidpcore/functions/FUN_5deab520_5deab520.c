/* Module: vidpcore.dll
   Function: FUN_5deab520
   Address: 5deab520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deab520(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_5deaa440(LVar1);
    FUN_5deaa6b0(LVar1);
    FUN_5deaa980(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


