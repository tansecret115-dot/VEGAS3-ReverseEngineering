/* Module: vegas30.exe
   Function: FUN_00588430
   Address: 00588430
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall FUN_00588430(int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  
  LVar1 = -1;
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 8),0x419,param_2,0);
  }
  return LVar1;
}


