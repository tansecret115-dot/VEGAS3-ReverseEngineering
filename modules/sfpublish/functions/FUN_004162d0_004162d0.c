/* Module: sfpublish.dll
   Function: FUN_004162d0
   Address: 004162d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004162d0(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_004419f4;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_00441af8;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


