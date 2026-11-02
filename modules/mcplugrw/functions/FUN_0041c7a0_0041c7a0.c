/* Module: mcplugrw.dll
   Function: FUN_0041c7a0
   Address: 0041c7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCSTR FUN_0041c7a0(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpsz;
  int iVar2;
  LPCSTR lpsz_00;
  
  cVar1 = *param_1;
  lpsz_00 = param_1;
  while (cVar1 != '\0') {
    if (cVar1 == '.') {
      lpsz_00 = param_1;
    }
    param_1 = CharNextA(param_1);
    cVar1 = *param_1;
  }
  if (*lpsz_00 == '.') {
    lpsz = CharNextA(lpsz_00);
    cVar1 = *lpsz;
    while( true ) {
      if (cVar1 == '\0') {
        return lpsz_00;
      }
      iVar2 = _ismbcspace((int)cVar1);
      if (iVar2 != 0) break;
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
  }
  return param_1;
}


