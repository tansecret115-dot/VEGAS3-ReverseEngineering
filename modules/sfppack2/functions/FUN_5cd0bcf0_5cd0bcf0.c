/* Module: sfppack2.dll
   Function: FUN_5cd0bcf0
   Address: 5cd0bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0bcf0(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  *(undefined4 *)(LVar1 + 4) = param_2;
  return;
}


