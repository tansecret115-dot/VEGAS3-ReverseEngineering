/* Module: vegas30.exe
   Function: FUN_005d8670
   Address: 005d8670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d8670(HWND param_1,int param_2)

{
  LPARAM LVar1;
  HWND pHVar2;
  int iVar3;
  int *piVar4;
  UINT UVar5;
  WPARAM WVar6;
  char *lParam;
  uint local_70;
  uint local_6c;
  int local_68 [26];
  
  local_6c = 0;
  local_68[1] = 0;
  local_68[2] = 0x5276;
  local_68[3] = 1;
  local_68[4] = 0x5277;
  local_68[5] = 2;
  local_68[6] = 0x5278;
  local_68[7] = 3;
  local_68[8] = 0x5279;
  local_68[9] = 4;
  local_68[10] = 0x527a;
  local_68[0xb] = 5;
  local_68[0xc] = 0x5280;
  local_68[0xd] = 0xf;
  local_68[0xe] = 0x5281;
  local_68[0xf] = 0x10;
  local_68[0x10] = 0x527f;
  local_68[0x11] = 10;
  local_68[0x12] = 0x527e;
  local_68[0x13] = 9;
  local_68[0x14] = 0x527b;
  local_68[0x15] = 6;
  local_68[0x16] = 0x527d;
  local_68[0x17] = 8;
  local_68[0x18] = 0x527c;
  local_68[0x19] = 7;
  local_70 = 0;
  piVar4 = local_68 + 1;
  do {
    if (*piVar4 == *(int *)(param_2 + 0xd08)) {
      local_6c = local_70;
    }
    LVar1 = _SfGetString_8(DAT_00647204,piVar4[-1]);
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x435);
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar1);
    iVar3 = *piVar4;
    UVar5 = 0x151;
    pHVar2 = GetDlgItem(param_1,0x435);
    SendMessageA(pHVar2,UVar5,WVar6,iVar3);
    piVar4 = piVar4 + 2;
    local_70 = local_70 + 1;
  } while (local_70 < 0xd);
  iVar3 = FUN_0043f250();
  if (iVar3 != 0) {
    if (*(int *)(param_2 + 0xd08) == 0x11) {
      local_6c = local_70;
    }
    lParam = "Audio CD Time";
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x435);
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)lParam);
    LVar1 = 0x11;
    UVar5 = 0x151;
    pHVar2 = GetDlgItem(param_1,0x435);
    SendMessageA(pHVar2,UVar5,WVar6,LVar1);
  }
  LVar1 = 0;
  UVar5 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar2,UVar5,local_6c,LVar1);
  return;
}


