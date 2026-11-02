/* Module: extmondrv.dll
   Function: FUN_00414110
   Address: 00414110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414110(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_0045b43c;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_0045b540;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


