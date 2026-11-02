/* Module: mp3rw.dll
   Function: FUN_00402d00
   Address: 00402d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402d00(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (param_1 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else {
    *param_1 = '\0';
    iVar1 = 1;
  }
  param_1[param_3 + -1] = '\0';
  if (0 < iVar1) {
    return iVar1 + -1;
  }
  return 0;
}


