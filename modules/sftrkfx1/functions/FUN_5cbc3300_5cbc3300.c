/* Module: sftrkfx1.dll
   Function: FUN_5cbc3300
   Address: 5cbc3300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbc3300(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


