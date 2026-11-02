/* Module: vegas30k.dll
   Function: FUN_010a5a60
   Address: 010a5a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a5a60(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(undefined4 *)(LVar1 + 4) = param_2;
  return;
}


