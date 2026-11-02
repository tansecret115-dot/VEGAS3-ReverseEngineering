/* Module: sftrans1.dll
   Function: FUN_004b3fd0
   Address: 004b3fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b3fd0(int param_1,HWND param_2)

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
  uVar2 = FUN_004b30c0(0x32c,param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  if ((puVar1 == (undefined *)0x32f) || (puVar1 == (undefined *)0x32e)) {
    uVar2 = 0x51c;
    uVar5 = 0x51e;
  }
  else {
    uVar2 = 0x524;
    uVar5 = 0x525;
  }
  if ((DAT_0057b3a4 & 1) == 0) {
    DAT_0057b3a4 = DAT_0057b3a4 | 1;
    _DAT_00575804 = 0x328;
    _DAT_00575808 = &LAB_004b3530;
    _DAT_00575810 = 0x329;
    _DAT_00575814 = &LAB_004b3290;
    _DAT_00575800 = uVar5;
    _DAT_0057580c = uVar2;
  }
  _Var6.nStartPage = 0;
  ppuVar3 = (undefined **)&DAT_005757bc;
  do {
    _Var10 = _Var6;
    if (*ppuVar3 == puVar1) break;
    ppuVar3 = ppuVar3 + 3;
    _Var6.pStartPage = (LPCSTR)(_Var6.nStartPage + 1);
    _Var10 = local_88;
  } while (ppuVar3 < &PTR_DAT_0057581c);
  local_84.dwSize = 0x34;
  local_84.dwFlags = 0x20;
  local_84.hwndParent = param_2;
  local_84.hInstance = DAT_00577238;
  local_84.pszCaption = (LPCSTR)FUN_004b2f00(0x526);
  local_84.nPages = 0;
  local_84.u3.ppsp = (LPCPROPSHEETPAGEA)&local_50.hActCtx;
  p_Var9 = (_union_1935 *)&local_50.hActCtx;
  ppuVar3 = (undefined **)&DAT_005757b8;
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
    local_50.hInstance = DAT_00577238;
    local_50.u = _Var8;
    local_50.pszTitle = (LPCSTR)FUN_004b2f00(*ppuVar3);
    local_50.pfnDlgProc = (DLGPROC)ppuVar3[2];
    local_50.lParam = param_1;
    p_Var4 = CreatePropertySheetPageA(&local_50);
    p_Var9->hbmHeader = (HBITMAP)p_Var4;
    if (p_Var4 != (HPROPSHEETPAGE)0x0) {
      local_84.nPages = local_84.nPages + 1;
    }
    ppuVar3 = ppuVar3 + 3;
    p_Var9 = p_Var9 + 1;
  } while (ppuVar3 < &PTR_DAT_00575818);
  DAT_0057b83c = 1;
  PropertySheetA(&local_84);
  DAT_0057b83c = 0;
  return *(undefined4 *)(param_1 + 0x148);
}


