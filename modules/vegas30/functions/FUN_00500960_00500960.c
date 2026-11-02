/* Module: vegas30.exe
   Function: FUN_00500960
   Address: 00500960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00500960(int param_1)

{
  HWND pHVar1;
  uint uVar2;
  UINT UVar3;
  WPARAM WVar4;
  undefined1 *lParam;
  uint lParam_00;
  LPARAM lParam_01;
  undefined1 **local_17c;
  undefined1 *local_178;
  undefined1 *local_174;
  undefined1 *local_170;
  undefined1 *local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined1 local_144 [20];
  undefined1 local_130 [20];
  undefined1 local_11c [20];
  undefined1 local_108 [20];
  undefined1 local_f4 [20];
  undefined1 local_e0 [20];
  undefined1 local_cc [20];
  undefined1 local_b8 [20];
  undefined1 local_a4 [20];
  undefined1 local_90 [20];
  undefined1 local_7c [20];
  undefined1 local_68 [20];
  undefined1 local_54 [20];
  undefined1 local_40 [64];
  
  _SfLoadString_16(DAT_00647204,0x4f68,local_cc,0x14);
  _SfLoadString_16(DAT_00647204,0x4f69,local_68,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6a,local_11c,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6b,local_a4,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6c,local_f4,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6d,local_54,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6e,local_144,0x14);
  _SfLoadString_16(DAT_00647204,0x4f6f,local_7c,0x14);
  _SfLoadString_16(DAT_00647204,0x4f70,local_130,0x14);
  _SfLoadString_16(DAT_00647204,0x4f71,local_108,0x14);
  _SfLoadString_16(DAT_00647204,0x4f72,local_e0,0x14);
  _SfLoadString_16(DAT_00647204,0x4f73,local_b8,0x14);
  _SfLoadString_16(DAT_00647204,0x4f74,local_90,0x14);
  local_178 = local_cc;
  local_174 = local_68;
  local_170 = local_11c;
  local_16c = local_a4;
  local_168 = local_f4;
  local_164 = local_54;
  local_160 = local_144;
  local_15c = local_7c;
  local_158 = local_130;
  local_154 = local_108;
  local_150 = local_e0;
  local_14c = local_b8;
  local_148 = local_90;
  local_17c = &local_178;
  uVar2 = 0;
  do {
    SfPrintF(local_40,*local_17c);
    lParam = local_40;
    WVar4 = 0;
    UVar3 = 0x143;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x434);
    WVar4 = SendMessageA(pHVar1,UVar3,WVar4,(LPARAM)lParam);
    UVar3 = 0x151;
    lParam_00 = uVar2;
    pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x434);
    SendMessageA(pHVar1,UVar3,WVar4,lParam_00);
    uVar2 = uVar2 + 1;
    local_17c = local_17c + 1;
  } while (uVar2 < 0xd);
  WVar4 = *(WPARAM *)(param_1 + 0x14);
  lParam_01 = 0;
  UVar3 = 0x14e;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x434);
  SendMessageA(pHVar1,UVar3,WVar4,lParam_01);
  return;
}


