/* Module: vegas30k.dll
   Function: _SfIsMatchWildCard@8
   Address: 01056990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsMatchWildCard_8(LPSTR param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  
                    /* 0x56990  1032  _SfIsMatchWildCard@8 */
  if ((*param_1 == '*') && (param_1[1] == '\0')) {
    return 1;
  }
  uVar4 = 0;
  while( true ) {
    cVar1 = *param_1;
    if (*param_2 == '\0') {
      if (((cVar1 == '\0') || (cVar1 == '*')) ||
         ((cVar1 == '.' && (pCVar3 = CharNextA(param_1), *pCVar3 == '\0')))) {
        uVar4 = 1;
      }
      return uVar4;
    }
    if (cVar1 == '\0') break;
    if (cVar1 == '*') {
      param_1 = CharNextA(param_1);
      cVar1 = *param_2;
      while (((cVar1 != '\0' && (cVar1 != '.')) && (cVar1 != *param_1))) {
        param_2 = CharNextA(param_2);
        cVar1 = *param_2;
      }
    }
    else {
      if ((cVar1 != '?') && (iVar2 = FUN_01056a50(param_1,param_2), iVar2 != 0)) {
        return 0;
      }
      param_1 = CharNextA(param_1);
      param_2 = CharNextA(param_2);
    }
  }
  if (*param_2 == '.') {
    param_2 = CharNextA(param_2);
  }
  if (*param_2 != '\0') {
    return 0;
  }
  return 1;
}


