/* Module: vidcap30.exe
   Function: FUN_00452520
   Address: 00452520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00452520(HWND param_1,uint param_2,code *param_3,undefined4 param_4,code *param_5,
                int param_6)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  UINT UVar3;
  undefined **ppuVar4;
  _union_1935 *p_Var5;
  PROPSHEETPAGEA_V4 *pPVar6;
  DWORD aDStack_178 [2];
  PROPSHEETPAGEA_V4 PStack_170;
  undefined4 uStack_11c;
  int iStack_118;
  undefined1 auStack_114 [204];
  int iStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  PROPSHEETHEADERA_V2 PStack_38;
  
  if (DAT_005bc3f4 != 0) {
    return 0;
  }
  p_Var5 = (_union_1935 *)&PStack_170.hActCtx;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var5->hbmHeader = (HBITMAP)0x0;
    p_Var5 = p_Var5 + 1;
  }
  iStack_118 = param_6;
  if (param_3 != (code *)0x0) {
    (*param_3)(&PStack_170.hActCtx);
  }
  uStack_11c = param_4;
  PStack_170.hActCtx = param_1;
  PStack_38.hwndParent = param_1;
  PStack_38.pszCaption = (LPCSTR)&PStack_170.u3;
  PStack_38.u3.ppsp = (LPCPROPSHEETPAGEA)aDStack_178;
  uStack_44 = 1;
  PStack_38.dwSize = 0x34;
  PStack_38.dwFlags = 0x100;
  PStack_38.hInstance = DAT_005ba298;
  PStack_38.pfnCallback = (PFNPROPSHEETCALLBACK)&LAB_004526e0;
  ppuVar4 = &PTR_LAB_005b5e9c;
  do {
    pPVar6 = &PStack_170;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pPVar6->dwSize = 0;
      pPVar6 = (PROPSHEETPAGEA_V4 *)&pPVar6->dwFlags;
    }
    PStack_170.u = (_union_1933)((_union_1933 *)(ppuVar4 + -1))->pszTemplate;
    PStack_170.dwSize = 0x30;
    PStack_170.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,PStack_170.u.pszTemplate,5)
    ;
    PStack_170.pfnDlgProc = (DLGPROC)*ppuVar4;
    PStack_170.lParam = (LPARAM)&PStack_170.hActCtx;
    p_Var1 = CreatePropertySheetPageA(&PStack_170);
    UVar3 = PStack_38.nPages;
    aDStack_178[PStack_38.nPages] = (DWORD)p_Var1;
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      UVar3 = UVar3 + 1;
      PStack_38.nPages = UVar3;
    }
    ppuVar4 = ppuVar4 + 2;
  } while (ppuVar4 < &DAT_005b5eac);
  PStack_38.u2.pStartPage = (LPCSTR)(UVar3 - 1);
  if (param_2 <= PStack_38.u2.nStartPage) {
    PStack_38.u2.nStartPage = param_2;
  }
  DAT_005bc3f4 = 1;
  PropertySheetA(&PStack_38);
  DAT_005bc3f4 = 0;
  if ((iStack_48 != 0) && (param_6 == DAT_005bb838)) {
    **(uint **)(DAT_005bb838 + 4) = **(uint **)(DAT_005bb838 + 4) | 0x40000;
  }
  if (iStack_3c != 0) {
    (*param_5)(&PStack_170.hActCtx);
  }
  _SfSummary_Free_4(auStack_114);
  return iStack_48;
}


