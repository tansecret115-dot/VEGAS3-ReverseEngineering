/* Module: vidpcore.dll
   Function: FUN_5de9e750
   Address: 5de9e750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de9e750(int param_1)

{
  undefined4 *puVar1;
  LPARAM lParam;
  LPARAM lParam_00;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  int *unaff_EBX;
  WPARAM WVar5;
  undefined1 auStack_110 [8];
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c70,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],param_1 + 0x50,0x20);
  lParam = ftol();
  lParam_00 = ftol();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c6);
  SendMessageA(pHVar2,0x610,1,lParam);
  SendMessageA(pHVar2,0x611,0,lParam_00);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x449);
  SendMessageA(pHVar2,0x610,1,lParam_00);
  SendMessageA(pHVar2,0x611,0,lParam);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x5c));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c7);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x60));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44a);
  FUN_5deb6a10(pHVar2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c5);
  LVar3 = SendMessageA(pHVar2,0x146,0,0);
  WVar5 = 0;
  if (0 < LVar3) {
    do {
      LVar4 = SendMessageA(pHVar2,0x150,WVar5,0);
      if (LVar4 == *(int *)(param_1 + 0x58)) break;
      WVar5 = WVar5 + 1;
    } while ((int)WVar5 < LVar3);
  }
  SendMessageA(pHVar2,0x14e,WVar5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c2);
  LVar3 = SendMessageA(pHVar2,0x146,0,0);
  WVar5 = 0;
  if (0 < LVar3) {
    do {
      LVar4 = SendMessageA(pHVar2,0x150,WVar5,0);
      if (LVar4 == *(int *)(param_1 + 0x50)) break;
      WVar5 = WVar5 + 1;
    } while ((int)WVar5 < LVar3);
  }
  SendMessageA(pHVar2,0x14e,WVar5,0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c3);
  LVar3 = SendMessageA(pHVar2,0x146,0,0);
  WVar5 = 0;
  if (0 < LVar3) {
    do {
      LVar4 = SendMessageA(pHVar2,0x150,WVar5,0);
      if (LVar4 == *(int *)(param_1 + 0x54)) break;
      WVar5 = WVar5 + 1;
    } while ((int)WVar5 < LVar3);
  }
  SendMessageA(pHVar2,0x14e,WVar5,0);
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return;
}


