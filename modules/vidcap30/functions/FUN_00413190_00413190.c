/* Module: vidcap30.exe
   Function: FUN_00413190
   Address: 00413190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00413190(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_320;
  undefined4 local_314;
  undefined4 local_215;
  undefined4 local_210;
  undefined4 local_111;
  undefined4 local_10c;
  undefined4 local_d;
  
  if (param_1 != 0) {
    local_338 = 0;
    sVar3 = *(short *)(param_1 + 0xe);
    if (sVar3 == 1) {
      local_338 = 2;
    }
    else if (sVar3 == 4) {
      local_338 = 0x10;
    }
    else if (sVar3 == 8) {
      local_338 = 0x100;
    }
    uVar14 = *(uint *)(param_1 + 0x20);
    if ((uVar14 != 0) && ((int)uVar14 <= (int)local_338)) {
      local_338 = uVar14;
    }
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      puVar19 = (undefined4 *)*param_2;
      puVar21 = (undefined4 *)(param_1 + 0x28);
      for (uVar14 = local_338 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
      for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
        *(undefined1 *)puVar21 = *(undefined1 *)puVar19;
        puVar19 = (undefined4 *)((int)puVar19 + 1);
        puVar21 = (undefined4 *)((int)puVar21 + 1);
      }
    }
    DVar6 = GetSysColor(0x10);
    DVar7 = GetSysColor(0xf);
    local_320 = 0x80;
    uVar14 = 0xc0;
    if ((param_3 != 1) && (param_3 != 2)) {
      if (param_3 != 3) {
        return;
      }
      DVar7 = GetSysColor(0xd);
      uVar17 = DVar6 >> 8 & 0xff;
      uVar8 = DVar6 & 0xff;
      uVar20 = DVar6 >> 0x10 & 0xff;
      uVar9 = ((DVar7 >> 0x10 & 0xff) + uVar20) / 2;
      uVar10 = ((DVar7 & 0xff) + uVar8) / 2;
      uVar18 = (uint)CONCAT11((char)uVar9,(char)(((DVar7 >> 8 & 0xff) + uVar17) / 2)) << 8;
      DVar6 = uVar18 | uVar10;
      uVar14 = (uVar8 + uVar17 + uVar20) / 3;
      uVar12 = (uVar18 & 0xff00) >> 8;
      uVar18 = (uVar10 + uVar9 + uVar12) / 3;
      if (((int)uVar18 < (int)(uVar14 - 0x14)) || (uVar14 + 0x14 < uVar18)) {
        uVar11 = (uVar10 * uVar14) / uVar18;
        uVar10 = 0xff;
        if (uVar11 < 0x100) {
          uVar10 = uVar11;
        }
        local_330 = 0xff;
        uVar12 = (uVar12 * uVar14) / uVar18;
        if (uVar12 < 0x100) {
          local_330 = uVar12;
        }
        uVar18 = (uVar9 * uVar14) / uVar18;
        if (0xff < uVar18) {
          uVar18 = 0xff;
        }
        DVar6 = uVar10 & 0xff | (uint)CONCAT11((char)uVar18,(undefined1)local_330) << 8;
      }
      uVar9 = ((DVar6 & 0xff) * 3) / 2;
      uVar18 = 0xff;
      if (uVar9 < 0x100) {
        uVar18 = uVar9;
      }
      local_334 = 0xff;
      uVar9 = DVar6 >> 8 & 0xff;
      uVar10 = (uVar9 * 3) / 2;
      if (uVar10 < 0x100) {
        local_334 = uVar10;
      }
      uVar10 = ((DVar6 >> 0x10) * 3) / 2;
      if (0xff < uVar10) {
        uVar10 = 0xff;
      }
      DVar7 = (uint)CONCAT11((char)uVar10,(undefined1)local_334) << 8 | uVar18 & 0xff;
      iVar15 = (DVar6 & 0xff) - uVar8;
      if (((((iVar15 < -0x14) || (0x14 < iVar15)) || (iVar15 = uVar9 - uVar17, iVar15 < -0x14)) ||
          ((0x14 < iVar15 || (iVar15 = (DVar6 >> 0x10) - uVar20, iVar15 < -0x14)))) ||
         (0x14 < iVar15)) {
        local_320 = 0x80;
        uVar14 = 0xc0;
      }
      else if (uVar14 < 0x80) {
        local_320 = 0x6e;
        uVar14 = 0xb4;
      }
      else {
        local_320 = 0x92;
        uVar14 = 0xcc;
      }
    }
    local_314 = local_314 & 0xffffff00;
    local_210 = local_210 & 0xffffff00;
    *(char *)((int)&local_314 + local_320) = (char)(DVar6 >> 8);
    *(char *)((int)&local_210 + local_320) = (char)DVar6;
    *(char *)((int)&local_210 + uVar14) = (char)DVar7;
    local_10c = local_10c & 0xffffff00;
    *(char *)((int)&local_314 + uVar14) = (char)(DVar7 >> 8);
    *(char *)((int)&local_10c + local_320) = (char)(DVar6 >> 0x10);
    *(char *)((int)&local_10c + uVar14) = (char)(DVar7 >> 0x10);
    local_111 = CONCAT31(local_111._1_3_,0xff);
    local_215 = CONCAT31(local_215._1_3_,0xff);
    local_d = CONCAT31(local_d._1_3_,0xff);
    if (1 < local_320) {
      iVar15 = 0;
      do {
        cVar5 = ftol();
        *(char *)((int)&local_210 + iVar15 + 1) = cVar5 + (char)local_210;
        cVar5 = ftol();
        *(char *)((int)&local_314 + iVar15 + 1) = cVar5 + (char)local_314;
        cVar5 = ftol();
        *(char *)((int)&local_10c + iVar15 + 1) = cVar5 + (char)local_10c;
        iVar1 = iVar15 + 2;
        iVar15 = iVar15 + 1;
      } while (iVar1 < (int)local_320);
    }
    uVar18 = local_320 + 1;
    bVar4 = uVar18 < uVar14;
    while (bVar4) {
      cVar5 = ftol();
      *(char *)((int)&local_210 + uVar18) = cVar5 + *(char *)((int)&local_210 + local_320);
      cVar5 = ftol();
      *(char *)((int)&local_314 + uVar18) = cVar5 + *(char *)((int)&local_314 + local_320);
      cVar5 = ftol();
      *(char *)((int)&local_10c + uVar18) = cVar5 + *(char *)((int)&local_10c + local_320);
      uVar18 = uVar18 + 1;
      bVar4 = (int)uVar18 < (int)uVar14;
    }
    uVar18 = uVar14 + 1;
    bVar4 = uVar18 < 0xff;
    while (bVar4) {
      cVar5 = ftol();
      *(char *)((int)&local_210 + uVar18) = cVar5 + *(char *)((int)&local_210 + uVar14);
      cVar5 = ftol();
      *(char *)((int)&local_314 + uVar18) = cVar5 + *(char *)((int)&local_314 + uVar14);
      cVar5 = ftol();
      *(char *)((int)&local_10c + uVar18) = cVar5 + *(char *)((int)&local_10c + uVar14);
      uVar18 = uVar18 + 1;
      bVar4 = (int)uVar18 < 0xff;
    }
    if ((local_338 * 4 != 0) && (param_2 != (int *)0x0)) {
      if (*param_2 == 0) {
        pvVar13 = calloc(1,local_338 * 4);
        *param_2 = (int)pvVar13;
      }
      if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
        puVar19 = (undefined4 *)(param_1 + 0x28);
        puVar21 = (undefined4 *)*param_2;
        for (uVar14 = local_338 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        }
        for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar19;
          puVar19 = (undefined4 *)((int)puVar19 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
      }
    }
    if (0 < (int)local_338) {
      pbVar16 = (byte *)(param_1 + 0x29);
      do {
        if ((param_4 == 0) || (*(int *)(pbVar16 + -1) != 0xff00ff)) {
          uVar14 = ((uint)pbVar16[1] + (uint)*pbVar16 + (uint)pbVar16[-1]) / 3;
          pbVar16[1] = *(byte *)((int)&local_210 + uVar14);
          bVar2 = *(byte *)((int)&local_10c + uVar14);
          *pbVar16 = *(byte *)((int)&local_314 + uVar14);
          pbVar16[-1] = bVar2;
        }
        pbVar16 = pbVar16 + 4;
        local_338 = local_338 - 1;
      } while (local_338 != 0);
    }
  }
  return;
}


