/* Module: aviplug.dll
   Function: FUN_5f977960
   Address: 5f977960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f977960(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5f9f56fc;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5f9f5800;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


