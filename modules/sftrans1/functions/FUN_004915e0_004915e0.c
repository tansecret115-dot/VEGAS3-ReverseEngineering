/* Module: sftrans1.dll
   Function: FUN_004915e0
   Address: 004915e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004915e0(HWND param_1,int *param_2)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(param_1,0x147,0,0);
  if (*param_2 != LVar1) {
    *param_2 = LVar1;
    return 1;
  }
  return 0;
}


