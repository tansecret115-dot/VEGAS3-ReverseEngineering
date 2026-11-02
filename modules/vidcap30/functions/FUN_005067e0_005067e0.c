/* Module: vidcap30.exe
   Function: FUN_005067e0
   Address: 005067e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005067e0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 != 0) {
    FUN_00505700(LVar1);
    FUN_00505970(LVar1);
    FUN_00505c40(LVar1);
    if (*(HWND *)(LVar1 + 0x10) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(LVar1 + 0x10));
      *(undefined4 *)(LVar1 + 0x10) = 0;
    }
  }
  return;
}


