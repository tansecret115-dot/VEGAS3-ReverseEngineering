/* Module: vidcap30.exe
   Function: FUN_004531c0
   Address: 004531c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004531c0(HWND param_1,int param_2)

{
  LPARAM LVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  UINT UVar5;
  WPARAM WVar6;
  int lParam;
  uint local_3c;
  int local_38 [14];
  
  uVar4 = 0;
  local_3c = 0;
  local_38[1] = 0xffffffff;
  local_38[2] = 0xa2c7;
  local_38[3] = 1;
  local_38[4] = 0xa2c8;
  local_38[5] = 2;
  local_38[6] = 0xa2c9;
  local_38[7] = 3;
  local_38[8] = 0x9ce5;
  local_38[9] = 4;
  local_38[10] = 0x9ce6;
  local_38[0xb] = 6;
  local_38[0xc] = 0x9ce8;
  local_38[0xd] = 8;
  piVar3 = local_38 + 1;
  do {
    if (*piVar3 == *(int *)(param_2 + 0x38)) {
      local_3c = uVar4;
    }
    LVar1 = _SfGetString_8(DAT_005ba2a0,piVar3[-1]);
    WVar6 = 0;
    UVar5 = 0x143;
    pHVar2 = GetDlgItem(param_1,0x442);
    WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar1);
    lParam = *piVar3;
    UVar5 = 0x151;
    pHVar2 = GetDlgItem(param_1,0x442);
    SendMessageA(pHVar2,UVar5,WVar6,lParam);
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 2;
  } while (uVar4 < 7);
  LVar1 = 0;
  UVar5 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0x442);
  SendMessageA(pHVar2,UVar5,local_3c,LVar1);
  return;
}


