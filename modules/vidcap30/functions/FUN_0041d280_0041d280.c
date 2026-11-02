/* Module: vidcap30.exe
   Function: FUN_0041d280
   Address: 0041d280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d280(HWND param_1,undefined4 *param_2,_union_1955 param_3)

{
  SHORT SVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  HPROPSHEETPAGE p_Var4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined4 **ppuVar12;
  int *piVar13;
  PROPSHEETPAGEA_V4 *pPVar14;
  int local_100;
  int local_fc;
  undefined4 *local_f8 [6];
  undefined4 local_e0;
  PROPSHEETHEADERA_V2 local_d8;
  LPVOID local_a4;
  int local_a0;
  LPCVOID local_9c;
  PROPSHEETPAGEA_V4 local_84 [2];
  
  local_fc = 7;
  SVar1 = GetAsyncKeyState(0x10);
  if (-1 < SVar1) {
    local_fc = 6;
  }
  if (DAT_005bc294 == '\0') {
    _SfLoadString_16(DAT_005ba2a0,0x9e,&DAT_005bc294,0x20);
    puVar8 = &DAT_005b3df8;
    do {
      if (*puVar8 < 0x400000) {
        _SfLoadString_16(DAT_005ba2a0,*puVar8,puVar8,0x20);
      }
      puVar8 = puVar8 + 10;
    } while (puVar8 < &DAT_005b3f10);
  }
  pvVar2 = GlobalAlloc(0x42,0x12d8);
  puVar3 = GlobalLock(pvVar2);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar9 = param_2;
  puVar11 = puVar3;
  for (iVar5 = 0x4b6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_00418370(param_1,puVar3);
  ppuVar12 = local_f8;
  for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppuVar12 = (undefined4 *)0x0;
    ppuVar12 = ppuVar12 + 1;
  }
  local_d8.nPages = 0;
  local_d8.u2 = param_3;
  local_d8.u3.ppsp = (LPCPROPSHEETPAGEA)&local_84[0].hActCtx;
  local_e0 = 1;
  local_f8[1] = param_2;
  local_d8.dwSize = 0x34;
  local_d8.hwndParent = param_1;
  local_d8.hInstance = DAT_005ba298;
  local_d8.pszCaption = &DAT_005bc294;
  local_f8[0] = puVar3;
  if (-1 >= SVar1) {
    pvVar2 = GlobalAlloc(2,0x1140);
    local_a4 = GlobalLock(pvVar2);
    iVar5 = 0;
    local_a0 = 0;
    if (local_a4 != (LPVOID)0x0) {
      ppuVar7 = (undefined **)&DAT_00587af8;
      do {
        if (*ppuVar7 != (undefined *)0x0) {
          ppuVar10 = ppuVar7;
          piVar13 = (int *)((int)local_a4 + iVar5 * 0x18);
          for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar13 = (int)*ppuVar10;
            ppuVar10 = ppuVar10 + 1;
            piVar13 = piVar13 + 1;
          }
          iVar5 = local_a0 + 1;
          local_a0 = iVar5;
        }
        ppuVar7 = ppuVar7 + 6;
      } while (ppuVar7 < &PTR_s_Enable_DV_device_control_00588c38);
      if ((local_a4 != (LPVOID)0x0) && (iVar5 != 0)) goto LAB_0041d401;
    }
    local_fc = local_fc + -1;
  }
LAB_0041d401:
  if (local_fc != 0) {
    ppuVar7 = &PTR_LAB_005b3e1c;
    local_100 = local_fc;
    do {
      if (*ppuVar7 != (undefined *)0x0) {
        pPVar14 = local_84;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          pPVar14->dwSize = 0;
          pPVar14 = (PROPSHEETPAGEA_V4 *)&pPVar14->dwFlags;
        }
        local_84[0].u._2_2_ = 0;
        local_84[0].u._0_2_ = *(ushort *)(ppuVar7 + -1);
        local_84[0].dwSize = 0x30;
        local_84[0].dwFlags = 8;
        local_84[0].hInstance =
             (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,local_84[0].u.pszTemplate,5);
        local_84[0].lParam = (LPARAM)local_f8;
        local_84[0].pfnDlgProc = (DLGPROC)*ppuVar7;
        local_84[0].pszTitle = (LPCSTR)(ppuVar7 + -9);
        p_Var4 = CreatePropertySheetPageA(local_84);
        (&local_84[0].hActCtx)[local_d8.nPages] = p_Var4;
        if (p_Var4 != (HPROPSHEETPAGE)0x0) {
          local_d8.nPages = local_d8.nPages + 1;
        }
      }
      ppuVar7 = ppuVar7 + 10;
      local_100 = local_100 + -1;
    } while (local_100 != 0);
  }
  if (local_d8.nPages < local_d8.u2.nStartPage + 1) {
    local_d8.u2.nStartPage = 0;
  }
  GetFocus();
  PropertySheetA(&local_d8);
  if (local_a4 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(local_a4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_a4);
    GlobalFree(pvVar2);
  }
  local_a4 = (LPVOID)0x0;
  if (local_9c != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(local_9c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_9c);
    GlobalFree(pvVar2);
  }
  local_9c = (LPCVOID)0x0;
  pvVar2 = GlobalHandle(local_f8[0]);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(local_f8[0]);
  GlobalFree(pvVar2);
  return 1;
}


