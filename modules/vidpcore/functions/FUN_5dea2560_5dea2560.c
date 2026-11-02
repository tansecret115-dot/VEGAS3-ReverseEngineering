/* Module: vidpcore.dll
   Function: FUN_5dea2560
   Address: 5dea2560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea2560(int param_1,HWND param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  HPROPSHEETPAGE p_Var4;
  undefined4 uVar5;
  _union_1955 _Var6;
  int iVar7;
  _union_1933 _Var8;
  _union_1935 *p_Var9;
  _union_1955 _Var10;
  PROPSHEETPAGEA_V4 *pPVar11;
  _union_1955 local_88;
  PROPSHEETHEADERA_V2 local_84;
  PROPSHEETPAGEA_V4 local_50;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  puVar1 = *(undefined **)(param_1 + 0x130);
  uVar2 = FUN_5dea1650(0x32c,param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  if ((puVar1 == (undefined *)0x32f) || (puVar1 == (undefined *)0x32e)) {
    uVar2 = 0x51c;
    uVar5 = 0x51e;
  }
  else {
    uVar2 = 0x524;
    uVar5 = 0x525;
  }
  if ((DAT_5df42a10 & 1) == 0) {
    DAT_5df42a10 = DAT_5df42a10 | 1;
    _DAT_5df3d99c = 0x328;
    _DAT_5df3d9a0 = &LAB_5dea1ac0;
    _DAT_5df3d9a8 = 0x329;
    _DAT_5df3d9ac = &LAB_5dea1820;
    _DAT_5df3d998 = uVar5;
    _DAT_5df3d9a4 = uVar2;
  }
  _Var6.nStartPage = 0;
  ppuVar3 = (undefined **)&DAT_5df3d954;
  do {
    _Var10 = _Var6;
    if (*ppuVar3 == puVar1) break;
    ppuVar3 = ppuVar3 + 3;
    _Var6.pStartPage = (LPCSTR)(_Var6.nStartPage + 1);
    _Var10 = local_88;
  } while (ppuVar3 < &PTR_s_An_unexpected_error_has_occurred_5df3d9b4);
  local_84.dwSize = 0x34;
  local_84.dwFlags = 0x20;
  local_84.hwndParent = param_2;
  local_84.hInstance = DAT_5df42768;
  local_84.pszCaption = (LPCSTR)FUN_5dea1490(0x526);
  local_84.nPages = 0;
  local_84.u3.ppsp = (LPCPROPSHEETPAGEA)&local_50.hActCtx;
  p_Var9 = (_union_1935 *)&local_50.hActCtx;
  ppuVar3 = (undefined **)&DAT_5df3d950;
  local_84.u2 = _Var10;
  do {
    _Var8._2_2_ = 0;
    _Var8._0_2_ = *(ushort *)(ppuVar3 + 1);
    pPVar11 = &local_50;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      pPVar11->dwSize = 0;
      pPVar11 = (PROPSHEETPAGEA_V4 *)&pPVar11->dwFlags;
    }
    local_50.dwSize = 0x30;
    local_50.dwFlags = 8;
    local_50.hInstance = DAT_5df42768;
    local_50.u = _Var8;
    local_50.pszTitle = (LPCSTR)FUN_5dea1490(*ppuVar3);
    local_50.pfnDlgProc = (DLGPROC)ppuVar3[2];
    local_50.lParam = param_1;
    p_Var4 = CreatePropertySheetPageA(&local_50);
    p_Var9->hbmHeader = (HBITMAP)p_Var4;
    if (p_Var4 != (HPROPSHEETPAGE)0x0) {
      local_84.nPages = local_84.nPages + 1;
    }
    ppuVar3 = ppuVar3 + 3;
    p_Var9 = p_Var9 + 1;
  } while (ppuVar3 < &PTR_s_The_reason_for_the_error_could_n_5df3d9b0);
  DAT_5df42ea8 = 1;
  PropertySheetA(&local_84);
  DAT_5df42ea8 = 0;
  return *(undefined4 *)(param_1 + 0x148);
}


