/* Module: vegas30k.dll
   Function: FUN_0113a320
   Address: 0113a320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a320(HWND param_1)

{
  HWND pHVar1;
  int iVar2;
  undefined4 *puVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM lParam;
  int iVar6;
  undefined4 local_1c [6];
  int local_4;
  
  GetWindowLongA(param_1,8);
  lParam = 0;
  WVar5 = 0;
  UVar4 = 0x130b;
  pHVar1 = GetDlgItem(param_1,0x430);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,lParam);
  puVar3 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_1c;
  local_1c[0] = 8;
  UVar4 = 0x1305;
  pHVar1 = GetDlgItem(param_1,0x430);
  SendMessageA(pHVar1,UVar4,WVar5,(LPARAM)puVar3);
  if (local_4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 5;
    FUN_01139b50(param_1);
    FUN_01139e10(param_1);
  }
  iVar6 = iVar2;
  pHVar1 = GetDlgItem(param_1,0x439);
  ShowWindow(pHVar1,iVar6);
  iVar6 = iVar2;
  pHVar1 = GetDlgItem(param_1,0x3c);
  ShowWindow(pHVar1,iVar6);
  iVar6 = iVar2;
  pHVar1 = GetDlgItem(param_1,0x434);
  ShowWindow(pHVar1,iVar6);
  iVar6 = iVar2;
  pHVar1 = GetDlgItem(param_1,0x3d);
  ShowWindow(pHVar1,iVar6);
  pHVar1 = GetDlgItem(param_1,0x432);
  ShowWindow(pHVar1,iVar2);
  return;
}


