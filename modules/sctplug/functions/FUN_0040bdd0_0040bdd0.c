/* Module: sctplug.dll
   Function: FUN_0040bdd0
   Address: 0040bdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040bdd0(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_0043cab8;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_0043cbbc;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


