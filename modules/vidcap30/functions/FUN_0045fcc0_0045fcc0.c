/* Module: vidcap30.exe
   Function: FUN_0045fcc0
   Address: 0045fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0045fcc0(HWND param_1,uint param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  HPROPSHEETPAGE p_Var1;
  int iVar2;
  UINT UVar3;
  _union_1935 *p_Var4;
  PROPSHEETPAGEA_V4 *pPVar5;
  DWORD DStack_328;
  PROPSHEETPAGEA_V4 local_324;
  undefined4 uStack_2d0;
  undefined4 local_2cc;
  undefined4 uStack_44;
  undefined4 uStack_40;
  PROPSHEETHEADERA_V2 PStack_34;
  
  if (DAT_005bc408 != 0) {
    return 0;
  }
  p_Var4 = (_union_1935 *)&local_324.hActCtx;
  for (iVar2 = 0xbd; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var4->hbmHeader = (HBITMAP)0x0;
    p_Var4 = p_Var4 + 1;
  }
  local_2cc = param_5;
  if (param_3 != (code *)0x0) {
    (*param_3)(&local_324.hActCtx);
  }
  local_324.hActCtx = param_1;
  PStack_34.hwndParent = param_1;
  PStack_34.pszCaption = (LPCSTR)&local_324.u3;
  PStack_34.hInstance = DAT_005ba298;
  pPVar5 = &local_324;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pPVar5->dwSize = 0;
    pPVar5 = (PROPSHEETPAGEA_V4 *)&pPVar5->dwFlags;
  }
  uStack_2d0 = param_4;
  local_324.u.pszTemplate = DAT_005b6258;
  PStack_34.u3.ppsp = (LPCPROPSHEETPAGEA)&DStack_328;
  uStack_40 = 1;
  PStack_34.dwSize = 0x34;
  PStack_34.dwFlags = 0x100;
  PStack_34.pfnCallback = (PFNPROPSHEETCALLBACK)&LAB_0045fe30;
  local_324.dwSize = 0x30;
  local_324.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_005ba2a0,DAT_005b6258,5);
  local_324.lParam = (LPARAM)&local_324.hActCtx;
  local_324.pfnDlgProc = (DLGPROC)PTR_FUN_005b625c;
  p_Var1 = CreatePropertySheetPageA(&local_324);
  UVar3 = PStack_34.nPages;
  (&DStack_328)[PStack_34.nPages] = (DWORD)p_Var1;
  if (p_Var1 != (HPROPSHEETPAGE)0x0) {
    UVar3 = UVar3 + 1;
    PStack_34.nPages = UVar3;
  }
  PStack_34.u2.pStartPage = (LPCSTR)(UVar3 - 1);
  if (param_2 <= PStack_34.u2.nStartPage) {
    PStack_34.u2.nStartPage = param_2;
  }
  DAT_005bc408 = 1;
  PropertySheetA(&PStack_34);
  DAT_005bc408 = 0;
  return uStack_44;
}


