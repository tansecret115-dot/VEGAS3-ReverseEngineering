/* Module: vidcap30.exe
   Function: FUN_00513200
   Address: 00513200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00513200(HWND param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  GetClientRect(param_1,(LPRECT)(LVar1 + 0x78));
  return;
}


