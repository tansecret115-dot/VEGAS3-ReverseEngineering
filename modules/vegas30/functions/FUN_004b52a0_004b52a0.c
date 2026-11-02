/* Module: vegas30.exe
   Function: FUN_004b52a0
   Address: 004b52a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b52a0(HWND param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  uint uVar4;
  WPARAM WVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  
  piVar2 = param_2;
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x14b;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  uVar4 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar3 = GetDlgItem(param_1,0x447);
  EnableWindow(pHVar3,uVar4);
  uVar4 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar3 = GetDlgItem(param_1,0x48e);
  EnableWindow(pHVar3,uVar4);
  iVar1 = *param_2;
  param_2 = (int *)0x0;
  if (*(char *)(iVar1 + 0x2088) == '\0') {
    LVar8 = _SfGetString_8(DAT_00647204,0x6d91);
    WVar7 = 0;
    UVar6 = 0x143;
    pHVar3 = GetDlgItem(param_1,0x447);
    WVar7 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
    LVar8 = 7;
    UVar6 = 0x151;
    pHVar3 = GetDlgItem(param_1,0x447);
    SendMessageA(pHVar3,UVar6,WVar7,LVar8);
    return;
  }
  LVar8 = _SfGetString_8(DAT_00647204,0x6d92);
  WVar7 = 0;
  UVar6 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x447);
  WVar5 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 5;
  UVar6 = 0x151;
  WVar7 = WVar5;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  if (*(int *)(*piVar2 + 0x218c) == 5) {
    param_2 = (int *)WVar5;
  }
  LVar8 = _SfGetString_8(DAT_00647204,0x6d93);
  WVar7 = 0;
  UVar6 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x447);
  WVar5 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 1;
  UVar6 = 0x151;
  WVar7 = WVar5;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  if (*(int *)(*piVar2 + 0x218c) == 1) {
    param_2 = (int *)WVar5;
  }
  LVar8 = _SfGetString_8(DAT_00647204,0x6d94);
  WVar7 = 0;
  UVar6 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x447);
  WVar5 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 2;
  UVar6 = 0x151;
  WVar7 = WVar5;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  if (*(int *)(*piVar2 + 0x218c) == 2) {
    param_2 = (int *)WVar5;
  }
  LVar8 = _SfGetString_8(DAT_00647204,0x6d95);
  WVar7 = 0;
  UVar6 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x447);
  WVar5 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 3;
  UVar6 = 0x151;
  WVar7 = WVar5;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  if (*(int *)(*piVar2 + 0x218c) == 3) {
    param_2 = (int *)WVar5;
  }
  LVar8 = _SfGetString_8(DAT_00647204,0x6d96);
  WVar7 = 0;
  UVar6 = 0x143;
  pHVar3 = GetDlgItem(param_1,0x447);
  WVar7 = SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 4;
  UVar6 = 0x151;
  WVar5 = WVar7;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar5,LVar8);
  if (*(int *)(*piVar2 + 0x218c) != 4) {
    WVar7 = (WPARAM)param_2;
  }
  LVar8 = 0;
  UVar6 = 0x14e;
  pHVar3 = GetDlgItem(param_1,0x447);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  return;
}


