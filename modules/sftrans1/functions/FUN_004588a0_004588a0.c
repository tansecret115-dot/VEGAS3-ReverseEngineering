/* Module: sftrans1.dll
   Function: FUN_004588a0
   Address: 004588a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004588a0(int param_1)

{
  short *psVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  HWND pHVar5;
  LPARAM LVar6;
  LRESULT LVar7;
  uint uVar8;
  uint unaff_EBX;
  int *unaff_ESI;
  WPARAM wParam;
  UINT UVar9;
  double dStack_164;
  int *piStack_160;
  double dStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined2 uStack_138;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  puVar3 = (undefined4 *)**(int **)(param_1 + 8);
  dStack_164 = (double)(ulonglong)unaff_EBX;
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,&DAT_00554c30,&piStack_160);
    piVar4 = piStack_160;
  }
  psVar1 = (short *)(param_1 + 0x4c);
  (**(code **)(*piVar4 + 0x34))(piVar4,psVar1,0x24);
  uVar8 = (uint)(*psVar1 == 0);
  LVar6 = 0;
  UVar9 = 0xf1;
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x455);
  SendMessageA(pHVar5,UVar9,uVar8,LVar6);
  uVar8 = (uint)(*psVar1 == 1);
  LVar6 = 0;
  UVar9 = 0xf1;
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x456);
  SendMessageA(pHVar5,UVar9,uVar8,LVar6);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x4bb,"%1.3f",(double)*(float *)(param_1 + 0x68));
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x4bc,"%1.3f",(double)*(float *)(param_1 + 0x6c));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4bd);
  dStack_164 = (double)*(float *)(param_1 + 0x68);
  dStack_15c = (double)*(float *)(param_1 + 0x6c);
  uStack_24 = 0;
  uStack_150 = 1;
  uStack_20 = 0;
  uStack_14 = 1;
  uStack_1c = 0;
  uStack_154 = 2;
  uStack_14c = 0xffffffff;
  uStack_148 = 0x3f800000;
  uStack_138 = 0;
  uStack_34 = 0;
  uStack_30 = 0xffffff;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_144 = 0x3ecccccd;
  uStack_140 = 0x3ecccccd;
  uStack_13c = 0x3f800000;
  SendMessageA(pHVar5,0x804,0,(LPARAM)&stack0xfffffe9c);
  SendMessageA(pHVar5,0x80f,0,0);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x459);
  LVar6 = ftol();
  SendMessageA(pHVar5,0x610,1,LVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x45b);
  LVar6 = ftol();
  SendMessageA(pHVar5,0x610,1,LVar6);
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x45f);
  SendMessageA(pHVar5,0x703,0,param_1 + 0x58);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a3,"%1.3f",(double)*(float *)(param_1 + 0x50));
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a4,"%1.3f",(double)*(float *)(param_1 + 0x54));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4e5);
  uVar2 = *(ushort *)(param_1 + 0x4e);
  LVar7 = SendMessageA(pHVar5,0x146,0,0);
  wParam = 0;
  if (0 < LVar7) {
    do {
      uVar8 = SendMessageA(pHVar5,0x150,wParam,0);
      if (uVar2 == uVar8) goto LAB_00458b16;
      wParam = wParam + 1;
    } while ((int)wParam < LVar7);
  }
  wParam = 0xffffffff;
LAB_00458b16:
  SendMessageA(pHVar5,0x14e,wParam,0);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


