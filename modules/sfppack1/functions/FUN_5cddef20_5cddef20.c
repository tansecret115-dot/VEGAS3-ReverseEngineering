/* Module: sfppack1.dll
   Function: FUN_5cddef20
   Address: 5cddef20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cddef20(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,4);
  return *(undefined4 *)(LVar1 + 8);
}


