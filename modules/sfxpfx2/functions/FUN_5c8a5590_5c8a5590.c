/* Module: sfxpfx2.dll
   Function: FUN_5c8a5590
   Address: 5c8a5590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c8a5590(int param_1,HWND param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  int *piVar3;
  HPROPSHEETPAGE p_Var4;
  undefined4 uVar5;
  _union_1955 _Var6;
  int iVar7;
  _union_1933 _Var8;
  _union_1935 *p_Var9;
  _union_1955 _Var10;
  UINT *pUVar11;
  PROPSHEETHEADERA_V2 *pPVar12;
  PROPSHEETPAGEA_V4 *pPVar13;
  _union_1955 local_88;
  PROPSHEETHEADERA_V2 local_84;
  PROPSHEETPAGEA_V4 local_50;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar7 = *(int *)(param_1 + 0x130);
  pvVar1 = FUN_5c8a4670((LPCSTR)0x32c,(undefined4 *)(param_1 + 0x150));
  *(LPVOID *)(param_1 + 0x14c) = pvVar1;
  if ((iVar7 == 0x32f) || (iVar7 == 0x32e)) {
    uVar2 = 0x51c;
    uVar5 = 0x51e;
  }
  else {
    uVar2 = 0x524;
    uVar5 = 0x525;
  }
  if ((DAT_5c8e8f30 & 1) == 0) {
    DAT_5c8e8f30 = DAT_5c8e8f30 | 1;
    _DAT_5c8e7ed4 = 0x328;
    _DAT_5c8e7ed8 = &LAB_5c8a4af0;
    _DAT_5c8e7ee0 = 0x329;
    _DAT_5c8e7ee4 = &DAT_5c8a4850;
    _DAT_5c8e7ed0 = uVar5;
    _DAT_5c8e7edc = uVar2;
  }
  _Var6.nStartPage = 0;
  piVar3 = &DAT_5c8e7e8c;
  do {
    _Var10 = _Var6;
    if (*piVar3 == iVar7) break;
    piVar3 = piVar3 + 3;
    _Var6.pStartPage = (LPCSTR)(_Var6.nStartPage + 1);
    _Var10 = local_88;
  } while ((int)piVar3 < 0x5c8e7eec);
  pPVar12 = &local_84;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    pPVar12->dwSize = 0;
    pPVar12 = (PROPSHEETHEADERA_V2 *)&pPVar12->dwFlags;
  }
  local_84.dwSize = 0x34;
  local_84.dwFlags = 0x20;
  local_84.hwndParent = param_2;
  local_84.hInstance = DAT_5c8eeb90;
  local_84.pszCaption = FUN_5c8a44b0(0x526);
  local_84.nPages = 0;
  local_84.u3.ppsp = (LPCPROPSHEETPAGEA)&local_50.hActCtx;
  p_Var9 = (_union_1935 *)&local_50.hActCtx;
  pUVar11 = &DAT_5c8e7e88;
  local_84.u2 = _Var10;
  do {
    _Var8._2_2_ = 0;
    _Var8._0_2_ = (ushort)pUVar11[1];
    pPVar13 = &local_50;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pPVar13->dwSize = 0;
      pPVar13 = (PROPSHEETPAGEA_V4 *)&pPVar13->dwFlags;
    }
    local_50.dwSize = 0x30;
    local_50.dwFlags = 8;
    local_50.hInstance = DAT_5c8eeb90;
    local_50.u = _Var8;
    local_50.pszTitle = FUN_5c8a44b0(*pUVar11);
    local_50.pfnDlgProc = (DLGPROC)pUVar11[2];
    local_50.lParam = param_1;
    p_Var4 = CreatePropertySheetPageA(&local_50);
    p_Var9->hbmHeader = (HBITMAP)p_Var4;
    if (p_Var4 != (HPROPSHEETPAGE)0x0) {
      local_84.nPages = local_84.nPages + 1;
    }
    pUVar11 = pUVar11 + 3;
    p_Var9 = p_Var9 + 1;
  } while ((int)pUVar11 < 0x5c8e7ee8);
  DAT_5c8e93c8 = 1;
  PropertySheetA(&local_84);
  DAT_5c8e93c8 = 0;
  return *(undefined4 *)(param_1 + 0x148);
}


