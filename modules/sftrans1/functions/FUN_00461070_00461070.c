/* Module: sftrans1.dll
   Function: FUN_00461070
   Address: 00461070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00461070(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  LPARAM lParam;
  LRESULT LVar4;
  LRESULT LVar5;
  int *unaff_EBX;
  int iVar6;
  WPARAM WVar7;
  undefined1 auStack_110 [8];
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c90,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],(int *)(param_1 + 0x50),0x40);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x591);
  lParam = ftol();
  SendMessageA(pHVar3,0x610,1,lParam);
  FUN_004c6ae0(auStack_110,&DAT_0055e6e4,(double)*(float *)(param_1 + 0x54));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x592);
  FUN_004c84a0(pHVar3);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x90) + iVar6 * 4);
      if (iVar2 != 0) {
        (**(code **)(**(int **)(iVar2 + 4) + 8))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x94));
  }
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x58e);
  iVar6 = *(int *)(param_1 + 0x50);
  LVar4 = SendMessageA(pHVar3,0x146,0,0);
  WVar7 = 0;
  if (0 < LVar4) {
    do {
      LVar5 = SendMessageA(pHVar3,0x150,WVar7,0);
      if (iVar6 == LVar5) goto LAB_00461190;
      WVar7 = WVar7 + 1;
    } while ((int)WVar7 < LVar4);
  }
  WVar7 = 0xffffffff;
LAB_00461190:
  SendMessageA(pHVar3,0x14e,WVar7,0);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x595);
  iVar6 = *(int *)(param_1 + 0x88);
  LVar4 = SendMessageA(pHVar3,0x146,0,0);
  WVar7 = 0;
  if (0 < LVar4) {
    do {
      LVar5 = SendMessageA(pHVar3,0x150,WVar7,0);
      if (iVar6 == LVar5) goto LAB_004611f3;
      WVar7 = WVar7 + 1;
    } while ((int)WVar7 < LVar4);
  }
  WVar7 = 0xffffffff;
LAB_004611f3:
  SendMessageA(pHVar3,0x14e,WVar7,0);
  FUN_00460fc0();
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return;
}


