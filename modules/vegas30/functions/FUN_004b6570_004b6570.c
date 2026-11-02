/* Module: vegas30.exe
   Function: FUN_004b6570
   Address: 004b6570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b6570(HWND param_1)

{
  HWND pHVar1;
  int *piVar2;
  UINT UVar3;
  WPARAM WVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x48f);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  while (WVar4 != 0) {
    WVar4 = WVar4 - 1;
    LVar6 = 0;
    UVar3 = 0x150;
    WVar5 = WVar4;
    pHVar1 = GetDlgItem(param_1,0x48f);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar5,LVar6);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x14b;
  pHVar1 = GetDlgItem(param_1,0x48f);
  SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x452);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  while (WVar4 != 0) {
    WVar4 = WVar4 - 1;
    LVar6 = 0;
    UVar3 = 0x150;
    WVar5 = WVar4;
    pHVar1 = GetDlgItem(param_1,0x452);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar5,LVar6);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x14b;
  pHVar1 = GetDlgItem(param_1,0x452);
  SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x454);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  while (WVar4 != 0) {
    WVar4 = WVar4 - 1;
    LVar6 = 0;
    UVar3 = 0x150;
    WVar5 = WVar4;
    pHVar1 = GetDlgItem(param_1,0x454);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar5,LVar6);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x14b;
  pHVar1 = GetDlgItem(param_1,0x454);
  SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  if (DAT_0064cb10 != (int *)0x0) {
    (**(code **)(*DAT_0064cb10 + 8))(DAT_0064cb10);
  }
  DAT_0064cb10 = (int *)0x0;
  return;
}


