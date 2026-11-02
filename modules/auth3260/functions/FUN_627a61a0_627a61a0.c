/* Module: auth3260.dll
   Function: FUN_627a61a0
   Address: 627a61a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR __cdecl FUN_627a61a0(LPCSTR param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if (param_1 == (LPCSTR)0x0) {
    return (LPCSTR)0x0;
  }
  iVar1 = FUN_627a6180();
  if (iVar1 == 0) {
    return param_1 + 1;
  }
  pCVar2 = CharNextA(param_1);
  if (pCVar2 == param_1) {
    pCVar2 = pCVar2 + 1;
  }
  return pCVar2;
}


