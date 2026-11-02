/* Module: vegas30.exe
   Function: FUN_00568030
   Address: 00568030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00568030(HWND param_1,undefined4 *param_2)

{
  HWND pHVar1;
  int iVar2;
  HFONT wParam;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  tagRECT local_10;
  
  CheckDlgButton(param_1,0x46f,(uint)(param_2[2] != 0));
  uVar5 = param_2[1];
  uVar4 = *param_2;
  puVar3 = &DAT_00610fc8;
  pHVar1 = GetDlgItem(param_1,0x438);
  SfSetWindowText(pHVar1,puVar3,uVar4,uVar5);
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[0x45] = 0;
  pHVar1 = GetDlgItem(param_1,0x625);
  iVar2 = _SfGetUIFontSize_4(0x6e);
  iVar2 = *(int *)(iVar2 + 4) + -4;
  GetClientRect(pHVar1,&local_10);
  _DAT_00645558 = (local_10.bottom - local_10.top) / 3;
  if (iVar2 < _DAT_00645558) {
    _DAT_00645558 = iVar2;
  }
  _DAT_00645558 = (local_10.bottom - local_10.top) - _DAT_00645558;
  _DAT_0064555c = (local_10.right - local_10.left) / 5;
  if (_DAT_0064555c * 6 <= _DAT_00645558) {
    _DAT_00645558 = _DAT_0064555c * 6;
  }
  _DAT_00645560 = 0;
  _DAT_00645564 = 0;
  _mbscpy(&DAT_00645574,&DAT_00647ab4);
  wParam = CreateFontIndirectA((LOGFONTA *)&DAT_00645558);
  param_2[0x45] = wParam;
  if (wParam != (HFONT)0x0) {
    SendMessageA(pHVar1,0x30,(WPARAM)wParam,0);
  }
  SfSetWindowText(pHVar1,&DAT_00610fc8,*param_2,param_2[1]);
  return 1;
}


