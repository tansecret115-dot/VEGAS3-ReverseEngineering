/* Module: vidpcore.dll
   Function: FUN_5de814e0
   Address: 5de814e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de814e0(int param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  uint uVar4;
  LPARAM LVar5;
  int *unaff_ESI;
  UINT UVar6;
  WPARAM wParam;
  int *local_108 [66];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5df17bc0,local_108);
  }
  psVar1 = (short *)(param_1 + 0x4c);
  (**(code **)(*local_108[0] + 0x34))(local_108[0],psVar1,0x20);
  uVar4 = (uint)(*psVar1 == 0);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x480);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  uVar4 = (uint)(*psVar1 == 1);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x47f);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  uVar4 = (uint)(*psVar1 == 2);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x483);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  uVar4 = (uint)(*psVar1 == 3);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x481);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  uVar4 = (uint)(*psVar1 == 4);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x47d);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  uVar4 = (uint)(*psVar1 == 5);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x482);
  SendMessageA(pHVar3,UVar6,uVar4,LVar5);
  wParam = *(WPARAM *)(param_1 + 0x50);
  LVar5 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x484);
  SendMessageA(pHVar3,UVar6,wParam,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x45d);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x45f);
  LVar5 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar5);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x461);
  SendMessageA(pHVar3,0x703,0,param_1 + 0x5c);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x54));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x575);
  FUN_5deb6a10(pHVar3);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x58));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x576);
  FUN_5deb6a10(pHVar3);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


