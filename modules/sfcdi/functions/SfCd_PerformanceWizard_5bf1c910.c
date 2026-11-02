/* Module: sfcdi.dll
   Function: SfCd_PerformanceWizard
   Address: 5bf1c910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCd_PerformanceWizard(struct opttag *) */

long SfCd_PerformanceWizard(opttag *param_1)

{
  HGLOBAL pvVar1;
  HPROPSHEETPAGE p_Var2;
  int iVar3;
  _union_1935 *p_Var4;
  opttag *poVar5;
  ushort *puVar6;
  LPVOID *ppvVar7;
  undefined4 *puVar8;
  PROPSHEETPAGEA_V4 *pPVar9;
  LPVOID local_b0 [4];
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  opttag *local_88;
  undefined4 local_84;
  LPCVOID local_80;
  undefined4 local_74;
  PROPSHEETHEADERA_V2 local_70;
  PROPSHEETPAGEA_V4 local_3c;
  
  ppvVar7 = local_b0;
                    /* 0x1c910  66  ?SfCd_PerformanceWizard@@YGJPAUopttag@@@Z */
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppvVar7 = (LPVOID)0x0;
    ppvVar7 = ppvVar7 + 1;
  }
  local_90 = 0;
  local_b0[2] = (LPVOID)0x0;
  local_98 = 0;
  local_94 = 0;
  local_74 = DAT_5bf65ff4;
  local_84 = 0;
  pvVar1 = GlobalAlloc(0x42,0x41c);
  local_8c = GlobalLock(pvVar1);
  if (local_8c == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  poVar5 = param_1;
  puVar8 = local_8c;
  for (iVar3 = 0x107; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *(undefined4 *)poVar5;
    poVar5 = poVar5 + 4;
    puVar8 = puVar8 + 1;
  }
  local_88 = param_1;
  local_b0[3] = FUN_5bf1b980(DAT_5bf65fc4,(LPCSTR)0x159,local_a0);
  local_b0[0] = (LPVOID)0x0;
  local_70.hwndParent = *(HWND *)param_1;
  local_b0[1] = (LPVOID)0x3;
  local_70.dwSize = 0x34;
  local_70.dwFlags = 0x20;
  local_70.hInstance = (HINSTANCE)FUN_5bf27520(DAT_5bf65fc4);
  local_70.pszCaption = (LPCSTR)(param_1 + 4);
  local_70.u3.ppsp = (LPCPROPSHEETPAGEA)&local_3c.hActCtx;
  local_70.nPages = 0;
  local_70.u2.nStartPage = 0;
  p_Var4 = (_union_1935 *)&local_3c.hActCtx;
  puVar6 = &DAT_5bf64ee4;
  do {
    pPVar9 = &local_3c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pPVar9->dwSize = 0;
      pPVar9 = (PROPSHEETPAGEA_V4 *)&pPVar9->dwFlags;
    }
    local_3c.dwSize = 0x30;
    local_3c.dwFlags = 8;
    local_3c.pszTitle = FUN_5bf283e0(DAT_5bf65fc4,*(uint *)(puVar6 + -2));
    local_3c.hInstance = (HINSTANCE)FUN_5bf27520(DAT_5bf65fc4);
    local_3c.pfnDlgProc = *(DLGPROC *)(puVar6 + 2);
    local_3c.lParam = (LPARAM)local_b0;
    local_3c.u._2_2_ = 0;
    local_3c.u._0_2_ = *puVar6;
    p_Var2 = CreatePropertySheetPageA(&local_3c);
    p_Var4->hbmHeader = (HBITMAP)p_Var2;
    if (p_Var2 != (HPROPSHEETPAGE)0x0) {
      local_70.nPages = local_70.nPages + 1;
    }
    puVar6 = puVar6 + 6;
    p_Var4 = p_Var4 + 1;
  } while (puVar6 < s_MRU_Folders_5bf64f08);
  PropertySheetA(&local_70);
  UpdateWindow(*(HWND *)param_1);
  if (local_80 != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(local_80);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(local_80);
    GlobalFree(pvVar1);
    local_80 = (LPCVOID)0x0;
  }
  pvVar1 = GlobalHandle(local_8c);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(local_8c);
  GlobalFree(pvVar1);
  return 0;
}


