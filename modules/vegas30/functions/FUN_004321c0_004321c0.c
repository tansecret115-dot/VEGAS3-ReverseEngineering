/* Module: vegas30.exe
   Function: FUN_004321c0
   Address: 004321c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004321c0(int param_1,LPCSTR param_2,int param_3)

{
  LPSTR lpString1;
  
  lpString1 = (LPSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  param_3 = (param_1 - (int)lpString1) + param_3;
  lstrcpynA(lpString1,param_2,param_3);
  lpString1[param_3 + -1] = '\0';
  return;
}


