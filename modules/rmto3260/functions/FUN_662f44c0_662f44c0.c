/* Module: rmto3260.dll
   Function: FUN_662f44c0
   Address: 662f44c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR __cdecl FUN_662f44c0(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if (param_2 == (LPCSTR)0x0) {
    return (LPCSTR)0x0;
  }
  iVar1 = FUN_662f4470();
  if (iVar1 == 0) {
    return param_2 + -1;
  }
  pCVar2 = CharPrevA(param_1,param_2);
  if (pCVar2 == param_2) {
    pCVar2 = pCVar2 + -1;
  }
  return pCVar2;
}


