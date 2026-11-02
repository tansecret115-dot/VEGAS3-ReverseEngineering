/* Module: sftrans1.dll
   Function: FUN_005464e0
   Address: 005464e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005464e0(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (param_1 != (LPSTR)0x0)) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(0,0,param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
  if (0 < iVar1) {
    param_1[iVar1 + -1] = '\0';
  }
  return iVar1;
}


