/* Module: vegas30.exe
   Function: FUN_004528a0
   Address: 004528a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004528a0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,8);
  *(undefined4 *)(LVar1 + 0xc) = 0;
  return;
}


