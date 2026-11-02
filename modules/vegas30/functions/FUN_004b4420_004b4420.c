/* Module: vegas30.exe
   Function: FUN_004b4420
   Address: 004b4420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b4420(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  WPARAM WVar4;
  UINT UVar5;
  LPARAM LVar6;
  
  uVar3 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x4aa);
  EnableWindow(pHVar2,uVar3);
  uVar3 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x4ab);
  EnableWindow(pHVar2,uVar3);
  uVar3 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x4ac);
  EnableWindow(pHVar2,uVar3);
  iVar1 = *param_2;
  if (*(char *)(iVar1 + 0x2088) != '\0') {
    if ((*(int *)(iVar1 + 0x219c) == 0) && (*(int *)(iVar1 + 0x21a4) == 0)) {
      WVar4 = 1;
    }
    else {
      WVar4 = 0;
    }
    LVar6 = 0;
    UVar5 = 0xf1;
    pHVar2 = GetDlgItem(param_1,0x4aa);
    SendMessageA(pHVar2,UVar5,WVar4,LVar6);
    if ((*(int *)(*param_2 + 0x219c) == 0) || (*(int *)(*param_2 + 0x21a4) != 0)) {
      WVar4 = 0;
    }
    else {
      WVar4 = 1;
    }
    LVar6 = 0;
    UVar5 = 0xf1;
    pHVar2 = GetDlgItem(param_1,0x4ab);
    SendMessageA(pHVar2,UVar5,WVar4,LVar6);
    if ((*(int *)(*param_2 + 0x219c) == 0) || (*(int *)(*param_2 + 0x21a4) == 0)) {
      WVar4 = 0;
    }
    else {
      WVar4 = 1;
    }
    LVar6 = 0;
    UVar5 = 0xf1;
    pHVar2 = GetDlgItem(param_1,0x4ac);
    SendMessageA(pHVar2,UVar5,WVar4,LVar6);
    return;
  }
  LVar6 = 0;
  WVar4 = 0;
  UVar5 = 0xf1;
  pHVar2 = GetDlgItem(param_1,0x4aa);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  LVar6 = 0;
  WVar4 = 0;
  UVar5 = 0xf1;
  pHVar2 = GetDlgItem(param_1,0x4ab);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  LVar6 = 0;
  WVar4 = 0;
  UVar5 = 0xf1;
  pHVar2 = GetDlgItem(param_1,0x4ac);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  return;
}


