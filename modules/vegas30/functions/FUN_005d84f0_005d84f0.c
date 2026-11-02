/* Module: vegas30.exe
   Function: FUN_005d84f0
   Address: 005d84f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d84f0(HWND param_1,int param_2)

{
  undefined4 uVar1;
  HWND pHVar2;
  uint uVar3;
  UINT UVar4;
  WPARAM WVar5;
  undefined1 *lParam;
  LPARAM LVar6;
  undefined4 *local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [80];
  
  uVar3 = 0;
  local_88 = &local_80;
  local_84 = 0;
  local_80 = 0x526f;
  local_7c = 1;
  local_78 = 0x5270;
  local_74 = 2;
  local_70 = 0x5271;
  local_6c = 4;
  local_68 = 0x5272;
  local_64 = 8;
  local_60 = 0x5273;
  local_5c = 0x10;
  local_58 = 0x5274;
  local_54 = 0x20;
  do {
    uVar1 = _SfGetString_8(DAT_00647204,*local_88);
    SfPrintF(local_50,uVar1);
    if (local_88[1] == (uint)*(ushort *)(param_2 + 0xd28)) {
      local_84 = uVar3;
    }
    lParam = local_50;
    WVar5 = 0;
    UVar4 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x434);
    WVar5 = SendMessageA(pHVar2,UVar4,WVar5,(LPARAM)lParam);
    LVar6 = local_88[1];
    UVar4 = 0x151;
    pHVar2 = GetDlgItem(param_1,0x434);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    uVar3 = uVar3 + 1;
    local_88 = local_88 + 2;
  } while (uVar3 < 6);
  LVar6 = 0;
  UVar4 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0x434);
  SendMessageA(pHVar2,UVar4,local_84,LVar6);
  return;
}


