/* Module: pncrt.dll
   Function: FUN_7800a160
   Address: 7800a160
   Source: Ghidra pseudocode (Stage 10 batch) */


CHAR * __cdecl FUN_7800a160(LPCSTR param_1)

{
  BOOL BVar1;
  
  if (param_1 == (LPCSTR)0x0) {
    BVar1 = FindNextFileA(DAT_78041fac,DAT_78041fa8);
    if (BVar1 == 0) {
      FindClose(DAT_78041fac);
      DAT_78041fac = (HANDLE)0x0;
      return (CHAR *)0x0;
    }
  }
  else {
    if (DAT_78041fa8 == (LPWIN32_FIND_DATAA)0x0) {
      DAT_78041fa8 = malloc(0x244);
    }
    if (DAT_78041fac != (HANDLE)0x0) {
      FindClose(DAT_78041fac);
      DAT_78041fac = (HANDLE)0x0;
    }
    DAT_78041fac = FindFirstFileA(param_1,DAT_78041fa8);
    if (DAT_78041fac == (HANDLE)0xffffffff) {
      return (CHAR *)0x0;
    }
  }
  return DAT_78041fa8->cFileName;
}


