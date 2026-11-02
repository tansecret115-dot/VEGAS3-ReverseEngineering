/* Module: mp3plug.dll
   Function: FUN_5f699d00
   Address: 5f699d00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f699d00(LPCSTR param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  
  pCVar1 = param_1;
  if (param_1 == (LPCSTR)0x0) {
    return 0xc;
  }
  param_1 = (LPCSTR)((uint)param_1 & 0xffffff00);
  iVar2 = FUN_5f6869f0(pCVar1,(char *)&param_1);
  if (iVar2 < 0) {
    param_1 = (LPCSTR)0xc;
  }
  return (uint)param_1 & 0xff;
}


