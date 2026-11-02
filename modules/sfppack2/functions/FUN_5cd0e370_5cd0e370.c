/* Module: sfppack2.dll
   Function: FUN_5cd0e370
   Address: 5cd0e370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd0e370(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


