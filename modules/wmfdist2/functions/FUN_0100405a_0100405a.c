/* Module: wmfdist2.exe
   Function: FUN_0100405a
   Address: 0100405a
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_0100405a(UINT param_1,LPSTR param_2,int param_3)

{
  if (param_2 != (LPSTR)0x0) {
    *param_2 = '\0';
    LoadStringA(DAT_0100b6dc,param_1,param_2,param_3);
  }
  return param_2;
}


