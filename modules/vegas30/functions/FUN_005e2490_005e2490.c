/* Module: vegas30.exe
   Function: FUN_005e2490
   Address: 005e2490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e2490(HWND param_1,int param_2)

{
  bool bVar1;
  HWND pHVar2;
  int iVar3;
  WPARAM WVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint lParam;
  uint lParam_00;
  WPARAM local_150;
  uint *local_148;
  uint local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  uint local_130 [11];
  undefined1 local_104 [260];
  
  lParam_00 = *(uint *)(param_2 + 0x35c);
  local_138 = *(uint *)(param_2 + 0x8c0);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x14b;
  local_130[0] = 8000;
  local_130[1] = 0x2b11;
  local_130[2] = 0x5622;
  local_130[3] = 32000;
  local_130[4] = 0xac44;
  local_130[5] = 48000;
  local_130[6] = 0x15888;
  local_130[7] = 96000;
  local_130[8] = 0x2b110;
  local_130[9] = 0x2ee00;
  local_130[10] = 200000;
  pHVar2 = GetDlgItem(param_1,0x455);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  local_150 = 0;
  bVar1 = false;
  local_134 = 0;
  if (DAT_0064b4e0 == 0) {
    iVar3 = FUN_00601ab0(&local_13c,&local_140,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else if ((int)DAT_0064b4e0 <= (int)(local_140 & 0xff)) {
      DAT_0064b4f0 = 0;
      _DAT_0064b4f4 = local_13c;
      DAT_0064b4e0 = local_140 & 0xff;
    }
  }
  local_13c = 48000;
  if (0x3f < (int)DAT_0064b4e0) {
    local_13c = 96000;
  }
  local_148 = local_130;
  local_140 = 0;
  do {
    if (local_13c < *local_148) break;
    if ((lParam_00 < *local_148) && (!bVar1)) {
      SfPrintF(local_104,&DAT_00611f6c,lParam_00);
      puVar8 = local_104;
      WVar6 = 0;
      UVar5 = 0x143;
      pHVar2 = GetDlgItem(param_1,0x455);
      local_150 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)puVar8);
      UVar5 = 0x151;
      WVar6 = local_150;
      uVar9 = lParam_00;
      pHVar2 = GetDlgItem(param_1,0x455);
      SendMessageA(pHVar2,UVar5,WVar6,uVar9);
      bVar1 = true;
    }
    if (((local_138 < *local_148) && (local_134 == 0)) && (local_138 != lParam_00)) {
      SfPrintF(local_104,&DAT_00611f6c,local_138);
      puVar8 = local_104;
      WVar6 = 0;
      UVar5 = 0x143;
      pHVar2 = GetDlgItem(param_1,0x455);
      WVar4 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)puVar8);
      UVar5 = 0x151;
      WVar6 = WVar4;
      uVar9 = local_138;
      pHVar2 = GetDlgItem(param_1,0x455);
      SendMessageA(pHVar2,UVar5,WVar6,uVar9);
      local_134 = 1;
      if (!bVar1) {
        local_150 = WVar4;
      }
    }
    uVar9 = *local_148;
    SfPrintF(local_104,&DAT_00611f6c,uVar9);
    puVar8 = local_104;
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x455);
    WVar4 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)puVar8);
    UVar5 = 0x151;
    WVar6 = WVar4;
    lParam = uVar9;
    pHVar2 = GetDlgItem(param_1,0x455);
    SendMessageA(pHVar2,UVar5,WVar6,lParam);
    if ((local_138 == uVar9) && (local_134 = 1, !bVar1)) {
      local_150 = WVar4;
    }
    if (lParam_00 == uVar9) {
      bVar1 = true;
      local_150 = WVar4;
    }
    local_140 = local_140 + 1;
    local_148 = local_148 + 1;
  } while (local_140 < 0xb);
  if (!bVar1) {
    SfPrintF(local_104,&DAT_00611f6c,lParam_00);
    puVar8 = local_104;
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x455);
    local_150 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)puVar8);
    UVar5 = 0x151;
    WVar6 = local_150;
    pHVar2 = GetDlgItem(param_1,0x455);
    SendMessageA(pHVar2,UVar5,WVar6,lParam_00);
  }
  LVar7 = 0;
  UVar5 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0x455);
  SendMessageA(pHVar2,UVar5,local_150,LVar7);
  return;
}


