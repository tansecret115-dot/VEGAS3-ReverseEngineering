/* Module: sfppack3.dll
   Function: FUN_5cc548b0
   Address: 5cc548b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc548b0(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


