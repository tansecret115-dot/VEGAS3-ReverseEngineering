/* Module: sfmarket2.dll
   Function: FUN_00402870
   Address: 00402870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402870(LPWSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = MultiByteToWideChar(0,1,param_2,-1,param_1,param_3);
  param_1[param_3 + -1] = L'\0';
  if (0 < iVar1) {
    return iVar1 + -1;
  }
  return 0;
}


