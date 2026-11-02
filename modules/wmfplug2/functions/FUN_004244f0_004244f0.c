/* Module: wmfplug2.dll
   Function: FUN_004244f0
   Address: 004244f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004244f0(HWND param_1,int *param_2,uint param_3)

{
  LPCSTR pCVar1;
  uint uVar2;
  UINT UVar3;
  HPROPSHEETPAGE p_Var4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  _union_1935 *p_Var9;
  PROPSHEETPAGEA_V4 *pPVar10;
  bool bVar11;
  int local_1a0 [10];
  PROPSHEETPAGEA_V4 local_178 [2];
  HWND local_f4;
  undefined4 local_ec;
  undefined4 local_e4;
  int local_e0;
  PROPSHEETHEADERA_V2 local_dc;
  PROPSHEETPAGEA_V4 local_a8 [3];
  
  iVar5 = param_2[2];
  pCVar1 = FUN_00420d00(DAT_00489e30,0x1065);
  wsprintfA((LPSTR)&local_a8[0].pszHeaderTitle,pCVar1,iVar5);
  uVar2 = param_2[0x11];
  if (uVar2 == 0) {
    uVar2 = 7;
  }
  bVar11 = (uVar2 & 1) != 0;
  if (bVar11) {
    local_1a0[0] = 0;
  }
  uVar8 = (uint)bVar11;
  if ((uVar2 & 0x200) != 0) {
    local_1a0[uVar8] = 9;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 2) != 0) {
    local_1a0[uVar8] = 1;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 4) != 0) {
    local_1a0[uVar8] = 2;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 8) != 0) {
    local_1a0[uVar8] = 3;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 0x10) != 0) {
    local_1a0[uVar8] = 4;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 0x20) != 0) {
    local_1a0[uVar8] = 5;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 0x40) != 0) {
    local_1a0[uVar8] = 6;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 0x80) != 0) {
    local_1a0[uVar8] = 7;
    uVar8 = uVar8 + 1;
  }
  if ((uVar2 & 0x100) != 0) {
    local_1a0[uVar8] = 8;
    uVar8 = uVar8 + 1;
  }
  p_Var9 = (_union_1935 *)&local_178[0].hActCtx;
  for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 + -1) {
    p_Var9->hbmHeader = (HBITMAP)0x0;
    p_Var9 = p_Var9 + 1;
  }
  local_f4 = param_1;
  local_e4 = 1;
  if (0x53 < param_3) {
    param_3 = 0x54;
  }
  iVar5 = *param_2;
  p_Var9 = (_union_1935 *)&local_178[0].hActCtx;
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *p_Var9 = (_union_1935)*param_2;
    param_2 = (int *)(param_2 + 1);
    p_Var9 = p_Var9 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)p_Var9 = *(undefined1 *)param_2;
    param_2 = (int *)((int)param_2 + 1);
    p_Var9 = (_union_1935 *)((int)p_Var9 + 1);
  }
  if (iVar5 == 1) {
    iVar5 = FUN_004244b0(local_1a0,uVar8,1);
    if (iVar5 == 0) {
      return 0;
    }
    local_dc.u2.nStartPage = 0;
  }
  else if (iVar5 == 2) {
    iVar5 = FUN_004244b0(local_1a0,uVar8,2);
    if (iVar5 == 0) {
      return 0;
    }
    local_dc.u2.nStartPage = 1;
  }
  else if (iVar5 == 3) {
    iVar5 = FUN_004244b0(local_1a0,uVar8,3);
    if (iVar5 == 0) {
      return 0;
    }
    local_dc.u2.nStartPage = 2;
  }
  else {
    UVar3 = 0;
    local_dc.u2.nStartPage = 0;
    if (uVar8 != 0) {
      piVar6 = local_1a0;
      do {
        local_dc.u2.nStartPage = UVar3;
        if (DAT_0048a0ec == *(int *)(&DAT_00489300 + *piVar6 * 8)) break;
        UVar3 = UVar3 + 1;
        piVar6 = piVar6 + 1;
        local_dc.u2.nStartPage = 0;
      } while ((int)UVar3 < (int)uVar8);
    }
  }
  local_dc.hwndParent = param_1;
  local_dc.hInstance = DAT_00489e28;
  iVar5 = 0;
  local_dc.dwSize = 0x34;
  local_dc.dwFlags = 0x80;
  local_dc.pszCaption = (LPCSTR)&local_a8[0].pszHeaderTitle;
  local_dc.nPages = 0;
  local_dc.u3.ppsp = local_a8;
  if (uVar8 != 0) {
    do {
      pPVar10 = local_178;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        pPVar10->dwSize = 0;
        pPVar10 = (PROPSHEETPAGEA_V4 *)&pPVar10->dwFlags;
      }
      local_178[0].hInstance = DAT_00489e28;
      local_178[0].u._2_2_ = 0;
      local_178[0].u._0_2_ = *(ushort *)(&DAT_00489300 + local_1a0[iVar5] * 8);
      local_178[0].pfnDlgProc = (DLGPROC)(&PTR_FUN_00489304)[local_1a0[iVar5] * 2];
      local_178[0].lParam = (LPARAM)&local_178[0].hActCtx;
      local_178[0].dwSize = 0x30;
      local_178[0].dwFlags = 0;
      local_178[0].pszTitle = (LPCSTR)0x0;
      p_Var4 = CreatePropertySheetPageA(local_178);
      (&local_a8[0].dwSize)[iVar5] = (DWORD)p_Var4;
      if (p_Var4 != (HPROPSHEETPAGE)0x0) {
        local_dc.nPages = local_dc.nPages + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar8);
  }
  PropertySheetA(&local_dc);
  DAT_0048a0ec = local_e0;
  return local_ec;
}


