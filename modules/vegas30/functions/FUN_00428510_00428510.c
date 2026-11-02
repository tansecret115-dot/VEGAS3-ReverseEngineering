/* Module: vegas30.exe
   Function: FUN_00428510
   Address: 00428510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428510(int param_1)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xb8),0);
  FUN_00423300(LVar1);
  return;
}


