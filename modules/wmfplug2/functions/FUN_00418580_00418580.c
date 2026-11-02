/* Module: wmfplug2.dll
   Function: FUN_00418580
   Address: 00418580
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00418580(LPSTR param_1,uint param_2)

{
  LPSTR pCVar1;
  uint uVar2;
  
  if (*param_1 == '\0') {
    return 0;
  }
  uVar2 = 1;
  if (param_2 != 1) {
    do {
      pCVar1 = CharNextA(param_1);
      if (*pCVar1 == '\0') {
        if (*param_1 != '/') {
          if (param_2 < uVar2 + 2) {
            return 0;
          }
          *pCVar1 = '/';
          pCVar1[1] = '\0';
          uVar2 = uVar2 + 1;
        }
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      param_1 = pCVar1;
    } while (uVar2 != param_2);
  }
  return 0;
}


