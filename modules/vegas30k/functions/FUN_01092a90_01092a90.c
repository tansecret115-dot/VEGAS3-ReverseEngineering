/* Module: vegas30k.dll
   Function: FUN_01092a90
   Address: 01092a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01092a90(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_010919b0(LVar1);
    FUN_01091c20(LVar1);
    FUN_01091ef0(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


