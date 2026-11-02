/* Module: vegas30.exe
   Function: FUN_004fd040
   Address: 004fd040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fd040(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  HDC pHVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *piStack_44;
  int iStack_40;
  undefined4 *puStack_3c;
  HDC pHStack_38;
  
  puVar2 = param_1;
  if ((param_1[3] & 0x3000) == 0) {
    FUN_004fcff0();
    return;
  }
  piVar7 = (int *)param_1[0x5e];
  iVar5 = param_1[0x60];
  if (piVar7 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar7;
  }
  if ((iVar5 < 0) || (iVar6 + -1 < iVar5)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(piVar7[2] + iVar5 * 4);
  }
  if (iVar5 == 0) {
LAB_004fd0a4:
    if (param_1[0x65] != 0) {
      FUN_004fa200();
    }
    param_1[0x65] = 0;
  }
  else {
    iVar6 = 4;
    bVar9 = true;
    piVar7 = (int *)(iVar5 + 0x20);
    piVar8 = param_1 + 0x66;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar9 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar9);
    if (!bVar9) goto LAB_004fd0a4;
  }
  param_1 = (undefined4 *)param_1[0x70];
  if ((iVar5 != 0) && ((int)param_1 < 0)) {
    param_1 = *(undefined4 **)(iVar5 + 0x150);
  }
  piVar7 = (int *)puVar2[0x5f];
  if (piVar7 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar7;
  }
  if (((int)param_1 < 0) || (iVar6 + -1 < (int)param_1)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(piVar7[2] + (int)param_1 * 4);
  }
  if (puVar2[2] == 1) {
    if ((puVar2[3] & 0x800) != 0) {
      puVar2[0x6e] = 0;
      puVar2[3] = puVar2[3] & 0xfffff7ff;
      puVar2[0x6f] = 0;
    }
    if (iVar6 == 0) {
      return;
    }
    pHVar3 = GetDC((HWND)*puVar2);
    puStack_3c = puVar2;
    iStack_40 = 0x4fd150;
    pHStack_38 = pHVar3;
    FUN_004fc7e0();
    pHStack_38 = (HDC)0x4fd15b;
    ReleaseDC((HWND)*puVar2,pHVar3);
    return;
  }
  if (iVar5 != 0) {
    if (puVar2[0x65] == 0) {
      puStack_3c = (undefined4 *)(iVar5 + 0x20);
      puVar2[0x66] = *puStack_3c;
      puVar2[0x67] = *(undefined4 *)(iVar5 + 0x24);
      puVar2[0x68] = *(undefined4 *)(iVar5 + 0x28);
      puVar2[0x69] = *(undefined4 *)(iVar5 + 0x2c);
      pHStack_38 = *(HDC *)(iVar5 + 0x30);
      iStack_40 = 0x4fd1ac;
      uVar4 = FUN_004fa060();
      puVar2[0x65] = uVar4;
    }
    else {
      if ((puVar2[3] & 0x800) == 0) goto LAB_004fd1f2;
      FUN_004fa200();
      pHStack_38 = *(HDC *)(iVar5 + 0x30);
      puStack_3c = (undefined4 *)(iVar5 + 0x20);
      iStack_40 = 0x4fd1d5;
      uVar4 = FUN_004fa060();
      puVar2[0x65] = uVar4;
      puVar2[3] = puVar2[3] & 0xfffff7ff;
    }
    puVar2[0x6e] = 0;
    puVar2[0x6f] = 0;
  }
LAB_004fd1f2:
  if (((puVar2[2] == 2) && (puVar2[0x65] != 0)) && ((*(byte *)(puVar2[0x65] + 0x78) & 0x10) == 0)) {
    if (puVar2[0x6a] != 0) {
      pHStack_38 = (HDC)0x4fd21a;
      _SfDibFree_8();
    }
    puVar2[0x6a] = 0;
    return;
  }
  piVar7 = puVar2 + 0x6a;
  if (puVar2[0x6a] == 0) {
    puStack_3c = (undefined4 *)puVar2[0x59];
    iStack_40 = puVar2[0x58];
    pHStack_38 = (HDC)0x0;
    piStack_44 = (int *)0x1c;
    _SfDibAlloc_28(piVar7);
  }
  if (iVar6 == 0) {
    return;
  }
  if (((*(byte *)(iVar6 + 0x11c) & 1) == 0) && ((int)puVar2[0x70] < 0)) {
    return;
  }
  if ((puVar2[0x65] == 0) || (iStack_40 = *piVar7, iStack_40 == 0)) goto LAB_004fd41b;
  if ((int)(puVar2[0x6d] + puVar2[0x6c]) < (int)puVar2[0x6e]) {
    puVar2[0x6e] = 0;
    puVar2[0x6f] = (uint)(puVar2[0x6f] == 0);
  }
  if ((int)puVar2[0x6c] < (int)puVar2[0x6e]) goto LAB_004fd41b;
  if (puVar2[2] == 0) {
    if (puVar2[0x6f] == 0) {
      puStack_3c = (undefined4 *)puVar2[0x62];
      pHStack_38 = (HDC)puVar2[99];
    }
    else {
      puStack_3c = (undefined4 *)puVar2[99];
      pHStack_38 = (HDC)puVar2[0x62];
    }
  }
  else {
    puStack_3c = (undefined4 *)puVar2[100];
    pHStack_38 = (HDC)puStack_3c;
  }
  piStack_44 = (int *)puVar2[0x65];
  FUN_004fa220();
  pHVar3 = GetDC((HWND)*puVar2);
  piVar7 = (int *)*piVar7;
  if (piVar7[4] == 0) {
    if (((piVar7[8] != 0) || (uVar1 = *(ushort *)((int)piVar7 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fd382;
    iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fd385:
    piStack_44 = (int *)(*piVar7 + iVar5 * 4 + (int)piVar7);
  }
  else {
    if (piVar7[4] != 3) {
LAB_004fd382:
      iVar5 = piVar7[8];
      goto LAB_004fd385;
    }
    piStack_44 = piVar7 + 0xd;
  }
  pHStack_38 = (HDC)piVar7[1];
  puStack_3c = (undefined4 *)0x0;
  iStack_40 = 0;
  iVar5 = *(int *)(iVar6 + 0x13c) - *(int *)(iVar6 + 0x134);
  DrawDibDraw(DAT_0064b4a4,pHVar3,*(int *)(iVar6 + 0x130),*(int *)(iVar6 + 0x134),
              *(int *)(iVar6 + 0x138) - *(int *)(iVar6 + 0x130),iVar5,piVar7);
  piStack_44 = *(int **)(iVar6 + 0x120);
  puStack_3c = *(undefined4 **)(iVar6 + 0x128);
  iStack_40 = *(int *)(iVar6 + 0x124) + -8;
  pHStack_38 = (HDC)(*(int *)(iVar6 + 0x124) + -4);
  FUN_004fc6e0(pHVar3,&piStack_44,iVar5,piVar7,0);
  ReleaseDC((HWND)*puVar2,pHVar3);
LAB_004fd41b:
  puVar2[0x6e] = puVar2[0x6e] + 1;
  return;
}


