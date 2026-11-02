/* Module: sftrans1.dll
   Function: FUN_00547270
   Address: 00547270
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall FUN_00547270(int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  
  LVar1 = -1;
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 8),0x419,param_2,0);
  }
  return LVar1;
}


