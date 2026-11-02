/* Module: 50comupd.exe
   Function: FUN_01002baa
   Address: 01002baa
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_01002baa(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  LRESULT LVar1;
  
  if (((param_2 == 0xb1) && (param_3 == 0)) && (param_4 == -2)) {
    LVar1 = 0;
  }
  else {
    LVar1 = CallWindowProcA(DAT_0100b708,param_1,param_2,param_3,param_4);
  }
  return LVar1;
}


