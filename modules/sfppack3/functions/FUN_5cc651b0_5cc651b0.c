/* Module: sfppack3.dll
   Function: FUN_5cc651b0
   Address: 5cc651b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc651b0(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5cc9865c;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5cc98760;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


