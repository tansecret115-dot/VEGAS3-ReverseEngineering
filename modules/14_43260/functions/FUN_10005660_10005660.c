/* Module: 14_43260.dll
   Function: FUN_10005660
   Address: 10005660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005660(void *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float10 fVar12;
  
  if (param_1 == 0) {
    DAT_10016000 = *(float **)((int)this + 0x9aa);
  }
  else {
    DAT_10016000 = (float *)((int)DAT_10016000 + *(int *)((int)this + 0x996) * 4);
  }
  puVar10 = &DAT_10015fb0;
  puVar11 = *(undefined4 **)((int)this + 0xa4e);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_10003650(this,DAT_10016000,*(float **)((int)this + 0xa52),(float *)&DAT_10016008,
               *(float **)((int)this + 0x9b6),*(int *)((int)this + 0x996));
  FUN_10003710(this,*(float **)((int)this + 0xa52),*(float **)((int)this + 0xa7e),
               (float *)&DAT_10015fd8,*(float **)((int)this + 0x9ba),*(uint *)((int)this + 0x996));
  FUN_10003880(this,*(float **)((int)this + 0xa52),*(undefined4 **)((int)this + 0xa4e),
               *(float **)((int)this + 0x9ba),*(uint *)((int)this + 0x996));
  pfVar7 = *(float **)((int)this + 0xa52);
  iVar6 = 0;
  pfVar1 = *(float **)((int)this + 0xa7e);
  if (0 < *(int *)((int)this + 0x996)) {
    do {
      fVar2 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      iVar6 = iVar6 + 1;
      *pfVar1 = *pfVar1 - fVar2;
      pfVar1 = pfVar1 + 1;
    } while (iVar6 < *(int *)((int)this + 0x996));
  }
  fVar2 = (float)FUN_10004bc0(this);
  if (fVar2 != 0.0) {
    FUN_10005280(this,*(undefined4 **)((int)this + 0xa56),*(int *)((int)this + 0xa92),(int)fVar2);
    puVar10 = *(undefined4 **)((int)this + 0xa4e);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    FUN_10003710(this,*(float **)((int)this + 0xa56),*(float **)((int)this + 0xa82),
                 *(float **)((int)this + 0xa4e),*(float **)((int)this + 0x9ba),
                 *(uint *)((int)this + 0x996));
  }
  pfVar1 = *(float **)((int)this + 0xa62);
  pfVar9 = *(float **)((int)this + 0xa86);
  pfVar7 = pfVar1 + *(int *)((int)this + 0x996) * *(int *)((int)this + 0x962);
  for (; pfVar1 < pfVar7; pfVar1 = pfVar1 + *(int *)((int)this + 0x996)) {
    puVar10 = *(undefined4 **)((int)this + 0xa4e);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    FUN_10003710(this,pfVar1,pfVar9,*(float **)((int)this + 0xa4e),*(float **)((int)this + 0x9ba),
                 *(uint *)((int)this + 0x996));
    pfVar9 = pfVar9 + *(int *)((int)this + 0x996);
  }
  if (fVar2 != 0.0) {
    FUN_10002f00(this,*(float **)((int)this + 0xa82),*(float **)((int)this + 0xa86),
                 *(int *)((int)this + 0x962));
  }
  uVar3 = FUN_10006040(this,*(float **)((int)this + 0xa7e),*(float **)((int)this + 0xa86),
                       *(int *)((int)this + 0x962));
  FUN_10002e10(uVar3,*(int *)((int)this + 0x962),*(undefined4 **)((int)this + 0xa6a));
  FUN_10005fc0(this,*(float **)((int)this + 0xa62),*(float **)((int)this + 0xa6a),
               *(int *)((int)this + 0x962),*(float **)((int)this + 0xa5a));
  FUN_10005fc0(this,*(float **)((int)this + 0xa86),*(float **)((int)this + 0xa6a),
               *(int *)((int)this + 0x962),*(float **)((int)this + 0xa8a));
  pfVar1 = *(float **)((int)this + 0xa66);
  pfVar9 = *(float **)((int)this + 0xa86);
  pfVar7 = pfVar1 + *(int *)((int)this + 0x966) * *(int *)((int)this + 0x996);
  for (; pfVar1 < pfVar7; pfVar1 = pfVar1 + *(int *)((int)this + 0x996)) {
    puVar10 = *(undefined4 **)((int)this + 0xa4e);
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    FUN_10003710(this,pfVar1,pfVar9,*(float **)((int)this + 0xa4e),*(float **)((int)this + 0x9ba),
                 *(uint *)((int)this + 0x996));
    pfVar9 = pfVar9 + *(int *)((int)this + 0x996);
  }
  if (fVar2 != 0.0) {
    FUN_10002f00(this,*(float **)((int)this + 0xa82),*(float **)((int)this + 0xa86),
                 *(int *)((int)this + 0x966));
  }
  FUN_10002f00(this,*(float **)((int)this + 0xa8a),*(float **)((int)this + 0xa86),
               *(int *)((int)this + 0x966));
  uVar4 = FUN_10006040(this,*(float **)((int)this + 0xa7e),*(float **)((int)this + 0xa86),
                       *(int *)((int)this + 0x966));
  FUN_10002e10(uVar4,*(int *)((int)this + 0x966),*(undefined4 **)((int)this + 0xa6a));
  FUN_10005fc0(this,*(float **)((int)this + 0xa66),*(float **)((int)this + 0xa6a),
               *(int *)((int)this + 0x966),*(float **)((int)this + 0xa5e));
  puVar10 = *(undefined4 **)((int)this + 0xa4e);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  FUN_10003710(this,*(float **)((int)this + 0xa5a),*(float **)((int)this + 0xa8a),
               *(float **)((int)this + 0xa4e),*(float **)((int)this + 0x9ba),
               *(uint *)((int)this + 0x996));
  puVar10 = *(undefined4 **)((int)this + 0xa4e);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  FUN_10003710(this,*(float **)((int)this + 0xa5e),*(float **)((int)this + 0xa8e),
               *(float **)((int)this + 0xa4e),*(float **)((int)this + 0x9ba),
               *(uint *)((int)this + 0x996));
  if (fVar2 == 0.0) {
    *(undefined4 *)((int)this + 0xa6e) = 0;
  }
  else {
    fVar12 = FUN_10005610((int)this,*(float **)((int)this + 0xa56),*(float *)((int)this + 0x9c2));
    *(float *)((int)this + 0xa6e) = (float)fVar12;
  }
  fVar12 = FUN_10005610((int)this,*(float **)((int)this + 0xa5a),*(float *)((int)this + 0x9c2));
  *(float *)((int)this + 0xa72) = (float)fVar12;
  fVar12 = FUN_10005610((int)this,*(float **)((int)this + 0xa5e),*(float *)((int)this + 0x9c2));
  *(float *)((int)this + 0xa76) = (float)fVar12;
  uVar5 = FUN_10003f80(this,fVar2,*(float *)((int)this + 0xa6e),*(float **)((int)this + 0xa72),
                       (float)fVar12);
  if (fVar2 == 0.0) {
    **(undefined4 **)((int)this + 0x9a2) = 0;
    puVar8 = (uint *)(*(int *)((int)this + 0x9a2) + 4);
    *(uint **)((int)this + 0x9a2) = puVar8;
  }
  else {
    **(uint **)((int)this + 0x9a2) = ((int)fVar2 - *(int *)((int)this + 0x982)) + 1U & 0xff;
    puVar8 = (uint *)(*(int *)((int)this + 0x9a2) + 4);
    *(uint **)((int)this + 0x9a2) = puVar8;
  }
  *puVar8 = uVar3 & 0xff;
  puVar8 = (uint *)(*(int *)((int)this + 0x9a2) + 4);
  *(uint **)((int)this + 0x9a2) = puVar8;
  *puVar8 = uVar4 & 0xff;
  puVar8 = (uint *)(*(int *)((int)this + 0x9a2) + 4);
  *(uint **)((int)this + 0x9a2) = puVar8;
  *puVar8 = uVar5 & 0xff;
  *(int *)((int)this + 0x9a2) = *(int *)((int)this + 0x9a2) + 4;
  puVar10 = (undefined4 *)(*(int *)((int)this + 0xa92) + *(int *)((int)this + 0x996) * 4);
  puVar11 = *(undefined4 **)((int)this + 0xa96);
  for (uVar3 = *(int *)((int)this + 0x986) - *(int *)((int)this + 0x996) & 0x3fffffff; uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  puVar10 = *(undefined4 **)((int)this + 0xa96);
  puVar11 = *(undefined4 **)((int)this + 0xa92);
  for (uVar3 = *(int *)((int)this + 0x986) - *(int *)((int)this + 0x996) & 0x3fffffff; uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  FUN_100033f0(this,uVar5,(int)fVar2,*(float *)((int)this + 0xa6e),*(float *)((int)this + 0xa72),
               *(float *)((int)this + 0xa76),*(float **)((int)this + 0xa56),
               *(float **)((int)this + 0xa5a),*(float **)((int)this + 0xa5e),
               *(float **)((int)this + 0xa9a));
  FUN_10003710(this,*(float **)((int)this + 0xa9a),*(float **)((int)this + 0xa52),
               (float *)&DAT_10015fb0,*(float **)((int)this + 0x9ba),*(uint *)((int)this + 0x996));
  return;
}


