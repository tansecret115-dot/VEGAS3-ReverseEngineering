/* Module: vegas30.exe
   Function: FUN_004b4aa0
   Address: 004b4aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b4aa0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  uint uVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  uVar2 = (uint)(*(char *)(*param_2 + 0x21b0) != '\0');
  pHVar1 = GetDlgItem(param_1,0x465);
  EnableWindow(pHVar1,uVar2);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x465);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  uVar2 = (uint)(*(char *)(*param_2 + 0x21b0) != '\0');
  pHVar1 = GetDlgItem(param_1,0x4ad);
  EnableWindow(pHVar1,uVar2);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x4ad);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  uVar2 = (uint)(*(char *)(*param_2 + 0x21b0) != '\0');
  pHVar1 = GetDlgItem(param_1,0x4ae);
  EnableWindow(pHVar1,uVar2);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x4ae);
  SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (*(char *)(*param_2 + 0x21b0) != '\0') {
    LVar5 = 0;
    uVar2 = (uint)(*(int *)(*param_2 + 0x22b8) == 0xfa);
    UVar3 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x465);
    SendMessageA(pHVar1,UVar3,uVar2,LVar5);
    if ((*(int *)(*param_2 + 0x22bc) == 0) && (*(int *)(*param_2 + 0x22c0) == 0)) {
      LVar5 = 0;
      WVar4 = 1;
      UVar3 = 0xf1;
      pHVar1 = GetDlgItem(param_1,0x4ad);
      SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    }
    if ((*(int *)(*param_2 + 0x22bc) != 0) && (*(int *)(*param_2 + 0x22c0) == 0)) {
      LVar5 = 0;
      WVar4 = 1;
      UVar3 = 0xf1;
      pHVar1 = GetDlgItem(param_1,0x4ae);
      SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    }
  }
  return;
}


