/* Module: qt4plug.dll
   Function: FUN_5f526760
   Address: 5f526760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f526760(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5f5a3ee0;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5f5a3fe4;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


