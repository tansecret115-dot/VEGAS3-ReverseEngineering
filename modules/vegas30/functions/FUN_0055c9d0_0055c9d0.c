/* Module: vegas30.exe
   Function: FUN_0055c9d0
   Address: 0055c9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055c9d0(HWND param_1,undefined4 param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  LPCSTR lpString;
  int iVar5;
  UINT Msg;
  WPARAM wParam;
  CHAR *lParam;
  int local_65c;
  uint local_658;
  int local_654;
  uchar local_650 [519];
  undefined1 local_449;
  CHAR local_448 [260];
  uchar local_344 [260];
  undefined1 local_240 [576];
  
  iVar5 = 0;
  local_658 = 0;
  iVar1 = FUN_0055d210(param_2);
  local_654 = iVar1;
  if (iVar1 < 1) goto LAB_0055cbc5;
  lParam = local_448;
  wParam = 0x104;
  Msg = 0x466;
  local_65c = 1;
  pHVar2 = GetParent(param_1);
  LVar3 = SendMessageA(pHVar2,Msg,wParam,(LPARAM)lParam);
  if (LVar3 < 1) goto LAB_0055cbc5;
  _SfAddSlashToPathName_8(local_448,0x104);
  if (iVar1 < 1) {
LAB_0055cb05:
    lstrcpynA((LPSTR)local_650,local_448,0x208);
    local_449 = 0;
    FUN_0055d260(local_344,param_2,0,0x104);
    iVar1 = lstrlenA((LPCSTR)local_650);
    _mbsncat(local_650,local_344,0x207 - iVar1);
    FUN_004ebc10(local_650,&local_65c,local_240);
  }
  else {
    do {
      if (local_658 != 0) break;
      lstrcpynA((LPSTR)local_650,local_448,0x208);
      local_449 = 0;
      FUN_0055d260(local_344,param_2,iVar5,0x104);
      iVar1 = lstrlenA((LPCSTR)local_650);
      _mbsncat(local_650,local_344,0x207 - iVar1);
      iVar1 = FUN_004ebc10(local_650,&local_65c,local_240);
      if (-1 < iVar1) {
        local_658 = (uint)(local_65c == 6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_654);
    if (iVar5 != 1) goto LAB_0055cb05;
  }
  if ((local_65c < 2) || (5 < local_65c)) {
    uVar4 = FUN_0055d1e0(local_65c);
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,uVar4);
    SetDlgItemTextA(param_1,0x3ea,lpString);
  }
  else {
    FUN_0055cc00(param_1,local_650,local_654);
  }
LAB_0055cbc5:
  pHVar2 = GetDlgItem(param_1,0x46f);
  EnableWindow(pHVar2,local_658);
  return 1;
}


