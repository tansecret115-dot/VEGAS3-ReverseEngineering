/* Module: vegas30.exe
   Function: FUN_005d8080
   Address: 005d8080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005d8080(HWND param_1,uint param_2,code *param_3,undefined4 param_4,code *param_5,
                int param_6)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  HPROPSHEETPAGE p_Var4;
  _union_1935 *p_Var5;
  LPCSTR pCVar6;
  undefined4 *puVar7;
  HWND *ppHVar8;
  PROPSHEETPAGEA_V4 *pPVar9;
  undefined4 local_f5c;
  uint local_f58;
  PROPSHEETPAGEA_V4 PStack_f54;
  HWND local_f10;
  CHAR local_f0c [552];
  undefined4 local_ce4;
  int local_ce0;
  undefined1 auStack_cdc [2844];
  int iStack_1c0;
  undefined4 local_1bc;
  int iStack_1b4;
  PROPSHEETHEADERA_V2 local_38;
  
  if (DAT_0065b3c4 != 0) {
    return 0;
  }
  iVar3 = Transport_IsRecording();
  if (iVar3 == 0) {
    if (DAT_0064b4e0 == 0) {
      iVar3 = FUN_00601ab0(&local_f5c,&local_f58,1);
      if (iVar3 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_f58 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_f5c;
        DAT_0064b4e0 = local_f58 & 0xff;
      }
    }
    uVar2 = DAT_0064b4e0;
    uVar1 = DAT_0060f98c;
    if ((DAT_0065adf8 & 1) == 0) {
      DAT_0065adf8 = DAT_0065adf8 | 1;
      _DAT_0065b3e8 = 0x324;
      DAT_0065b3ec = &LAB_005d5c00;
      DAT_0065b3f0 = DAT_0060f98c;
      puVar7 = &DAT_0065b3f1;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      _DAT_0065b410 = (-(uint)(uVar2 != 0x50) & 0x2b) + 0x2fb;
      _DAT_0065b414 = &LAB_005e34e0;
      DAT_0065b418 = uVar1;
      puVar7 = &DAT_0065b419;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      _DAT_0065b438 = 0x30a;
      _DAT_0065b43c = FUN_005d9310;
      DAT_0065b440 = uVar1;
      puVar7 = &DAT_0065b441;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      _DAT_0065b460 = 0x12e;
      _DAT_0065b464 = &LAB_005d45a0;
      DAT_0065b468 = uVar1;
      puVar7 = &DAT_0065b469;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)puVar7 + 2) = 0;
      _DAT_0065b488 = 0x214;
      _DAT_0065b48c = &LAB_005d4ad0;
    }
    ppHVar8 = &local_f10;
    for (iVar3 = 0x3c4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppHVar8 = (HWND)0x0;
      ppHVar8 = ppHVar8 + 1;
    }
    local_ce0 = param_6;
    if (param_3 != (code *)0x0) {
      (*param_3)(&local_f10);
    }
    local_ce4 = param_4;
    local_38.pszCaption = local_f0c;
    local_f10 = param_1;
    local_38.hwndParent = param_1;
    local_38.u3.ppsp = (LPCPROPSHEETPAGEA)&PStack_f54.hActCtx;
    local_38.dwFlags = 0;
    local_38.nPages = 0;
    local_38.u2.nStartPage = 0;
    local_1bc = 1;
    local_38.dwSize = 0x34;
    local_38.hInstance = DAT_006471fc;
    p_Var5 = (_union_1935 *)&PStack_f54.hActCtx;
    pCVar6 = &DAT_0065b3c8;
    do {
      pPVar9 = &PStack_f54;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pPVar9->dwSize = 0;
        pPVar9 = (PROPSHEETPAGEA_V4 *)&pPVar9->dwFlags;
      }
      PStack_f54.u._2_2_ = 0;
      PStack_f54.u._0_2_ = *(ushort *)(pCVar6 + 0x20);
      PStack_f54.dwSize = 0x30;
      PStack_f54.dwFlags = 0;
      PStack_f54.hInstance =
           (HINSTANCE)_SfFindResInstance_12(DAT_00647204,PStack_f54.u.pszTemplate,5);
      PStack_f54.pfnDlgProc = *(DLGPROC *)(pCVar6 + 0x24);
      PStack_f54.lParam = (LPARAM)&local_f10;
      PStack_f54.pszTitle = pCVar6;
      p_Var4 = CreatePropertySheetPageA(&PStack_f54);
      iVar3 = DAT_0064b138;
      p_Var5->hbmHeader = (HBITMAP)p_Var4;
      if (p_Var4 != (HPROPSHEETPAGE)0x0) {
        local_38.nPages = local_38.nPages + 1;
        p_Var5 = p_Var5 + 1;
      }
      pCVar6 = pCVar6 + 0x28;
    } while (pCVar6 < &DAT_0065b490);
    local_38.u2.pStartPage = (LPCSTR)(local_38.nPages - 1);
    if (param_2 <= local_38.u2.nStartPage) {
      local_38.u2.nStartPage = param_2;
    }
    if (param_6 == DAT_0064b138) {
      DAT_0065ae58 = 0;
      FUN_004e9f70(DAT_0064b138,0x8f,0);
    }
    DAT_0065b3c4 = 1;
    PropertySheetA(&local_38);
    DAT_0065b3c4 = 0;
    if ((iStack_1c0 != 0) && (param_6 == iVar3)) {
      FUN_004eb2b0(iVar3);
    }
    if (iStack_1b4 != 0) {
      (*param_5)(&local_f10);
    }
    if (param_6 == iVar3) {
      FUN_004ea040(iVar3,0);
    }
    _SfSummary_Free_4(auStack_cdc);
    FUN_004e8800();
    return iStack_1c0;
  }
  return 0;
}


