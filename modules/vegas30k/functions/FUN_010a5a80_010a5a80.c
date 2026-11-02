/* Module: vegas30k.dll
   Function: FUN_010a5a80
   Address: 010a5a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a5a80(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetClientRect(param_1,(LPRECT)(LVar1 + 0x78));
  return;
}


