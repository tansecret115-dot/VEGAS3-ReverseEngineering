/* Module: sftrans1.dll
   Function: FUN_00527460
   Address: 00527460
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00527460(HWND param_1)

{
  LONG LVar1;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = GetWindowLongA(param_1,0);
    return LVar1;
  }
  return 0;
}


