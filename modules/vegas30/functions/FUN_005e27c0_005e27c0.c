/* Module: vegas30.exe
   Function: FUN_005e27c0
   Address: 005e27c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e27c0(HWND param_1,int param_2)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  WPARAM WVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined1 *lParam;
  uint lParam_00;
  uint local_12c;
  uint local_128;
  uint *local_124;
  WPARAM local_120;
  uint local_11c;
  uint local_118 [5];
  undefined1 local_104 [260];
  
  local_11c = *(uint *)(param_2 + 0x124);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x14b;
  local_118[0] = 8;
  local_118[1] = 0x10;
  local_118[2] = 0x18;
  local_118[3] = 0x20;
  local_118[4] = 0x40;
  pHVar2 = GetDlgItem(param_1,0x456);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  local_120 = 0;
  if (DAT_0064b4e0 == 0) {
    iVar3 = FUN_00601ab0(&local_12c,&local_128,1);
    if (iVar3 < 0) {
      DAT_0064b4f0 = 1;
    }
    else if ((int)DAT_0064b4e0 <= (int)(local_128 & 0xff)) {
      DAT_0064b4f0 = 0;
      _DAT_0064b4f4 = local_12c;
      DAT_0064b4e0 = local_128 & 0xff;
    }
  }
  local_12c = 0x10;
  if (0x3f < (int)DAT_0064b4e0) {
    local_12c = 0x18;
  }
  local_124 = local_118;
  local_128 = 0;
  do {
    uVar1 = *local_124;
    if (local_12c < uVar1) break;
    SfPrintF(local_104,&DAT_0061052c,uVar1);
    lParam = local_104;
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x456);
    WVar4 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)lParam);
    UVar5 = 0x151;
    WVar6 = WVar4;
    lParam_00 = uVar1;
    pHVar2 = GetDlgItem(param_1,0x456);
    SendMessageA(pHVar2,UVar5,WVar6,lParam_00);
    if (local_11c == uVar1) {
      local_120 = WVar4;
    }
    local_128 = local_128 + 1;
    local_124 = local_124 + 1;
  } while (local_128 < 5);
  LVar7 = 0;
  UVar5 = 0x14e;
  WVar6 = local_120;
  pHVar2 = GetDlgItem(param_1,0x456);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  return;
}


