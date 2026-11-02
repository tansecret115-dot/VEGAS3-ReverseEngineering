/* Module: vidpcore.dll
   Function: FUN_5de7a210
   Address: 5de7a210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de7a210(int param_1)

{
  WPARAM *pWVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  uint uVar4;
  LPARAM LVar5;
  int *unaff_ESI;
  UINT UVar6;
  WPARAM WVar7;
  int *local_108 [66];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5df17c30,local_108);
  }
  pWVar1 = (WPARAM *)(param_1 + 0x4c);
  (**(code **)(*local_108[0] + 0x34))(local_108[0],pWVar1,0x20);
  uVar4 = (uint)(*pWVar1 == 0);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x53e);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  WVar7 = *pWVar1;
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x53f);
  SendMessageA(pHVar3,UVar6,WVar7,LVar5);
  uVar4 = (uint)(*(int *)(param_1 + 0x68) == 0);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x541);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  WVar7 = *(WPARAM *)(param_1 + 0x68);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x542);
  SendMessageA(pHVar3,UVar6,WVar7,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x54a);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x54c);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x545);
  SendMessageA(pHVar3,0x703,0,param_1 + 0x58);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x50));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x571);
  FUN_5deb6a10(pHVar3);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x54));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  FUN_5deb6a10(pHVar3);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


