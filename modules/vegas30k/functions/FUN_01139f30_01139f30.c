/* Module: vegas30k.dll
   Function: FUN_01139f30
   Address: 01139f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139f30(HWND param_1)

{
  int *piVar1;
  HWND hDlg;
  HWND pHVar2;
  int iVar3;
  undefined4 *puVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM lParam;
  undefined4 local_1c [5];
  uint uStack_8;
  int local_4;
  
  hDlg = param_1;
  GetWindowLongA(param_1,8);
  lParam = 0;
  WVar6 = 0;
  UVar5 = 0x130b;
  pHVar2 = GetDlgItem(hDlg,0x430);
  WVar6 = SendMessageA(pHVar2,UVar5,WVar6,lParam);
  puVar4 = local_1c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1c;
  local_1c[0] = 8;
  UVar5 = 0x1305;
  pHVar2 = GetDlgItem(hDlg,0x430);
  SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)puVar4);
  if (local_4 != 0) {
    piVar1 = *(int **)(*(int *)(local_4 + 0xc) + 0x218);
    if (piVar1 != (int *)0x0) {
      param_1 = (HWND)0x0;
      (**(code **)(*piVar1 + 0x20))(piVar1,0,&param_1);
      uStack_8 = (uint)(uStack_8 == 0);
      (**(code **)(*piVar1 + 0x24))(piVar1,0,&uStack_8);
    }
    FUN_01139ed0(hDlg);
  }
  return;
}


