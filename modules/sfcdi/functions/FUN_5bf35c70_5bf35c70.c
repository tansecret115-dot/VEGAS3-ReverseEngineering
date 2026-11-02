/* Module: sfcdi.dll
   Function: FUN_5bf35c70
   Address: 5bf35c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf35c70(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5bf76390;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5bf76494;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


