/* Module: aifplug.dll
   Function: FUN_5fbd8820
   Address: 5fbd8820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd8820(int param_1,LPSTR param_2,int param_3)

{
  LPCSTR lpString2;
  
  if (param_1 == 0) {
    lpString2 = &DAT_5fc09698;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lpString2 = &DAT_5fc0979c;
  }
  lstrcpynA(param_2,lpString2,param_3);
  param_2[param_3 + -1] = '\0';
  return;
}


