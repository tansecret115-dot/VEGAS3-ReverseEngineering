/* Module: vidcap30.exe
   Function: FUN_00415fd0
   Address: 00415fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415fd0(HWND param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  
  uVar1 = 0;
  if (param_1 != (HWND)0x0) {
    LVar2 = GetWindowLongA(param_1,8);
    uVar1 = *(undefined4 *)(LVar2 + 0x1c);
    *(undefined4 *)(LVar2 + 0x1c) = 0;
  }
  return uVar1;
}


