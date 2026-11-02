/* Module: vegas30.exe
   Function: FUN_0055bac0
   Address: 0055bac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0055bac0(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  _union_1935 *p_Var2;
  PROPSHEETHEADERA_V2 *pPVar3;
  PROPSHEETPAGEA_V4 *pPVar4;
  HPROPSHEETPAGE local_210;
  PROPSHEETHEADERA_V2 local_20c;
  PROPSHEETPAGEA_V4 local_1d8;
  undefined4 local_1a0;
  int local_28;
  undefined4 local_24;
  
  iVar1 = -0x7ff8ffa9;
  if (param_2 != 0) {
    p_Var2 = (_union_1935 *)&local_1d8.hActCtx;
    for (iVar1 = 0x6a; iVar1 != 0; iVar1 = iVar1 + -1) {
      p_Var2->hbmHeader = (HBITMAP)0x0;
      p_Var2 = p_Var2 + 1;
    }
    local_24 = DAT_0064b138;
    pPVar3 = &local_20c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      pPVar3->dwSize = 0;
      pPVar3 = (PROPSHEETHEADERA_V2 *)&pPVar3->dwFlags;
    }
    local_20c.hwndParent = param_1;
    local_20c.u3.ppsp = (LPCPROPSHEETPAGEA)&local_210;
    local_20c.hInstance = DAT_006471fc;
    local_28 = param_2;
    pPVar4 = &local_1d8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pPVar4->dwSize = 0;
      pPVar4 = (PROPSHEETPAGEA_V4 *)&pPVar4->dwFlags;
    }
    local_1d8.dwFlags = 0;
    local_1d8.u.pszTemplate =
         (LPCSTR)((-(uint)((*(uint *)(param_2 + 0x134) & 0x400) != 0) & 0x3b) + 0x33a);
    local_1d8.hActCtx = (HANDLE)0x1;
    local_1a0 = 1;
    local_20c.dwSize = 0x34;
    local_20c.dwFlags = 0x80;
    local_20c.pszCaption = "Properties";
    local_20c.nPages = 1;
    local_20c.u2.nStartPage = 0;
    local_1d8.dwSize = 0x30;
    local_1d8.hInstance = (HINSTANCE)_SfFindResInstance_12(DAT_00647204,local_1d8.u.pszTemplate,5);
    local_1d8.pfnDlgProc = (DLGPROC)&LAB_00555a40;
    local_1d8.lParam = (LPARAM)&local_1d8.hActCtx;
    local_210 = CreatePropertySheetPageA(&local_1d8);
    if (local_210 == (HPROPSHEETPAGE)0x0) {
      return -0x7fff0001;
    }
    if (param_3 == 0) {
      PropertySheetA(&local_20c);
      return 0;
    }
    iVar1 = FUN_004e9f70(local_24,0x21d,0);
    if ((-1 < iVar1) && (iVar1 = FUN_004eb0f0(local_24,0x25,local_28), -1 < iVar1)) {
      _DAT_00659418 = 1;
      PropertySheetA(&local_20c);
      _DAT_00659418 = 0;
      FUN_004ea040(local_24,0);
    }
  }
  return iVar1;
}


