/* Module: sfpagepeel.dll
   Function: FUN_00412530
   Address: 00412530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00412530(int param_1,HWND param_2)

{
  undefined *puVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  HPROPSHEETPAGE p_Var5;
  undefined4 uVar6;
  _union_1955 _Var7;
  int iVar8;
  _union_1933 _Var9;
  _union_1935 *p_Var10;
  _union_1955 _Var11;
  PROPSHEETPAGEA_V4 *pPVar12;
  _union_1955 local_88;
  PROPSHEETHEADERA_V2 local_84;
  PROPSHEETPAGEA_V4 local_50;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  puVar1 = *(undefined **)(param_1 + 0x130);
  pvVar2 = FUN_00411620((LPCSTR)0x32c,(undefined4 *)(param_1 + 0x150));
  *(LPVOID *)(param_1 + 0x14c) = pvVar2;
  if ((puVar1 == (undefined *)0x32f) || (puVar1 == (undefined *)0x32e)) {
    uVar3 = 0x51c;
    uVar6 = 0x51e;
  }
  else {
    uVar3 = 0x524;
    uVar6 = 0x525;
  }
  if ((DAT_0047d528 & 1) == 0) {
    DAT_0047d528 = DAT_0047d528 | 1;
    _DAT_0047c35c = 0x328;
    _DAT_0047c360 = &LAB_00411a90;
    _DAT_0047c368 = 0x329;
    _DAT_0047c36c = &LAB_004117f0;
    _DAT_0047c358 = uVar6;
    _DAT_0047c364 = uVar3;
  }
  _Var7.nStartPage = 0;
  ppuVar4 = (undefined **)&DAT_0047c314;
  do {
    _Var11 = _Var7;
    if (*ppuVar4 == puVar1) break;
    ppuVar4 = ppuVar4 + 3;
    _Var7.pStartPage = (LPCSTR)(_Var7.nStartPage + 1);
    _Var11 = local_88;
  } while (ppuVar4 < &PTR_s_An_unexpected_error_has_occurred_0047c374);
  local_84.dwSize = 0x34;
  local_84.dwFlags = 0x20;
  local_84.hwndParent = param_2;
  local_84.hInstance = DAT_0047d488;
  local_84.pszCaption = FUN_00411460(0x526);
  local_84.nPages = 0;
  local_84.u3.ppsp = (LPCPROPSHEETPAGEA)&local_50.hActCtx;
  p_Var10 = (_union_1935 *)&local_50.hActCtx;
  ppuVar4 = (undefined **)&DAT_0047c310;
  local_84.u2 = _Var11;
  do {
    _Var9._2_2_ = 0;
    _Var9._0_2_ = *(ushort *)(ppuVar4 + 1);
    pPVar12 = &local_50;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      pPVar12->dwSize = 0;
      pPVar12 = (PROPSHEETPAGEA_V4 *)&pPVar12->dwFlags;
    }
    local_50.dwSize = 0x30;
    local_50.dwFlags = 8;
    local_50.hInstance = DAT_0047d488;
    local_50.u = _Var9;
    local_50.pszTitle = FUN_00411460((UINT)*ppuVar4);
    local_50.pfnDlgProc = (DLGPROC)ppuVar4[2];
    local_50.lParam = param_1;
    p_Var5 = CreatePropertySheetPageA(&local_50);
    p_Var10->hbmHeader = (HBITMAP)p_Var5;
    if (p_Var5 != (HPROPSHEETPAGE)0x0) {
      local_84.nPages = local_84.nPages + 1;
    }
    ppuVar4 = ppuVar4 + 3;
    p_Var10 = p_Var10 + 1;
  } while (ppuVar4 < &PTR_s_The_reason_for_the_error_could_n_0047c370);
  DAT_0047d9c0 = 1;
  PropertySheetA(&local_84);
  DAT_0047d9c0 = 0;
  return *(undefined4 *)(param_1 + 0x148);
}


