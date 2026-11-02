/* Module: vegas30.exe
   Function: FUN_0055bc60
   Address: 0055bc60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055bc60(HWND param_1,int *param_2)

{
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  int lParam;
  
  uVar2 = (uint)(*(int *)(*param_2 + 0x2e5c) == 0);
  pHVar1 = GetDlgItem(param_1,0x5de);
  EnableWindow(pHVar1,uVar2);
  uVar2 = (uint)(*(int *)(*param_2 + 0x2e5c) == 0);
  pHVar1 = GetDlgItem(param_1,0x5df);
  EnableWindow(pHVar1,uVar2);
  uVar2 = (uint)(*(int *)(*param_2 + 0x2e5c) == 0);
  pHVar1 = GetDlgItem(param_1,0x5e0);
  EnableWindow(pHVar1,uVar2);
  iVar3 = __alldiv(*(undefined4 *)(*param_2 + 0x2e60),*(undefined4 *)(*param_2 + 0x2e64),10,0);
  LVar6 = -2000;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar1 = GetDlgItem(param_1,0x5de);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 2000;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar1 = GetDlgItem(param_1,0x5de);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  WVar5 = 1;
  UVar4 = 0x610;
  lParam = iVar3 / 10;
  pHVar1 = GetDlgItem(param_1,0x5de);
  SendMessageA(pHVar1,UVar4,WVar5,lParam);
  SfSetDlgItemText(param_1,0x5df,&DAT_00619b30,iVar3 / 10);
  return;
}


