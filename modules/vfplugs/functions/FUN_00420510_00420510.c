/* Module: vfplugs.dll
   Function: FUN_00420510
   Address: 00420510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420510(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_0041f430(LVar1);
    FUN_0041f6a0(LVar1);
    FUN_0041f970(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


