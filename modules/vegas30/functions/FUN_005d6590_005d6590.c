/* Module: vegas30.exe
   Function: FUN_005d6590
   Address: 005d6590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d6590(HWND param_1,int param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  UINT UVar3;
  undefined *puVar4;
  undefined4 uVar5;
  LPARAM LVar6;
  undefined4 uVar7;
  
  WVar2 = *(WPARAM *)(param_2 + 0xd70);
  LVar6 = 0;
  UVar3 = 0x14e;
  pHVar1 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar1,UVar3,WVar2,LVar6);
  uVar7 = *(undefined4 *)(param_2 + 0xd74);
  puVar4 = &DAT_00612804;
  pHVar1 = GetDlgItem(param_1,0x4a8);
  SfSetWindowText(pHVar1,puVar4,uVar7);
  uVar7 = *(undefined4 *)(param_2 + 0xd78);
  puVar4 = &DAT_00612804;
  pHVar1 = GetDlgItem(param_1,0x4aa);
  SfSetWindowText(pHVar1,puVar4,uVar7);
  WVar2 = *(WPARAM *)(param_2 + 0xd7c);
  LVar6 = 0;
  UVar3 = 0x14e;
  pHVar1 = GetDlgItem(param_1,0x436);
  SendMessageA(pHVar1,UVar3,WVar2,LVar6);
  LVar6 = 0;
  WVar2 = *(int *)(param_2 + 0xd88) - 1;
  UVar3 = 0x14e;
  pHVar1 = GetDlgItem(param_1,0x43c);
  SendMessageA(pHVar1,UVar3,WVar2,LVar6);
  WVar2 = FUN_005d66e0(*(undefined4 *)(param_2 + 0xd80),*(undefined4 *)(param_2 + 0xd84));
  if (WVar2 == 0xffffffff) {
    uVar7 = *(undefined4 *)(param_2 + 0xd84);
    uVar5 = *(undefined4 *)(param_2 + 0xd80);
    puVar4 = &DAT_0061aedc;
    pHVar1 = GetDlgItem(param_1,0x438);
    SfSetWindowText(pHVar1,puVar4,uVar5,uVar7);
  }
  else {
    LVar6 = 0;
    UVar3 = 0x14e;
    pHVar1 = GetDlgItem(param_1,0x438);
    SendMessageA(pHVar1,UVar3,WVar2,LVar6);
  }
  WVar2 = FUN_005d6780(*(undefined4 *)(param_2 + 0xda0),*(undefined4 *)(param_2 + 0xda4));
  if (WVar2 != 0xffffffff) {
    LVar6 = 0;
    UVar3 = 0x14e;
    pHVar1 = GetDlgItem(param_1,0x4a9);
    SendMessageA(pHVar1,UVar3,WVar2,LVar6);
    return;
  }
  uVar7 = *(undefined4 *)(param_2 + 0xda4);
  uVar5 = *(undefined4 *)(param_2 + 0xda0);
  puVar4 = &DAT_0062a218;
  pHVar1 = GetDlgItem(param_1,0x4a9);
  SfSetWindowText(pHVar1,puVar4,uVar5,uVar7);
  return;
}


