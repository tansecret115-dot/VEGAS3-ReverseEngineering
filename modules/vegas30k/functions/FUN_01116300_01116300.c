/* Module: vegas30k.dll
   Function: FUN_01116300
   Address: 01116300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01116300(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


