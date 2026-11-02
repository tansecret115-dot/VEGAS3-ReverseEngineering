/* Module: sfppack3.dll
   Function: FUN_5cc52250
   Address: 5cc52250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc52250(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetClientRect(param_1,(LPRECT)(LVar1 + 0x78));
  return;
}


