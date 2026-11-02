/* Module: vidcap30.exe
   Function: FUN_00415fa0
   Address: 00415fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415fa0(HWND param_1)

{
  undefined4 uVar1;
  LONG LVar2;
  
  uVar1 = 0;
  if (param_1 != (HWND)0x0) {
    LVar2 = GetWindowLongA(param_1,8);
    uVar1 = *(undefined4 *)(LVar2 + 0x20);
    *(undefined4 *)(LVar2 + 0x20) = 0;
  }
  return uVar1;
}


