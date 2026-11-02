/* Module: erv33260.dll
   Function: FUN_6707fe10
   Address: 6707fe10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6707fe10(uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  uVar4 = param_1 >> 1;
  iVar5 = param_1 * param_2 + param_3;
  iVar6 = uVar4 * (param_2 >> 1) + iVar5;
  iVar8 = uVar4 - 0x20;
  uVar10 = param_2 >> 1;
  do {
    do {
      *(undefined8 *)(param_5 + iVar8) = *(undefined8 *)(iVar5 + iVar8);
      uVar1 = *(undefined8 *)(iVar5 + 0x10 + iVar8);
      uVar2 = *(undefined8 *)(iVar5 + 0x18 + iVar8);
      *(undefined8 *)(param_5 + 8 + iVar8) = *(undefined8 *)(iVar5 + 8 + iVar8);
      *(undefined8 *)(param_5 + 0x10 + iVar8) = uVar1;
      *(undefined8 *)(param_5 + 0x18 + iVar8) = uVar2;
      *(undefined8 *)(param_6 + iVar8) = *(undefined8 *)(iVar6 + iVar8);
      uVar1 = *(undefined8 *)(iVar6 + 0x10 + iVar8);
      uVar2 = *(undefined8 *)(iVar6 + 0x18 + iVar8);
      *(undefined8 *)(param_6 + 8 + iVar8) = *(undefined8 *)(iVar6 + 8 + iVar8);
      *(undefined8 *)(param_6 + 0x10 + iVar8) = uVar1;
      *(undefined8 *)(param_6 + 0x18 + iVar8) = uVar2;
      bVar3 = 0x1f < iVar8;
      iVar8 = iVar8 + -0x20;
    } while (bVar3);
    uVar9 = uVar4 & 0x1f;
    if ((uVar4 & 0x1f) != 0) {
      do {
        *(undefined8 *)(param_5 + uVar9) = *(undefined8 *)(iVar5 + uVar9);
        *(undefined8 *)(param_6 + uVar9) = *(undefined8 *)(iVar6 + uVar9);
        bVar3 = 7 < (int)uVar9;
        uVar9 = uVar9 - 8;
      } while (bVar3);
    }
    iVar5 = iVar5 + uVar4;
    iVar6 = iVar6 + uVar4;
    param_5 = param_5 + param_7;
    param_6 = param_6 + param_7;
    iVar8 = uVar4 - 0x20;
    uVar9 = uVar10 - 1;
    bVar3 = 0 < (int)uVar10;
    uVar10 = uVar9;
  } while (uVar9 != 0 && bVar3);
  puVar12 = (undefined8 *)(param_3 + (param_2 - 2) * param_1);
  puVar13 = (undefined8 *)(param_4 + (param_2 - 2) * param_7);
  puVar7 = (undefined8 *)((int)puVar12 + param_1);
  puVar11 = (undefined8 *)((int)puVar13 + param_7);
  iVar8 = param_1 - 0x20;
  uVar10 = param_2 >> 1;
  do {
    do {
      *(undefined8 *)((int)puVar13 + iVar8) = *(undefined8 *)((int)puVar12 + iVar8);
      uVar1 = *(undefined8 *)((int)puVar12 + iVar8 + 0x10);
      uVar2 = *(undefined8 *)((int)puVar12 + iVar8 + 0x18);
      *(undefined8 *)((int)puVar13 + iVar8 + 8) = *(undefined8 *)((int)puVar12 + iVar8 + 8);
      *(undefined8 *)((int)puVar13 + iVar8 + 0x10) = uVar1;
      *(undefined8 *)((int)puVar13 + iVar8 + 0x18) = uVar2;
      *(undefined8 *)((int)puVar11 + iVar8) = *(undefined8 *)((int)puVar7 + iVar8);
      uVar1 = *(undefined8 *)((int)puVar7 + iVar8 + 0x10);
      uVar2 = *(undefined8 *)((int)puVar7 + iVar8 + 0x18);
      *(undefined8 *)((int)puVar11 + iVar8 + 8) = *(undefined8 *)((int)puVar7 + iVar8 + 8);
      *(undefined8 *)((int)puVar11 + iVar8 + 0x10) = uVar1;
      *(undefined8 *)((int)puVar11 + iVar8 + 0x18) = uVar2;
      bVar3 = 0x1f < iVar8;
      iVar8 = iVar8 + -0x20;
    } while (bVar3);
    if ((param_1 & 0x1f) != 0) {
      *puVar13 = *puVar12;
      puVar13[1] = puVar12[1];
      *puVar11 = *puVar7;
      puVar11[1] = puVar7[1];
    }
    puVar12 = (undefined8 *)((int)puVar12 + param_1 * -2);
    puVar7 = (undefined8 *)((int)puVar7 + param_1 * -2);
    iVar8 = (param_1 & 0x7fffffff) - 0x20;
    puVar13 = (undefined8 *)((int)puVar13 + param_7 * -2);
    puVar11 = (undefined8 *)((int)puVar11 + param_7 * -2);
    param_7 = param_7 & 0x7fffffff;
    uVar4 = uVar10 - 1;
    bVar3 = 0 < (int)uVar10;
    uVar10 = uVar4;
  } while (uVar4 != 0 && bVar3);
  return;
}


