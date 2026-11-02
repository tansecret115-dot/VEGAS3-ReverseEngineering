/* Module: rv203260.dll
   Function: FUN_638a5130
   Address: 638a5130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_638a5130(int param_1,byte *param_2,uint *param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint local_28;
  int local_24;
  int local_20;
  uint *local_10;
  uint *local_c;
  
  puVar2 = param_3;
  local_20 = 0;
  puVar11 = (uint *)(param_3[0x81] + 1);
  if ((param_3[0x82] == 1) && (*(int *)(param_1 + 0x136) == 0)) {
    *(undefined4 *)(param_1 + 0x263) = 1;
  }
  if (((*(uint **)(param_1 + 0x263) <= puVar11) && (param_3[0x82] != 2)) &&
     (*(uint *)(param_1 + 0x28) >> 1 < *param_3)) {
    param_3 = (uint *)((*(int *)(param_1 + 0x25f) * (int)puVar11 + 99U) / 100);
    if (param_3 == (uint *)0x0) {
      param_3 = (uint *)0x1;
    }
    if (puVar11 < param_3) {
      param_3 = puVar11;
    }
    if ((uint *)0xf < param_3) {
      param_3 = (uint *)0xf;
    }
    puVar3 = (uint *)((*(int *)(param_1 + 0x24) - *puVar2) / *(uint *)(param_1 + 0x28));
    if (puVar3 <= param_3) {
      param_3 = puVar3;
    }
    local_c = (uint *)0x0;
    if (param_3 != (uint *)0x0) {
      local_28 = 0;
      do {
        puVar4 = (uint *)(local_28 / (uint)param_3);
        bVar1 = false;
        puVar3 = (uint *)(((int)puVar11 + local_28) / (uint)param_3);
        if (local_c == (uint *)((int)param_3 - 1U)) {
          puVar3 = puVar11;
        }
        uVar12 = 0;
        local_24 = (int)puVar3 - (int)puVar4;
        if (puVar4 < puVar3) {
          local_10 = puVar2 + (int)puVar4 + 2;
          puVar6 = puVar4;
          do {
            if (puVar6 == (uint *)puVar2[0x81]) {
              uVar5 = *puVar2 - puVar2[(int)puVar2[0x81] + 1];
            }
            else {
              uVar5 = *local_10 - local_10[-1];
            }
            if (uVar12 < uVar5) {
              uVar12 = uVar5;
            }
            puVar6 = (uint *)((int)puVar6 + 1);
            local_10 = local_10 + 1;
          } while (puVar6 < puVar3);
        }
        if ((puVar2[(int)puVar4 + 1] & 0xffff8000) == 0) {
          if (puVar4 < puVar3) {
            puVar6 = puVar2 + (int)puVar4 + 2;
            puVar7 = puVar4;
            do {
              if (puVar7 == (uint *)puVar2[0x81]) {
                uVar5 = *puVar2;
              }
              else {
                uVar5 = *puVar6;
              }
              if ((uVar5 & 0xffff8000) != 0) goto LAB_638a52c8;
              puVar7 = (uint *)((int)puVar7 + 1);
              puVar6 = puVar6 + 1;
            } while (puVar7 < puVar3);
          }
        }
        else {
LAB_638a52c8:
          bVar1 = true;
        }
        iVar8 = 1;
        if ((uint *)0x1 < param_3) {
          if (bVar1) {
            iVar8 = local_24 * 4 + 4;
          }
          else {
            iVar8 = local_24 * 2 + 2;
          }
          iVar8 = iVar8 + 1;
        }
        uVar12 = uVar12 + iVar8;
        if (*(int *)(param_1 + 0x24) - *puVar2 < uVar12) break;
        pbVar10 = param_2 + *puVar2;
        pbVar9 = pbVar10;
        for (uVar5 = uVar12 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar5 = uVar12 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar9 = 0;
          pbVar9 = pbVar9 + 1;
        }
        uVar5 = puVar2[0x81];
        puVar2[0x81] = uVar5 + 1;
        local_20 = local_20 + uVar12;
        puVar2[uVar5 + 2] = *puVar2;
        *puVar2 = *puVar2 + uVar12;
        if (puVar4 < puVar3) {
          puVar6 = puVar2 + (int)puVar4 + 2;
          do {
            uVar5 = puVar6[-1];
            pbVar9 = pbVar10;
            if (uVar5 < *puVar6) {
              do {
                *pbVar9 = *pbVar9 ^ param_2[uVar5];
                uVar5 = uVar5 + 1;
                pbVar9 = pbVar9 + 1;
              } while (uVar5 < *puVar6);
            }
            puVar6 = puVar6 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        *pbVar10 = *param_2 | 0x20;
        pbVar10[uVar12 - 1] = (char)local_c << 4 | (byte)param_3 & 0xf;
        if ((uint *)0x1 < param_3) {
          if (bVar1) {
            pbVar10 = pbVar10 + (uVar12 - 2);
            puVar6 = puVar2 + (int)puVar3 + 1;
            while( true ) {
              if (puVar3 == (uint *)(puVar2[0x81] + 1)) {
                uVar12 = *puVar2;
              }
              else {
                uVar12 = *puVar6;
              }
              iVar8 = uVar12 * 2;
              pbVar10[-3] = (byte)((uint)iVar8 >> 0x18);
              pbVar10[-2] = (byte)((uint)iVar8 >> 0x10);
              pbVar10[-1] = (byte)((uint)iVar8 >> 8);
              *pbVar10 = (byte)iVar8 | 1;
              if (puVar3 == puVar4) break;
              puVar3 = (uint *)((int)puVar3 - 1);
              puVar6 = puVar6 + -1;
              pbVar10 = pbVar10 + -4;
            }
          }
          else {
            pbVar10 = pbVar10 + (uVar12 - 2);
            puVar6 = puVar2 + (int)puVar3 + 1;
            while( true ) {
              if (puVar3 == (uint *)(puVar2[0x81] + 1)) {
                uVar12 = *puVar2;
              }
              else {
                uVar12 = *puVar6;
              }
              iVar8 = (uVar12 & 0x7fff) << 1;
              pbVar10[-1] = (byte)((uint)iVar8 >> 8);
              *pbVar10 = (byte)iVar8;
              if (puVar3 == puVar4) break;
              puVar3 = (uint *)((int)puVar3 - 1);
              puVar6 = puVar6 + -1;
              pbVar10 = pbVar10 + -2;
            }
          }
        }
        local_c = (uint *)((int)local_c + 1);
        local_28 = local_28 + (int)puVar11;
      } while (local_c < param_3);
    }
  }
  uVar12 = *(uint *)(param_1 + 0x122);
  uVar5 = *(uint *)(param_1 + 0x11e);
  if (uVar12 < uVar5) {
    iVar8 = (uVar12 - uVar5) + -1;
  }
  else {
    iVar8 = uVar12 - uVar5;
  }
  iVar13 = *(int *)(param_1 + 0xfa) * *(int *)(param_1 + 0x25f);
  iVar8 = *(int *)(param_1 + 0x267) + (local_20 * 8 - (uint)(iVar8 * iVar13) / 100000);
  *(int *)(param_1 + 0x267) = iVar8;
  if ((int)((uint)(iVar13 * 2) / 100) < iVar8) {
    *(int *)(param_1 + 0x263) = *(int *)(param_1 + 0x263) + 1;
  }
  return iVar13 * -0x5c28f5c2;
}


