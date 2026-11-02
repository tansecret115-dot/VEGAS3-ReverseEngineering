/* Module: sfnetmedia.dll
   Function: FUN_00412c60
   Address: 00412c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412c60(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_00441adc;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_00441be0;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


