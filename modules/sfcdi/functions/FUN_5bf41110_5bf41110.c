/* Module: sfcdi.dll
   Function: FUN_5bf41110
   Address: 5bf41110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf41110(int param_1,int param_2,undefined4 *param_3)

{
  uchar uVar1;
  LPCSTR pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uchar *lpsz;
  LPSTR lpString;
  uchar local_104 [260];
  
  iVar3 = *(int *)(param_1 + 0xc);
  lpString = (LPCSTR)0x0;
  if (-1 < iVar3) {
    if (1 < iVar3) {
      if (iVar3 != 2) goto LAB_5bf41330;
      _mbscpy(local_104,(uchar *)(param_2 + 0x110));
      pCVar2 = FUN_5bf23120((LPCSTR)local_104);
      if (pCVar2 != (LPCSTR)0x0) {
        lpString = CharNextA(pCVar2);
        *pCVar2 = '\0';
      }
      iVar3 = lstrlenA((LPCSTR)local_104);
      iVar4 = lstrlenA(lpString);
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *param_3 = 0;
        return 1;
      }
      if (0x40 < (uint)(iVar4 + iVar3)) {
        *param_3 = 5;
        return 1;
      }
    }
    _mbscpy(local_104,(uchar *)(param_2 + 0xc));
    pCVar2 = FUN_5bf23120((LPCSTR)local_104);
    if (pCVar2 != (LPCSTR)0x0) {
      lpString = CharNextA(pCVar2);
      *pCVar2 = '\0';
    }
    uVar5 = lstrlenA((LPCSTR)local_104);
    uVar6 = lstrlenA(lpString);
    if ((uVar5 == 0) && (uVar6 == 0)) {
      *param_3 = 0;
      return 1;
    }
    if (*(int *)(param_1 + 0xc) == 1) {
      if (((*(uint *)(param_2 + 8) & 0x10) != 0) && (uVar6 != 0)) {
        *param_3 = 4;
        return 1;
      }
      if (0x1e < uVar6 + uVar5) {
        *param_3 = 5;
        return 1;
      }
    }
    else {
      if ((uVar5 == 0) || (8 < uVar5)) {
        *param_3 = 2;
        return 1;
      }
      if (3 < uVar6) {
        *param_3 = 3;
        return 1;
      }
    }
    lpsz = local_104;
    while (local_104[0] != '\0') {
      iVar3 = _ismbcalpha((int)(char)*lpsz);
      if ((((iVar3 == 0) || (iVar3 = _ismbcupper((int)(char)*lpsz), iVar3 == 0)) &&
          (iVar3 = _ismbcdigit((int)(char)*lpsz), iVar3 == 0)) &&
         (((uVar1 = *lpsz, uVar1 != '~' && (uVar1 != '_')) && (uVar1 != '\'')))) {
        *param_3 = 1;
        return 1;
      }
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      local_104[0] = *lpsz;
    }
  }
LAB_5bf41330:
  iVar3 = FUN_5bf41080(param_2);
  if (iVar3 < 0) {
    iVar3 = 1;
    *param_3 = 6;
  }
  return iVar3;
}


