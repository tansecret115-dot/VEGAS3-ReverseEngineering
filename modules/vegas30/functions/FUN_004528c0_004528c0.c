/* Module: vegas30.exe
   Function: FUN_004528c0
   Address: 004528c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004528c0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  return *(undefined4 *)(LVar1 + 0xc);
}


