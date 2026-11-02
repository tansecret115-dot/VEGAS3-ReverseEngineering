/* Module: sfxpfx2.dll
   Function: FUN_5c8baaa0
   Address: 5c8baaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8baaa0(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5c8e9754;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5c8e9858;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


