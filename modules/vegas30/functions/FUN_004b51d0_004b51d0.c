/* Module: vegas30.exe
   Function: FUN_004b51d0
   Address: 004b51d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b51d0(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  PROPSHEETHEADERA_V2 *pPVar2;
  PROPSHEETHEADERA_V2 *local_64;
  undefined1 *local_60;
  undefined1 local_5c [40];
  PROPSHEETHEADERA_V2 local_34;
  
  pPVar2 = &local_34;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    pPVar2->dwSize = 0;
    pPVar2 = (PROPSHEETHEADERA_V2 *)&pPVar2->dwFlags;
  }
  local_34.dwSize = 0x34;
  local_34.dwFlags = 0;
  local_34.hwndParent = param_1;
  local_34.hInstance = DAT_006471fc;
  local_34.pszCaption = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d99);
  local_60 = local_5c;
  local_64 = &local_34;
  local_34.u3.ppsp = (LPCPROPSHEETPAGEA)local_5c;
  local_34.nPages = 0;
  local_34.u2.nStartPage = 0;
  iVar1 = FUN_004b5020(&LAB_004b4ff0,&local_64,param_2,param_3);
  if (iVar1 == 0) {
    PropertySheetA(&local_34);
    return 1;
  }
  return 0;
}


