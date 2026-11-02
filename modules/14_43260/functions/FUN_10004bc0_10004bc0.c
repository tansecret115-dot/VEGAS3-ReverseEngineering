/* Module: 14_43260.dll
   Function: FUN_10004bc0
   Address: 10004bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10004bc0(void *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int local_2c;
  float *local_24;
  float local_20;
  float *local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  int local_8;
  
  pfVar13 = (float *)((int)param_1 + 0x12ee);
  local_10 = 0.0;
  iVar11 = *(int *)((int)param_1 + 0xa92) + *(int *)((int)param_1 + 0x986) * 4;
  local_20 = 1.0;
  local_2c = 0;
  FUN_100051b0(param_1,pfVar13);
  _DAT_10015f98 = *pfVar13;
  _DAT_10015f90 = *(float *)((int)param_1 + 0x12f2);
  _DAT_10015fa8 = *(float *)((int)param_1 + 0x12f6);
  _DAT_10015f70 = *(float *)((int)param_1 + 0x12fa);
  _DAT_10015f7c = *(float *)((int)param_1 + 0x12fe);
  _DAT_10015f68 = *(float *)((int)param_1 + 0x1302);
  _DAT_10015f60 = *(float *)((int)param_1 + 0x1306);
  _DAT_10015f64 = *(float *)((int)param_1 + 0x130a);
  _DAT_10015f6c = *(float *)((int)param_1 + 0x130e);
  _DAT_10015fa0 = *(float *)((int)param_1 + 0x1312);
  _DAT_10015f94 = *(float *)((int)param_1 + 0x1316);
  _DAT_10015f74 = *(float *)((int)param_1 + 0x131a);
  _DAT_10015f9c = *(float *)((int)param_1 + 0x131e);
  _DAT_10015f88 = *(float *)((int)param_1 + 0x1322);
  _DAT_10015f78 = *(float *)((int)param_1 + 0x1326);
  _DAT_10015f8c = *(float *)((int)param_1 + 0x132a);
  _DAT_10015f80 = *(float *)((int)param_1 + 0x132e);
  _DAT_10015f5c = *(float *)((int)param_1 + 0x1332);
  _DAT_10015fa4 = *(float *)((int)param_1 + 0x1336);
  _DAT_10015f84 = *(float *)((int)param_1 + 0x133a);
  puVar10 = (undefined4 *)((int)param_1 + 0x133e);
  for (uVar7 = *(uint *)((int)param_1 + 0x996) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_8 = 0;
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  if (0 < *(int *)((int)param_1 + 0x982)) {
    iVar8 = (int)param_1 + (0x133e - (int)pfVar13);
    pfVar6 = pfVar13;
    do {
      iVar5 = 0;
      local_1c = pfVar6;
      if (-1 < local_8) {
        do {
          iVar12 = iVar5 - *(int *)((int)param_1 + 0x982);
          iVar5 = iVar5 + 1;
          *(float *)(iVar8 + (int)pfVar6) =
               *(float *)(iVar11 + iVar12 * 4) * *local_1c + *(float *)(iVar8 + (int)pfVar6);
          local_1c = local_1c + -1;
        } while (iVar5 <= local_8);
      }
      local_8 = local_8 + 1;
      pfVar6 = pfVar6 + 1;
    } while (local_8 < *(int *)((int)param_1 + 0x982));
  }
  iVar8 = *(int *)((int)param_1 + 0x982);
  iVar5 = iVar8;
  if (iVar8 < *(int *)((int)param_1 + 0x96a)) {
    do {
      iVar9 = 0;
      iVar12 = iVar5 * 4;
      local_1c = (float *)iVar12;
      if (0 < iVar8) {
        do {
          iVar8 = iVar9 - iVar8;
          iVar9 = iVar9 + 1;
          *(float *)((int)param_1 + iVar12 + 0x133e) =
               *(float *)(iVar11 + iVar8 * 4) * *(float *)((int)param_1 + (int)local_1c + 0x12ea) +
               *(float *)((int)param_1 + iVar12 + 0x133e);
          iVar8 = *(int *)((int)param_1 + 0x982);
          local_1c = (float *)((int)local_1c + -4);
        } while (iVar9 < iVar8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)param_1 + 0x96a));
  }
  iVar8 = *(int *)((int)param_1 + 0x96a);
  iVar5 = *(int *)((int)param_1 + 0x982);
  if (iVar8 < iVar8 + -1 + iVar5) {
    pfVar6 = (float *)((int)param_1 + iVar8 * 4 + 0x133e);
    do {
      iVar12 = (iVar8 - *(int *)((int)param_1 + 0x96a)) + 1;
      if (iVar12 < iVar5) {
        iVar9 = (iVar8 - iVar12) * 4;
        do {
          iVar9 = iVar9 + -4;
          iVar5 = iVar12 - iVar5;
          iVar12 = iVar12 + 1;
          *pfVar6 = *(float *)(iVar11 + iVar5 * 4) * *(float *)((int)pfVar13 + iVar9) + *pfVar6;
          iVar5 = *(int *)((int)param_1 + 0x982);
        } while (iVar12 < iVar5);
      }
      iVar5 = *(int *)((int)param_1 + 0x982);
      pfVar6 = pfVar6 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x96a) + -1 + iVar5);
  }
  iVar8 = *(int *)((int)param_1 + 0x982) + -1 + *(int *)((int)param_1 + 0x96a);
  if (iVar8 < *(int *)((int)param_1 + 0x996)) {
    puVar10 = (undefined4 *)((int)param_1 + iVar8 * 4 + 0x133e);
    do {
      *puVar10 = 0;
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x996));
  }
  puVar10 = (undefined4 *)((int)param_1 + 0x133e);
  puVar14 = (undefined4 *)((int)param_1 + 0x147e);
  for (uVar7 = *(uint *)((int)param_1 + 0x996) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar14 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar14 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  local_8 = *(int *)((int)param_1 + 0x982);
  if (local_8 <= *(int *)((int)param_1 + 0x986)) {
    iVar8 = (int)param_1 + 0x13de;
    local_1c = (float *)(iVar8 + local_8 * 8);
    pfVar13 = (float *)(iVar8 + local_8 * 4);
    local_18 = (int)param_1 + local_8 * -8 + (0x133e - iVar8);
    local_14 = (int)param_1 + local_8 * -4 + (0x133e - iVar8);
    local_24 = (float *)(iVar11 - (local_8 * 4 + 4));
    do {
      iVar11 = *(int *)((int)param_1 + 0x996);
      if (local_8 < iVar11) {
        puVar10 = (undefined4 *)((int)param_1 + 0x133e);
        puVar14 = (undefined4 *)((int)param_1 + 0x13de);
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
        }
        pfVar6 = (float *)((undefined4 *)((int)param_1 + 0x13de) + *(int *)((int)param_1 + 0x996));
        pfVar3 = pfVar13;
        while (pfVar4 = local_1c, pfVar3 < pfVar6) {
          *pfVar3 = *(float *)(local_14 + -4 + (int)(pfVar3 + 1)) + *pfVar3;
          pfVar3 = pfVar3 + 1;
        }
        while (pfVar4 < pfVar6) {
          *pfVar4 = *(float *)(local_18 + -4 + (int)(pfVar4 + 1)) + *pfVar4;
          pfVar4 = pfVar4 + 1;
        }
        pfVar6 = (float *)((int)param_1 + 0x13de);
      }
      else {
        pfVar6 = (float *)((int)param_1 + 0x133e);
      }
      iVar11 = *(int *)((int)param_1 + 0x996);
      local_c = _DAT_10010c9c;
      fVar2 = _DAT_10010c9c;
      if (0 < iVar11) {
        iVar5 = *(int *)((int)param_1 + 0xa7e) - (int)pfVar6;
        iVar8 = iVar11;
        do {
          fVar1 = *pfVar6;
          fVar2 = *(float *)(iVar5 + (int)pfVar6) * *pfVar6 + fVar2;
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar8 + -1;
          local_c = fVar1 * fVar1 + local_c;
        } while (iVar8 != 0);
      }
      if ((_DAT_10010c9c < fVar2) && (local_10 * local_10 * local_c < local_20 * fVar2 * fVar2)) {
        local_20 = local_c;
        local_2c = local_8;
        local_10 = fVar2;
      }
      if (*(int *)((int)param_1 + 0x986) + -1 < local_8) {
        return local_2c;
      }
      puVar10 = (undefined4 *)((int)param_1 + 0x133e);
      puVar14 = (undefined4 *)((int)param_1 + 0x15be);
      for (uVar7 = iVar11 * 4 - 4U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar14 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      puVar10 = (undefined4 *)((int)param_1 + 0x15be);
      puVar14 = (undefined4 *)((int)param_1 + 0x1342);
      for (uVar7 = *(int *)((int)param_1 + 0x996) * 4 - 4U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar14 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      fVar2 = *local_24;
      *(float *)((int)param_1 + 0x133e) = _DAT_10015f98 * fVar2;
      *(float *)((int)param_1 + 0x1342) = _DAT_10015f90 * fVar2 + *(float *)((int)param_1 + 0x1342);
      *(float *)((int)param_1 + 0x1346) = _DAT_10015fa8 * fVar2 + *(float *)((int)param_1 + 0x1346);
      *(float *)((int)param_1 + 0x134a) = _DAT_10015f70 * fVar2 + *(float *)((int)param_1 + 0x134a);
      *(float *)((int)param_1 + 0x134e) = _DAT_10015f7c * fVar2 + *(float *)((int)param_1 + 0x134e);
      *(float *)((int)param_1 + 0x1352) = _DAT_10015f68 * fVar2 + *(float *)((int)param_1 + 0x1352);
      *(float *)((int)param_1 + 0x1356) = _DAT_10015f60 * fVar2 + *(float *)((int)param_1 + 0x1356);
      *(float *)((int)param_1 + 0x135a) = _DAT_10015f64 * fVar2 + *(float *)((int)param_1 + 0x135a);
      *(float *)((int)param_1 + 0x135e) = _DAT_10015f6c * fVar2 + *(float *)((int)param_1 + 0x135e);
      *(float *)((int)param_1 + 0x1362) = _DAT_10015fa0 * fVar2 + *(float *)((int)param_1 + 0x1362);
      *(float *)((int)param_1 + 0x1366) = _DAT_10015f94 * fVar2 + *(float *)((int)param_1 + 0x1366);
      *(float *)((int)param_1 + 0x136a) = _DAT_10015f74 * fVar2 + *(float *)((int)param_1 + 0x136a);
      local_24 = local_24 + -1;
      local_14 = local_14 + -4;
      *(float *)((int)param_1 + 0x136e) = _DAT_10015f9c * fVar2 + *(float *)((int)param_1 + 0x136e);
      local_18 = local_18 + -8;
      local_1c = local_1c + 2;
      pfVar13 = pfVar13 + 1;
      *(float *)((int)param_1 + 0x1372) = _DAT_10015f88 * fVar2 + *(float *)((int)param_1 + 0x1372);
      local_8 = local_8 + 1;
      *(float *)((int)param_1 + 0x1376) = _DAT_10015f78 * fVar2 + *(float *)((int)param_1 + 0x1376);
      *(float *)((int)param_1 + 0x137a) = _DAT_10015f8c * fVar2 + *(float *)((int)param_1 + 0x137a);
      *(float *)((int)param_1 + 0x137e) = _DAT_10015f80 * fVar2 + *(float *)((int)param_1 + 0x137e);
      *(float *)((int)param_1 + 0x1382) = _DAT_10015f5c * fVar2 + *(float *)((int)param_1 + 0x1382);
      *(float *)((int)param_1 + 0x1386) = _DAT_10015fa4 * fVar2 + *(float *)((int)param_1 + 0x1386);
      *(float *)((int)param_1 + 0x138a) = _DAT_10015f84 * fVar2 + *(float *)((int)param_1 + 0x138a);
    } while (local_8 <= *(int *)((int)param_1 + 0x986));
  }
  return local_2c;
}


