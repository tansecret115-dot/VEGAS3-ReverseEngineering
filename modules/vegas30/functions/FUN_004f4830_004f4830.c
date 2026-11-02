/* Module: vegas30.exe
   Function: FUN_004f4830
   Address: 004f4830
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004f4830(HWND param_1,ushort param_2,uint param_3,LPARAM param_4)

{
  HWND hWnd;
  LONG LVar1;
  LRESULT LVar2;
  
  hWnd = GetParent(param_1);
  LVar1 = GetWindowLongA(hWnd,8);
  if (param_2 == 0xf4) {
    param_3 = 0xb;
  }
  else if (param_2 == 0x87) {
    return 0x20;
  }
  LVar2 = CallWindowProcA(*(WNDPROC *)(LVar1 + 0x7c),param_1,(uint)param_2,param_3 & 0xffff,param_4)
  ;
  return LVar2;
}


