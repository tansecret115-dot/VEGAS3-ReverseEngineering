/* Module: pncrt.dll
   Function: FUN_7800ced0
   Address: 7800ced0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPWSTR FUN_7800ced0(void)

{
  LPWSTR pWVar1;
  LPSTR pCVar2;
  int iVar3;
  
  if (DAT_78042424 == (LPWSTR)0x0) {
    pWVar1 = GetCommandLineW();
    if (pWVar1 == (LPWSTR)0x0) {
      pCVar2 = GetCommandLineA();
      if (pCVar2 == (LPSTR)0x0) {
        return (LPWSTR)0x0;
      }
      DAT_78042424 = (LPWSTR)0x2;
    }
    else {
      DAT_78042424 = (LPWSTR)0x1;
    }
  }
  if (DAT_78042424 == (LPWSTR)0x1) {
    pWVar1 = GetCommandLineW();
    return pWVar1;
  }
  pWVar1 = DAT_78042424;
  if (DAT_78042424 == (LPWSTR)0x2) {
    pCVar2 = GetCommandLineA();
    iVar3 = MultiByteToWideChar(__lc_codepage,1,pCVar2,-1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      return (LPWSTR)0x0;
    }
    pWVar1 = malloc(iVar3 * 2);
    if (pWVar1 == (LPWSTR)0x0) {
      return (LPWSTR)0x0;
    }
    iVar3 = MultiByteToWideChar(__lc_codepage,1,pCVar2,-1,pWVar1,iVar3);
    if (iVar3 == 0) {
      free(pWVar1);
      return (LPWSTR)0x0;
    }
  }
  return pWVar1;
}


