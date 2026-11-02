/* Module: pncrt.dll
   Function: FUN_7800a7b0
   Address: 7800a7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


WCHAR * __cdecl FUN_7800a7b0(LPCWSTR param_1)

{
  BOOL BVar1;
  
  if (param_1 == (LPCWSTR)0x0) {
    BVar1 = FindNextFileW(DAT_780421c8,DAT_780421c4);
    if (BVar1 == 0) {
      FindClose(DAT_780421c8);
      DAT_780421c8 = (HANDLE)0x0;
      return (WCHAR *)0x0;
    }
  }
  else {
    if (DAT_780421c4 == (LPWIN32_FIND_DATAW)0x0) {
      DAT_780421c4 = malloc(0x354);
    }
    if (DAT_780421c8 != (HANDLE)0x0) {
      FindClose(DAT_780421c8);
      DAT_780421c8 = (HANDLE)0x0;
    }
    DAT_780421c8 = FindFirstFileW(param_1,DAT_780421c4);
    if (DAT_780421c8 == (HANDLE)0xffffffff) {
      return (WCHAR *)0x0;
    }
  }
  return DAT_780421c4->cFileName;
}


