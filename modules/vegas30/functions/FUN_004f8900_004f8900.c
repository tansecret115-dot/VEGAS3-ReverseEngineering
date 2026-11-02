/* Module: vegas30.exe
   Function: FUN_004f8900
   Address: 004f8900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004f8900(HWND param_1,HBITMAP param_2,_union_1955 param_3)

{
  bool bVar1;
  SHORT SVar2;
  int iVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  int *piVar6;
  HPROPSHEETPAGE p_Var7;
  HWND pHVar8;
  INT_PTR IVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  HBITMAP pHVar13;
  char *pcVar14;
  LPCSTR pCVar15;
  int *piVar16;
  _union_1935 *p_Var17;
  undefined4 *puVar18;
  PROPSHEETPAGEA_V4 *pPVar19;
  uint local_140;
  uint local_13c;
  PROPSHEETPAGEA_V4 local_138;
  undefined4 local_f8;
  PROPSHEETHEADERA_V2 local_f0;
  LPVOID local_bc;
  int local_b8;
  LPCVOID local_b4;
  undefined4 local_60 [24];
  
  if (DAT_0064b4e4 == 0) {
    iVar3 = FUN_00601ab0(&local_13c,&local_140,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar4 = (local_140 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar4) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_13c;
        DAT_0064b4e4 = uVar4;
      }
    }
  }
  if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
    _DAT_006430a8 = 0x551;
  }
  local_13c = 8;
  local_140 = 1;
  SVar2 = GetAsyncKeyState(0x10);
  if (-1 < SVar2) {
    local_13c = 7;
    local_140 = 0;
  }
  if (DAT_0064db38 == '\0') {
    _SfLoadString_16(DAT_00647204,0x39,&DAT_0064db38,0x20);
    puVar12 = &DAT_00643060;
    do {
      if (*puVar12 < 0x400000) {
        _SfLoadString_16(DAT_00647204,*puVar12,puVar12,0x20);
      }
      puVar12 = puVar12 + 10;
    } while (puVar12 < &DAT_006431a0);
  }
  pvVar5 = GlobalAlloc(0x42,0x3a68);
  piVar6 = GlobalLock(pvVar5);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  pHVar13 = param_2;
  piVar16 = piVar6;
  for (iVar3 = 0xe9a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar16 = pHVar13->unused;
    pHVar13 = pHVar13 + 1;
    piVar16 = piVar16 + 1;
  }
  FUN_004f0c10(piVar6);
  p_Var17 = (_union_1935 *)&local_138.hActCtx;
  for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
    p_Var17->hbmHeader = (HBITMAP)0x0;
    p_Var17 = p_Var17 + 1;
  }
  local_f0.hwndParent = param_1;
  local_f0.u3.ppsp = (LPCPROPSHEETPAGEA)local_60;
  local_138.u3.hbmHeader = param_2;
  local_f8 = 1;
  local_f0.dwSize = 0x34;
  local_f0.dwFlags = 0x400;
  local_f0.hInstance = DAT_006471fc;
  local_f0.pszCaption = &DAT_0064db38;
  local_f0.nPages = 0;
  local_f0.u2 = param_3;
  uVar4 = local_13c;
  local_138.hActCtx = piVar6;
  if (local_140 != 0) {
    pvVar5 = GlobalAlloc(2,0x3720);
    local_bc = GlobalLock(pvVar5);
    iVar3 = 0;
    local_b8 = 0;
    if (local_bc != (LPVOID)0x0) {
      bVar1 = true;
      pcVar11 = "";
      do {
        if (*(char **)pcVar11 != (char *)0x0) {
          if (**(char **)pcVar11 == '\0') {
            if (bVar1) goto LAB_004f8b13;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          pcVar14 = pcVar11;
          puVar18 = (undefined4 *)((int)local_bc + iVar3 * 0x18);
          for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar18 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            puVar18 = puVar18 + 1;
          }
          iVar3 = local_b8 + 1;
          local_b8 = iVar3;
        }
LAB_004f8b13:
        pcVar11 = pcVar11 + 0x18;
      } while (pcVar11 < "SfExtMon_PropPageSite");
      if ((local_bc != (LPVOID)0x0) && (uVar4 = local_13c, iVar3 != 0)) goto LAB_004f8b31;
    }
    uVar4 = local_13c - 1;
  }
LAB_004f8b31:
  if (uVar4 != 0) {
    pCVar15 = (LPCSTR)&DAT_00643060;
    local_140 = uVar4;
    do {
      pPVar19 = &local_138;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pPVar19->dwSize = 0;
        pPVar19 = (PROPSHEETPAGEA_V4 *)&pPVar19->dwFlags;
      }
      local_138.u._2_2_ = 0;
      local_138.u._0_2_ = *(ushort *)(pCVar15 + 0x20);
      local_138.dwSize = 0x30;
      local_138.dwFlags = 8;
      local_138.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,local_138.u.pszTemplate,5)
      ;
      local_138.lParam = (LPARAM)&local_138.hActCtx;
      local_138.pfnDlgProc = *(DLGPROC *)(pCVar15 + 0x24);
      local_138.pszTitle = pCVar15;
      p_Var7 = CreatePropertySheetPageA(&local_138);
      local_60[local_f0.nPages] = p_Var7;
      if (p_Var7 != (HPROPSHEETPAGE)0x0) {
        local_f0.nPages = local_f0.nPages + 1;
      }
      pCVar15 = pCVar15 + 0x28;
      local_140 = local_140 - 1;
    } while (local_140 != 0);
    local_140 = 0;
  }
  pHVar8 = GetFocus();
  IVar9 = PropertySheetA(&local_f0);
  if (IVar9 != 0) {
    FUN_00403d90(IVar9,0,1,0,0,pHVar8);
  }
  if (local_bc != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_bc);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_bc);
    GlobalFree(pvVar5);
  }
  local_bc = (LPVOID)0x0;
  if (local_b4 != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(local_b4);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(local_b4);
    GlobalFree(pvVar5);
  }
  local_b4 = (LPCVOID)0x0;
  pvVar5 = GlobalHandle(local_138.hActCtx);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(local_138.hActCtx);
  GlobalFree(pvVar5);
  return 1;
}


