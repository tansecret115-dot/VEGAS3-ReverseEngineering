/* Module: vegas30.exe
   Function: FUN_0051ed90
   Address: 0051ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0051ed90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LONG LVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 local_a8 [4];
  undefined1 local_a4 [8];
  undefined1 local_9c [64];
  undefined1 local_5c [28];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0x80070057;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(int *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xfffffff7 | 1;
  FUN_005b83b0(DAT_0064b138,1);
  uVar5 = DAT_0064b138;
  puVar13 = local_a4;
  uVar14 = 0;
  puVar12 = local_40;
  puVar11 = local_a8;
  if ((*(uint *)(param_2 + 4) & 0x1000) == 0) {
    FUN_005c9630(DAT_0064b138,*(undefined4 *)(param_2 + 0x90),puVar11,puVar12,puVar13,0);
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe84) = *(undefined4 *)(param_2 + 0x90);
  }
  else {
    uVar6 = FUN_005ba4b0(DAT_0064b138,0);
    FUN_005ba670(uVar5,uVar6,puVar11,puVar12,puVar13,uVar14);
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xe84) = *(undefined4 *)(param_2 + 0x90);
  }
  *(undefined4 *)(param_2 + 0x80) = local_28;
  *(undefined4 *)(param_2 + 0x84) = local_24;
  FUN_0051f020(*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x9c) = 3;
  FUN_0051cff0(param_1,0);
  iVar9 = *(int *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x170);
  iVar3 = *(int *)(param_1 + 0x174);
  piVar1 = (int *)(param_1 + 0x170);
  iVar4 = *(int *)(param_1 + 0x17c);
  LVar7 = GetWindowLongA(*(HWND *)(param_1 + 0x180),-0x15);
  iVar8 = FUN_00522a00(0);
  if (iVar8 == 0) goto LAB_0051ef9d;
  FUN_005a62e0(local_9c,*(int *)(iVar8 + 8) + 0x18,*(int *)(param_1 + 0x98) + 0x24);
  FUN_00512a70(LVar7,0x3f800000,local_9c,piVar1);
  fVar10 = (float10)FUN_005a5f80(local_9c);
  if ((float10)(*(int *)(param_1 + 0x178) - *piVar1) < fVar10 * (float10)_DAT_0061a5e0) {
LAB_0051ef61:
    FUN_005a6440(local_9c,local_9c,local_5c,0x3f8ccccd,0x3f8ccccd);
    FUN_00512a70(LVar7,0,local_9c,piVar1);
  }
  else {
    fVar10 = (float10)FUN_005a5ff0(local_9c);
    if ((float10)(*(int *)(param_1 + 0x17c) - *(int *)(param_1 + 0x174)) <
        fVar10 * (float10)_DAT_0061a5e0) goto LAB_0051ef61;
  }
  iVar8 = *(int *)(param_1 + 0x98);
  *(int *)(iVar8 + 0x14) = iVar9 - iVar2;
  *(int *)(iVar8 + 0x18) = iVar4 - iVar3;
LAB_0051ef9d:
  FUN_005b84d0(DAT_0064b138,1);
  FUN_0051e1d0(param_1);
  FUN_0050cfd0(param_1);
  FUN_0050c0d0(param_1);
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
  iVar9 = FUN_0050c1a0(param_1);
  if (iVar9 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x180),(RECT *)0x0,0);
  }
  if (((*(byte *)(param_1 + 0x154) & 1) != 0) && (*(HWND *)(param_1 + 0x168) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
  }
  return 0;
}


