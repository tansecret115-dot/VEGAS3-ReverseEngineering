/* Module: vidcap30.exe
   Function: FUN_00458c10
   Address: 00458c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00458c10(HWND param_1,uint param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  UINT UVar3;
  undefined **ppuVar4;
  _union_1935 *p_Var5;
  PROPSHEETPAGEA_V4 *pPVar6;
  DWORD aDStack_52c [3];
  PROPSHEETPAGEA_V4 PStack_520;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  PROPSHEETHEADERA_V2 PStack_38;
  
  if (DAT_005bc404 != 0) {
    return 0;
  }
  p_Var5 = (_union_1935 *)&PStack_520.hActCtx;
  for (iVar2 = 0x13c; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var5->hbmHeader = (HBITMAP)0x0;
    p_Var5 = p_Var5 + 1;
  }
  uStack_4c8 = param_5;
  if (param_3 != (code *)0x0) {
    (*param_3)(&PStack_520.hActCtx);
  }
  uStack_4cc = param_4;
  PStack_520.hActCtx = param_1;
  PStack_38.hwndParent = param_1;
  PStack_38.pszCaption = (LPCSTR)&PStack_520.u3;
  PStack_38.u3.ppsp = (LPCPROPSHEETPAGEA)aDStack_52c;
  uStack_44 = 1;
  PStack_38.dwSize = 0x34;
  PStack_38.dwFlags = 0x100;
  PStack_38.hInstance = DAT_005ba298;
  PStack_38.pfnCallback = (PFNPROPSHEETCALLBACK)&LAB_00458d90;
  ppuVar4 = &PTR_FUN_005b615c;
  do {
    pPVar6 = &PStack_520;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pPVar6->dwSize = 0;
      pPVar6 = (PROPSHEETPAGEA_V4 *)&pPVar6->dwFlags;
    }
    PStack_520.u = (_union_1933)((_union_1933 *)(ppuVar4 + -1))->pszTemplate;
    PStack_520.dwSize = 0x30;
    PStack_520.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,PStack_520.u.pszTemplate,5)
    ;
    PStack_520.pfnDlgProc = (DLGPROC)*ppuVar4;
    PStack_520.lParam = (LPARAM)&PStack_520.hActCtx;
    p_Var1 = CreatePropertySheetPageA(&PStack_520);
    UVar3 = PStack_38.nPages;
    aDStack_52c[PStack_38.nPages] = (DWORD)p_Var1;
    if (p_Var1 != (HPROPSHEETPAGE)0x0) {
      UVar3 = UVar3 + 1;
      PStack_38.nPages = UVar3;
    }
    ppuVar4 = ppuVar4 + 2;
  } while (ppuVar4 < &DAT_005b6174);
  PStack_38.u2.pStartPage = (LPCSTR)(UVar3 - 1);
  if (param_2 <= PStack_38.u2.nStartPage) {
    PStack_38.u2.nStartPage = param_2;
  }
  DAT_005bc404 = 1;
  PropertySheetA(&PStack_38);
  DAT_005bc404 = 0;
  FUN_00411120(1);
  return uStack_48;
}


