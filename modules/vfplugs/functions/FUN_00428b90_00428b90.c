/* Module: vfplugs.dll
   Function: FUN_00428b90
   Address: 00428b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428b90(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_00494d40;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_00494e44;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


