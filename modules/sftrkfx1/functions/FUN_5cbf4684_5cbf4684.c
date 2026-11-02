/* Module: sftrkfx1.dll
   Function: FUN_5cbf4684
   Address: 5cbf4684
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_5cbf4684(HWND param_1,UINT param_2,WPARAM param_3,int param_4)

{
  LRESULT LVar1;
  
  if (((DAT_5cc16c9c == 2) && (param_2 == 0x7c)) && (param_3 == 0xffffffec)) {
    *(byte *)(param_4 + 6) = *(byte *)(param_4 + 6) | 1;
    LVar1 = 0;
  }
  else {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return LVar1;
}


