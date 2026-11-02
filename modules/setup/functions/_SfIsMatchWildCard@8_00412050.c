/* Module: Setup.exe
   Function: _SfIsMatchWildCard@8
   Address: 00412050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfIsMatchWildCard_8(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  
                    /* 0x12050  199  _SfIsMatchWildCard@8 */
  if ((*param_1 == 0x2a) && (param_1[1] == 0)) {
    return 1;
  }
  uVar4 = 0;
  while( true ) {
    bVar1 = *param_1;
    if (*param_2 == 0) {
      if (((bVar1 == 0) || (bVar1 == 0x2a)) ||
         ((bVar1 == 0x2e && (pCVar3 = CharNextA((LPCSTR)param_1), *pCVar3 == '\0')))) {
        uVar4 = 1;
      }
      return uVar4;
    }
    if (bVar1 == 0) break;
    if (bVar1 == 0x2a) {
      param_1 = (byte *)CharNextA((LPCSTR)param_1);
      bVar1 = *param_2;
      while (((bVar1 != 0 && (bVar1 != 0x2e)) && (bVar1 != *param_1))) {
        param_2 = (byte *)CharNextA((LPCSTR)param_2);
        bVar1 = *param_2;
      }
    }
    else {
      if ((bVar1 != 0x3f) && (iVar2 = FUN_00412110(param_1,param_2), iVar2 != 0)) {
        return 0;
      }
      param_1 = (byte *)CharNextA((LPCSTR)param_1);
      param_2 = (byte *)CharNextA((LPCSTR)param_2);
    }
  }
  if (*param_2 == 0x2e) {
    param_2 = (byte *)CharNextA((LPCSTR)param_2);
  }
  if (*param_2 != 0) {
    return 0;
  }
  return 1;
}


