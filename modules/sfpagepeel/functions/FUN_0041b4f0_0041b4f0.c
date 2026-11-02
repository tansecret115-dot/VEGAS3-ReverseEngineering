/* Module: sfpagepeel.dll
   Function: FUN_0041b4f0
   Address: 0041b4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041b4f0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_0041a410(LVar1);
    FUN_0041a680(LVar1);
    FUN_0041a950(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


