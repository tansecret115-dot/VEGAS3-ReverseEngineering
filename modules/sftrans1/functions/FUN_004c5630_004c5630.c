/* Module: sftrans1.dll
   Function: FUN_004c5630
   Address: 004c5630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c5630(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_0057bb34;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_0057bc38;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


