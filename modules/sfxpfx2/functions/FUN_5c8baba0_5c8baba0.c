/* Module: sfxpfx2.dll
   Function: FUN_5c8baba0
   Address: 5c8baba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8baba0(int param_1,HWND param_2,ULONG_PTR param_3,int param_4,int *param_5,uchar *param_6)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ULONG_PTR *pUVar6;
  UINT local_13c;
  undefined4 local_138;
  ULONG_PTR local_134 [3];
  tagPOINT local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char *local_108;
  uchar local_104 [260];
  
  if (param_6 == (uchar *)0x0) {
    FUN_5c8baaa0(param_1,(LPSTR)local_104,0x104);
  }
  else {
    _mbscpy(local_104,param_6);
  }
  if (local_104[0] == '\0') {
    return 0;
  }
  if ((param_1 == 0) && (param_5 == (int *)0x0)) {
    param_3 = 0;
    local_13c = 2;
  }
  else {
    if (param_4 == -1) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_1 == 0) {
      local_13c = 8;
    }
    else if (param_1 == 1) {
      local_13c = 0xe;
    }
    iVar5 = 0;
    iVar4 = *param_5;
    piVar3 = param_5;
    while (iVar4 != 0) {
      if (iVar4 == param_4) {
        param_3 = param_5[iVar5 * 2 + 1];
        break;
      }
      piVar1 = piVar3 + 2;
      piVar3 = piVar3 + 2;
      iVar5 = iVar5 + 1;
      iVar4 = *piVar1;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  if (param_1 == 0) {
    BVar2 = WinHelpA(param_2,(LPCSTR)local_104,local_13c,param_3);
    return BVar2;
  }
  if (param_1 != 1) {
    return 0;
  }
  pUVar6 = local_134;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pUVar6 = 0;
    pUVar6 = pUVar6 + 1;
  }
  local_138 = 0x34;
  local_134[1] = param_3;
  GetCursorPos(&local_128);
  local_120 = 0xffffffff;
  local_11c = 0xffffffff;
  local_118 = 0xffffffff;
  local_114 = 0xffffffff;
  local_110 = 0xffffffff;
  local_10c = 0xffffffff;
  local_108 = "MS Shell Dlg, 8";
  _mbscat(local_104,(uchar *)"::/Popup.txt");
  iVar4 = FUN_5c8bad50(param_2,local_104,local_13c,&local_138);
  SetFocus(param_2);
  return iVar4;
}


