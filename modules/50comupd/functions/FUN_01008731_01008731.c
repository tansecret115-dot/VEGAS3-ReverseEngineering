/* Module: 50comupd.exe
   Function: FUN_01008731
   Address: 01008731
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01008731(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  short *psVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  ushort uVar14;
  undefined4 *puVar15;
  ushort auStack_54 [17];
  short local_32;
  short sStack_30;
  undefined4 local_2e [3];
  undefined2 local_20 [10];
  ushort *local_c;
  byte local_5;
  
  iVar12 = 8;
  puVar15 = local_2e;
  for (iVar8 = iVar12; pbVar9 = param_2, iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  do {
    (&sStack_30)[*pbVar9] = (&sStack_30)[*pbVar9] + 1;
    iVar12 = iVar12 + -1;
    pbVar9 = pbVar9 + 1;
  } while (iVar12 != 0);
  iVar8 = 0;
  bVar7 = 0xf;
  auStack_54[1] = 0;
  puVar13 = auStack_54 + 2;
  iVar12 = 0x10;
  do {
    psVar1 = (short *)((int)local_2e + iVar8);
    bVar3 = bVar7 & 0x1f;
    iVar4 = iVar8 + 2;
    bVar7 = bVar7 - 1;
    iVar8 = iVar8 + 2;
    *puVar13 = (*psVar1 << bVar3) + *(short *)((int)auStack_54 + iVar4);
    puVar13 = puVar13 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (local_32 == 0) {
    iVar8 = 0;
    bVar7 = 6;
    iVar12 = 7;
    do {
      puVar13 = (ushort *)((int)auStack_54 + iVar8 + 2);
      *puVar13 = *puVar13 >> 9;
      bVar3 = bVar7 & 0x1f;
      bVar7 = bVar7 - 1;
      *(short *)((int)local_2e + iVar8) = (short)(1 << bVar3);
      iVar8 = iVar8 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar5 = local_20;
    bVar7 = 8;
    iVar12 = 9;
    do {
      bVar3 = bVar7 & 0x1f;
      bVar7 = bVar7 - 1;
      *puVar5 = (short)(1 << bVar3);
      puVar5 = puVar5 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    local_5 = 0;
    puVar15 = param_3;
    for (iVar12 = 0x20; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    do {
      bVar7 = param_2[local_5];
      if (bVar7 != 0) {
        uVar2 = auStack_54[bVar7];
        uVar14 = (&sStack_30)[bVar7] + uVar2;
        local_c = auStack_54 + bVar7;
        if (0x80 < uVar14) goto LAB_01008847;
        if (uVar2 < uVar14) {
          uVar10 = (uint)uVar14 - (uint)uVar2;
          pbVar9 = (byte *)((int)param_3 + (uint)uVar2);
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(uint *)pbVar9 = CONCAT22(CONCAT11(local_5,local_5),CONCAT11(local_5,local_5));
            pbVar9 = pbVar9 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pbVar9 = local_5;
            pbVar9 = pbVar9 + 1;
          }
        }
        auStack_54[bVar7] = uVar14;
      }
      local_5 = local_5 + 1;
    } while (local_5 < 8);
    uVar6 = 1;
  }
  else {
LAB_01008847:
    uVar6 = 0;
  }
  return uVar6;
}


