/* Module: vegas30k.dll
   Function: FUN_01072530
   Address: 01072530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01072530(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  return *(undefined4 *)(LVar1 + 4);
}


