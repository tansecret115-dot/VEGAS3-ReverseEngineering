/* Module: basc3260.dll
   Function: FUN_627f4a30
   Address: 627f4a30
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR __cdecl FUN_627f4a30(LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if (param_1 == (LPCSTR)0x0) {
    return (LPCSTR)0x0;
  }
  iVar1 = FUN_627f4a10();
  if (iVar1 == 0) {
    return param_1 + 1;
  }
  pCVar2 = CharNextA(param_1);
  if (pCVar2 == param_1) {
    pCVar2 = pCVar2 + 1;
  }
  return pCVar2;
}


