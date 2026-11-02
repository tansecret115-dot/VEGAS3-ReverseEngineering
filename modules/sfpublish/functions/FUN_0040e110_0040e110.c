/* Module: sfpublish.dll
   Function: FUN_0040e110
   Address: 0040e110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040e110(HWND param_1,LRESULT *param_2)

{
  LRESULT LVar1;
  
  if (param_2 == (LRESULT *)0x0) {
    return -0x7fffbffd;
  }
  LVar1 = SendMessageA(param_1,DAT_004413f4,0,0);
  *param_2 = LVar1;
  return (-(uint)(LVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


