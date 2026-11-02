/* Module: sfppack2.dll
   Function: FUN_5cd0bd10
   Address: 5cd0bd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0bd10(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetClientRect(param_1,(LPRECT)(LVar1 + 0x78));
  return;
}


