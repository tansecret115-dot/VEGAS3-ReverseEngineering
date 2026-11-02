/* Module: sftrkfx1.dll
   Function: FUN_5cbd95d0
   Address: 5cbd95d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbd95d0(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5cc1185c;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5cc11960;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


