/* Module: rmbe3260.dll
   Function: FUN_66052030
   Address: 66052030
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR __cdecl FUN_66052030(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if (param_2 == (LPCSTR)0x0) {
    return (LPCSTR)0x0;
  }
  iVar1 = FUN_66051fe0();
  if (iVar1 == 0) {
    return param_2 + -1;
  }
  pCVar2 = CharPrevA(param_1,param_2);
  if (pCVar2 == param_2) {
    pCVar2 = pCVar2 + -1;
  }
  return pCVar2;
}


