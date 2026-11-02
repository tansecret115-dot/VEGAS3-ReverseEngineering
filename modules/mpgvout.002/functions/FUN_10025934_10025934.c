/* Module: mpgvout.002
   Function: FUN_10025934
   Address: 10025934
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10025934(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined8 *param_5,
            int param_6,uint param_7,uint param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *pvVar19;
  void *_Dst;
  int iVar20;
  
  iVar11 = param_2 >> 1;
  if (((param_2 == param_6) && (param_3 == param_7)) && (param_4 == param_8)) {
    puVar13 = (undefined1 *)*param_1;
    uVar16 = param_7 * param_8;
    uVar18 = param_8 >> 1;
    for (puVar15 = param_5; ((uint)puVar15 & 0x1f) != 0; puVar15 = (undefined8 *)((int)puVar15 + 1))
    {
      uVar16 = uVar16 - 1;
      *puVar13 = *(undefined1 *)puVar15;
      puVar13 = puVar13 + 1;
    }
    puVar12 = (undefined8 *)(puVar13 + -0x40);
    for (; 0x3f < uVar16; uVar16 = uVar16 - 0x40) {
      uVar2 = *puVar15;
      uVar3 = puVar15[4];
      uVar4 = puVar15[1];
      uVar5 = puVar15[5];
      uVar6 = puVar15[2];
      uVar7 = puVar15[6];
      uVar8 = puVar15[3];
      uVar9 = puVar15[7];
      puVar15 = puVar15 + 8;
      puVar12[8] = uVar2;
      puVar12[9] = uVar4;
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar8;
      puVar12[0xc] = uVar3;
      puVar12[0xd] = uVar5;
      puVar12[0xe] = uVar7;
      puVar12[0xf] = uVar9;
      puVar12 = puVar12 + 8;
    }
    puVar12 = puVar12 + 8;
    for (; 7 < uVar16; uVar16 = uVar16 - 8) {
      *puVar12 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar13 = (undefined1 *)param_1[1];
    uVar16 = (param_7 >> 1) * uVar18;
    for (puVar15 = (undefined8 *)((int)param_5 + param_2 * param_8); ((uint)puVar15 & 0x1f) != 0;
        puVar15 = (undefined8 *)((int)puVar15 + 1)) {
      uVar16 = uVar16 - 1;
      *puVar13 = *(undefined1 *)puVar15;
      puVar13 = puVar13 + 1;
    }
    puVar12 = (undefined8 *)(puVar13 + -0x40);
    for (; 0x3f < uVar16; uVar16 = uVar16 - 0x40) {
      uVar2 = *puVar15;
      uVar3 = puVar15[4];
      uVar4 = puVar15[1];
      uVar5 = puVar15[5];
      uVar6 = puVar15[2];
      uVar7 = puVar15[6];
      uVar8 = puVar15[3];
      uVar9 = puVar15[7];
      puVar15 = puVar15 + 8;
      puVar12[8] = uVar2;
      puVar12[9] = uVar4;
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar8;
      puVar12[0xc] = uVar3;
      puVar12[0xd] = uVar5;
      puVar12[0xe] = uVar7;
      puVar12[0xf] = uVar9;
      puVar12 = puVar12 + 8;
    }
    puVar12 = puVar12 + 8;
    for (; 7 < uVar16; uVar16 = uVar16 - 8) {
      *puVar12 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar16 = (param_7 >> 1) * uVar18;
    puVar13 = (undefined1 *)param_1[2];
    for (puVar15 = (undefined8 *)((int)param_5 + iVar11 * uVar18 + param_2 * param_8);
        ((uint)puVar15 & 0x1f) != 0; puVar15 = (undefined8 *)((int)puVar15 + 1)) {
      uVar16 = uVar16 - 1;
      *puVar13 = *(undefined1 *)puVar15;
      puVar13 = puVar13 + 1;
    }
    puVar12 = (undefined8 *)(puVar13 + -0x40);
    for (; 0x3f < uVar16; uVar16 = uVar16 - 0x40) {
      uVar2 = *puVar15;
      uVar3 = puVar15[4];
      uVar4 = puVar15[1];
      uVar5 = puVar15[5];
      uVar6 = puVar15[2];
      uVar7 = puVar15[6];
      uVar8 = puVar15[3];
      uVar9 = puVar15[7];
      puVar15 = puVar15 + 8;
      puVar12[8] = uVar2;
      puVar12[9] = uVar4;
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar8;
      puVar12[0xc] = uVar3;
      puVar12[0xd] = uVar5;
      puVar12[0xe] = uVar7;
      puVar12[0xf] = uVar9;
      puVar12 = puVar12 + 8;
    }
    puVar12 = puVar12 + 8;
    for (; 7 < uVar16; uVar16 = uVar16 - 8) {
      *puVar12 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    if (param_3 <= param_7) {
      param_7 = param_3;
    }
    if (param_8 < param_4) {
      param_4 = param_8;
    }
    iVar20 = 0;
    iVar10 = param_6 >> 1;
    puVar15 = param_5;
    puVar13 = (undefined1 *)*param_1;
    if (0 < (int)param_4) {
      do {
        puVar1 = puVar13 + param_2;
        iVar20 = iVar20 + 1;
        puVar12 = (undefined8 *)(param_6 + (int)puVar15);
        uVar16 = param_7;
        for (; ((uint)puVar15 & 0x1f) != 0; puVar15 = (undefined8 *)((int)puVar15 + 1)) {
          uVar16 = uVar16 - 1;
          *puVar13 = *(undefined1 *)puVar15;
          puVar13 = puVar13 + 1;
        }
        puVar14 = (undefined8 *)(puVar13 + -0x40);
        for (; 0x3f < uVar16; uVar16 = uVar16 - 0x40) {
          uVar2 = *puVar15;
          uVar3 = puVar15[4];
          uVar4 = puVar15[1];
          uVar5 = puVar15[5];
          uVar6 = puVar15[2];
          uVar7 = puVar15[6];
          uVar8 = puVar15[3];
          uVar9 = puVar15[7];
          puVar15 = puVar15 + 8;
          puVar14[8] = uVar2;
          puVar14[9] = uVar4;
          puVar14[10] = uVar6;
          puVar14[0xb] = uVar8;
          puVar14[0xc] = uVar3;
          puVar14[0xd] = uVar5;
          puVar14[0xe] = uVar7;
          puVar14[0xf] = uVar9;
          puVar14 = puVar14 + 8;
        }
        puVar14 = puVar14 + 8;
        for (; 7 < uVar16; uVar16 = uVar16 - 8) {
          *puVar14 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar15 = puVar12;
        puVar13 = puVar1;
      } while (iVar20 < (int)param_4);
    }
    iVar17 = (int)param_4 >> 1;
    puVar15 = (undefined8 *)((int)param_5 + param_6 * param_8);
    pvVar19 = (void *)param_1[1];
    iVar20 = iVar17;
    if (0 < iVar17) {
      do {
        memcpy(pvVar19,puVar15,(int)param_7 >> 1);
        pvVar19 = (void *)((int)pvVar19 + iVar11);
        puVar15 = (undefined8 *)((int)puVar15 + iVar10);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    pvVar19 = (void *)((int)param_5 + iVar10 * (param_8 >> 1) + param_6 * param_8);
    _Dst = (void *)param_1[2];
    if (0 < iVar17) {
      do {
        memcpy(_Dst,pvVar19,(int)param_7 >> 1);
        _Dst = (void *)((int)_Dst + iVar11);
        pvVar19 = (void *)((int)pvVar19 + iVar10);
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
  }
  return;
}


