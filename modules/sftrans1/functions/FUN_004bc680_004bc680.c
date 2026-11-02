/* Module: sftrans1.dll
   Function: FUN_004bc680
   Address: 004bc680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bc680(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_004bb5a0(LVar1);
    FUN_004bb810(LVar1);
    FUN_004bbae0(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


