/* Module: sctplug.dll
   Function: FUN_0040a040
   Address: 0040a040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a040(HWND param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  LPCSTR local_108 [2];
  uchar local_100 [4];
  undefined1 local_fc;
  undefined1 local_fa;
  undefined1 local_de;
  undefined1 local_d5;
  
  iVar2 = FUN_0040a690(param_2 + 4,0x2b);
  if (iVar2 == 0) {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 4),0x2c);
    local_d5 = 0;
    FUN_0040a630((char *)local_100);
  }
  else {
    local_100[0] = '\0';
  }
  SetDlgItemTextA(param_1,0x4fb,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 0x2b;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4fb);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  iVar2 = FUN_0040a690(param_2 + 0x10b,0x22);
  if (iVar2 == 0) {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x10b),0x23);
    local_de = 0;
    FUN_0040a630((char *)local_100);
  }
  else {
    local_100[0] = '\0';
  }
  SetDlgItemTextA(param_1,0x4f5,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 0x22;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4f5);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  iVar2 = FUN_0040a690(param_2 + 0x12d,0x22);
  if ((iVar2 != 0) == true) {
    local_100[0] = '\0';
  }
  else {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x12d),0x23);
    local_de = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x4f6,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 0x22;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4f6);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if ((*(char *)(param_2 + 0x2f) == '\0') || (iVar2 = FUN_0040a690(param_2 + 0x2f,4), iVar2 != 0)) {
    _mbscpy(local_100,"0000");
  }
  else {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x2f),5);
    local_fc = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x4fc,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 4;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4fc);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if ((*(char *)(param_2 + 0x158) == '\0') || (iVar2 = FUN_0040a690(param_2 + 0x158,6), iVar2 != 0))
  {
    FUN_0040ffe0((uint *)local_108);
    FUN_00409aa0((uint *)local_108,(LPSTR)local_100);
  }
  else {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x158),7);
    local_fa = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x4fa,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4fa);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if ((*(char *)(param_2 + 0x14f) == '\0') || (iVar2 = FUN_0040a690(param_2 + 0x14f,2), iVar2 != 0))
  {
    _mbscpy(local_100,"00");
  }
  else {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x14f),3);
    local_100[2] = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x4f7,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 2;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x4f7);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if ((*(char *)(param_2 + 0x41) == '\0') || (iVar2 = FUN_0040a690(param_2 + 0x41,6), iVar2 != 0)) {
    _mbscpy(local_100,(uchar *)"000000");
  }
  else {
    lstrcpynA((LPSTR)local_100,(LPCSTR)(param_2 + 0x41),7);
    local_fa = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x50c,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x50c);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  local_108[0] = (LPCSTR)(param_2 + 0x47);
  if ((*local_108[0] == '\0') || (iVar2 = FUN_0040a690((int)local_108[0],6), iVar2 != 0)) {
    _mbscpy(local_100,(uchar *)"000000");
  }
  else {
    lstrcpynA((LPSTR)local_100,local_108[0],7);
    local_fa = 0;
    FUN_0040a630((char *)local_100);
  }
  SetDlgItemTextA(param_1,0x50e,(LPCSTR)local_100);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x50e);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  pHVar3 = GetDlgItem(param_1,0x50d);
  WVar6 = SendMessageA(pHVar3,0x143,0,0x432494);
  SendMessageA(pHVar3,0x151,WVar6,0);
  iVar2 = 0;
  do {
    wsprintfA((LPSTR)local_100,"%d",iVar2);
    WVar6 = SendMessageA(pHVar3,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar3,0x151,WVar6,(uint)(byte)((byte)iVar2 | 0x80));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  SendMessageA(pHVar3,0x14e,0,0);
  WVar6 = 0;
  LVar4 = SendMessageA(pHVar3,0x146,0,0);
  if (0 < LVar4) {
    do {
      LVar4 = SendMessageA(pHVar3,0x150,WVar6,0);
      if ((char)LVar4 == *(char *)(param_2 + 0x4d)) {
        SendMessageA(pHVar3,0x14e,WVar6,0);
        break;
      }
      WVar6 = WVar6 + 1;
      LVar4 = SendMessageA(pHVar3,0x146,0,0);
    } while ((int)WVar6 < LVar4);
  }
  pHVar3 = GetDlgItem(param_1,0x50f);
  WVar6 = SendMessageA(pHVar3,0x143,0,0x432494);
  SendMessageA(pHVar3,0x151,WVar6,0);
  iVar2 = 0;
  do {
    wsprintfA((LPSTR)local_100,"%d",iVar2);
    WVar6 = SendMessageA(pHVar3,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar3,0x151,WVar6,(uint)(byte)((byte)iVar2 | 0x80));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  SendMessageA(pHVar3,0x14e,0,0);
  WVar6 = 0;
  LVar4 = SendMessageA(pHVar3,0x146,0,0);
  if (0 < LVar4) {
    do {
      LVar4 = SendMessageA(pHVar3,0x150,WVar6,0);
      if ((char)LVar4 == *(char *)(param_2 + 0x4e)) {
        SendMessageA(pHVar3,0x14e,WVar6,0);
        break;
      }
      WVar6 = WVar6 + 1;
      LVar4 = SendMessageA(pHVar3,0x146,0,0);
    } while ((int)WVar6 < LVar4);
  }
  pHVar3 = GetDlgItem(param_1,0x4f8);
  WVar6 = SendMessageA(pHVar3,0x143,0,0x432488);
  SendMessageA(pHVar3,0x151,WVar6,0x46);
  WVar6 = SendMessageA(pHVar3,0x143,0,0x432480);
  SendMessageA(pHVar3,0x151,WVar6,0x43);
  uVar1 = *(uchar *)(param_2 + 0x151);
  if (uVar1 == 'C') {
    WVar6 = 0;
  }
  else if (uVar1 == 'F') {
    WVar6 = 1;
  }
  else if (uVar1 == '\0') {
    WVar6 = 0;
  }
  else {
    local_100[1] = 0;
    local_100[0] = uVar1;
    WVar6 = SendMessageA(pHVar3,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar3,0x151,WVar6,(int)*(char *)(param_2 + 0x151));
  }
  SendMessageA(pHVar3,0x14e,WVar6,0);
  return;
}


