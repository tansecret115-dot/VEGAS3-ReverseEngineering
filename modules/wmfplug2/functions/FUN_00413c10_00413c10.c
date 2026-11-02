/* Module: wmfplug2.dll
   Function: FUN_00413c10
   Address: 00413c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413c10(LPCSTR param_1)

{
  double dVar1;
  int iVar2;
  LPSTR pCVar3;
  uint uVar4;
  LPCSTR lpszCurrent;
  float10 fVar5;
  
  fVar5 = FUN_0042d870(param_1,(undefined4 *)0x0);
  iVar2 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar2;
  do {
    if (lpszCurrent == param_1) goto LAB_00413c6e;
    lpszCurrent = CharPrevA(param_1,lpszCurrent);
    iVar2 = _ismbcspace((int)*lpszCurrent);
  } while (iVar2 != 0);
  pCVar3 = CharNextA(lpszCurrent);
  if ((pCVar3 != param_1) && (*pCVar3 != '\0')) {
    *pCVar3 = '\0';
  }
LAB_00413c6e:
  iVar2 = lstrlenA(param_1);
  pCVar3 = CharPrevA(param_1,param_1 + iVar2);
  uVar4 = _mbctoupper((int)*pCVar3);
  dVar1 = _DAT_0047c780;
  if ((uVar4 != 0x4b) && (dVar1 = _DAT_0047c788, uVar4 != 0x4d)) {
    ceil((double)fVar5);
    ftol();
    return;
  }
  ceil((double)fVar5 * dVar1);
  ftol();
  return;
}


