/* Module: vegas30.exe
   Function: FUN_004f3610
   Address: 004f3610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3610(HWND param_1,int *param_2)

{
  uint uVar1;
  HWND pHVar2;
  uint uVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  BOOL BVar7;
  _MEMORYSTATUS local_20;
  
  uVar1 = __alldiv(*(undefined4 *)(*param_2 + 0x7c8),*(undefined4 *)(*param_2 + 0x7cc),10000,0);
  LVar6 = 1;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar2 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar2,UVar4,WVar5,LVar6);
  LVar6 = 200;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar2 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar2,UVar4,WVar5,LVar6);
  WVar5 = 1;
  UVar4 = 0x610;
  uVar3 = uVar1 / 10;
  pHVar2 = GetDlgItem(param_1,0x435);
  SendMessageA(pHVar2,UVar4,WVar5,uVar3);
  SfSetDlgItemText(param_1,0x436,&DAT_00619b30,uVar1 / 10);
  GlobalMemoryStatus(&local_20);
  uVar1 = (local_20.dwTotalPhys >> 0x14) - 0x10 >> 1;
  uVar3 = *(uint *)(*param_2 + 0xe4c) >> 0x14;
  SfSetDlgItemText(param_1,0x438,&DAT_00619b28,uVar3);
  if (8 < uVar1) {
    LVar6 = 8;
    WVar5 = 0;
    UVar4 = 0x60e;
    pHVar2 = GetDlgItem(param_1,0x437);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    WVar5 = 0;
    UVar4 = 0x60f;
    pHVar2 = GetDlgItem(param_1,0x437);
    SendMessageA(pHVar2,UVar4,WVar5,uVar1);
    WVar5 = 1;
    UVar4 = 0x610;
    pHVar2 = GetDlgItem(param_1,0x437);
    SendMessageA(pHVar2,UVar4,WVar5,uVar3);
    return;
  }
  BVar7 = 0;
  pHVar2 = GetDlgItem(param_1,0x437);
  EnableWindow(pHVar2,BVar7);
  BVar7 = 0;
  pHVar2 = GetDlgItem(param_1,0x438);
  EnableWindow(pHVar2,BVar7);
  return;
}


