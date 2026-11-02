/* Module: sftrans1.dll
   Function: FUN_0045f620
   Address: 0045f620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045f620(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  LPARAM LVar4;
  uint uVar5;
  LRESULT LVar6;
  LRESULT LVar7;
  WPARAM WVar8;
  int *unaff_ESI;
  UINT UVar9;
  int *local_8 [2];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_8[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c80,local_8);
  }
  (**(code **)(*local_8[0] + 0x34))(local_8[0],(float *)(param_1 + 0x4c),0x2c);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56e);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x570);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  SendMessageA(pHVar3,0x703,0,param_1 + 0x5c);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x568);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x569,&DAT_0055e6e4,
               (double)*(float *)(param_1 + 0x4c));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x574);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x575,"%3.1f",(double)*(float *)(param_1 + 0x74));
  WVar8 = *(WPARAM *)(param_1 + 0x50);
  LVar4 = 0;
  UVar9 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56a);
  SendMessageA(pHVar3,UVar9,WVar8,LVar4);
  uVar5 = (uint)(*(int *)(param_1 + 0x50) == 0);
  LVar4 = 0;
  UVar9 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56b);
  SendMessageA(pHVar3,UVar9,uVar5,LVar4);
  uVar5 = (uint)(*(int *)(param_1 + 0x6c) == 0);
  LVar4 = 0;
  UVar9 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x577);
  SendMessageA(pHVar3,UVar9,uVar5,LVar4);
  WVar8 = *(WPARAM *)(param_1 + 0x6c);
  LVar4 = 0;
  UVar9 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x578);
  SendMessageA(pHVar3,UVar9,WVar8,LVar4);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a6,"%1.3f",(double)*(float *)(param_1 + 0x54));
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a7,"%1.3f",(double)*(float *)(param_1 + 0x58));
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5a5);
  iVar2 = *(int *)(param_1 + 0x70);
  LVar6 = SendMessageA(pHVar3,0x146,0,0);
  WVar8 = 0;
  if (0 < LVar6) {
    do {
      LVar7 = SendMessageA(pHVar3,0x150,WVar8,0);
      if (iVar2 == LVar7) goto LAB_0045f865;
      WVar8 = WVar8 + 1;
    } while ((int)WVar8 < LVar6);
  }
  WVar8 = 0xffffffff;
LAB_0045f865:
  SendMessageA(pHVar3,0x14e,WVar8,0);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


