/* Module: vegas30.exe
   Function: FUN_004f2ee0
   Address: 004f2ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f2ee0(HWND__ *param_1,HWND param_2,uint param_3,int param_4,int *param_5)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  UINT UVar4;
  LRESULT LVar5;
  HWND pHVar6;
  char *pcVar7;
  WPARAM wParam;
  uint uVar8;
  LPARAM LVar9;
  undefined4 local_14c;
  undefined4 local_148;
  char local_144 [64];
  uchar local_104 [260];
  
  local_14c = 0x47f;
  local_148 = 0x480;
  if (param_3 < 0x47f) {
    if (param_3 == 0x47e) {
      UVar4 = IsDlgButtonChecked(param_1,0x47e);
      _SfDlgEnableControls_16(param_1,&local_14c,2,UVar4);
      LVar9 = 0;
      UVar4 = 0x468;
      pHVar6 = GetParent(param_1);
      SendMessageA(pHVar6,UVar4,(WPARAM)param_1,LVar9);
      param_5[2] = 1;
      return 1;
    }
    if (param_3 == 0x41d) {
      FUN_004f2c60(param_1,param_5);
      return 1;
    }
    if (param_3 != 0x41f) {
      return 1;
    }
    _mbscpy(local_104,(uchar *)(*param_5 + 0x300));
    pcVar7 = (char *)(*param_5 + 0x300);
    uVar8 = 0x104;
    pcVar1 = (char *)_SfGetString_8(DAT_00647204,0xbe);
    lVar2 = SfSelectDirectoryDlg(param_1,pcVar1,pcVar7,uVar8);
    if (lVar2 < 0) {
      return 1;
    }
    SetDlgItemTextA(param_1,0x445,(LPCSTR)(*param_5 + 0x300));
    local_144[0] = '\0';
    SfFormatDiskFreeSpace((char *)(*param_5 + 0x300),local_144);
    SetDlgItemTextA(param_1,0x482,local_144);
    iVar3 = lstrcmpiA((LPCSTR)local_104,(LPCSTR)(*param_5 + 0x300));
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    if (param_3 != 0x47f) {
      if (param_3 != 0xc4c6) {
        return 1;
      }
      if (param_4 != 1) {
        return 1;
      }
      LVar9 = 0;
      wParam = 0;
      UVar4 = 0x147;
      pHVar6 = GetDlgItem(param_1,0xc4c6);
      LVar5 = SendMessageA(pHVar6,UVar4,wParam,LVar9);
      if (*(int *)(*param_5 + 0x1ee0) == LVar5) {
        return 1;
      }
      *(LRESULT *)(*param_5 + 0x1ee0) = LVar5;
      _mbscpy((uchar *)(*param_5 + 0x1ddc),(&PTR_DAT_00642d18)[LVar5]);
      LVar9 = 0;
      UVar4 = 0x468;
      pHVar6 = GetParent(param_1);
      SendMessageA(pHVar6,UVar4,(WPARAM)param_1,LVar9);
      param_5[2] = 1;
      return 1;
    }
    if (param_4 != 0x300) {
      return 1;
    }
    GetWindowTextA(param_2,local_144,0x40);
    iVar3 = _SfTextToLongToken_8(local_144,0);
    if (iVar3 == *(int *)(*param_5 + 0x464)) {
      return 1;
    }
  }
  LVar9 = 0;
  UVar4 = 0x468;
  pHVar6 = GetParent(param_1);
  SendMessageA(pHVar6,UVar4,(WPARAM)param_1,LVar9);
  param_5[2] = 1;
  return 1;
}


