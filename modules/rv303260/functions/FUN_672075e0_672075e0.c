/* Module: rv303260.dll
   Function: FUN_672075e0
   Address: 672075e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_672075e0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *local_24;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar3 = param_2;
  uVar7 = param_2[2];
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (uVar7 != 0xffffffff) {
    piVar9 = (int *)param_2[3];
    do {
      if (*piVar9 == 0) {
        local_c = local_c + 1;
      }
      else if ((*(byte *)((int)param_1 + piVar9[1]) & 0x20) != 0) {
        if (local_8 == param_2[2]) {
          uVar4 = *param_2;
        }
        else {
          uVar4 = piVar9[3];
        }
        local_10 = *(byte *)((int)param_1 + (uVar4 - 1)) & 0xf;
      }
      piVar9 = piVar9 + 2;
      local_8 = local_8 + 1;
    } while (local_8 < uVar7 + 1);
  }
  if ((local_c != 0) && (local_10 != 0)) {
    uVar4 = param_2[2];
    puVar12 = (uint *)((uVar4 - local_10) + 1);
    if (*(int *)((int)this + 0x116) == 0) {
      uVar4 = 0;
      if (uVar7 != 0xffffffff) {
        do {
          uVar4 = uVar4 + 1;
          *(undefined4 *)((param_2[3] - 8) + uVar4 * 8) = 0;
          *(undefined4 *)((param_2[3] - 4) + uVar4 * 8) = 0;
        } while (uVar4 < param_2[2] + 1);
      }
      uVar7 = *param_2;
      for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_1 = 0;
        param_1 = param_1 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)param_1 = 0;
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      *param_2 = 0;
      return;
    }
    for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      iVar14 = puVar3[3] + uVar4 * 8;
      if (*(int *)(puVar3[3] + uVar4 * 8) == 1) {
        iVar10 = *(int *)(iVar14 + 4);
        pbVar8 = (byte *)((int)param_1 + iVar10);
        if ((*pbVar8 & 0x20) != 0) {
          if (uVar4 == puVar3[2]) {
            uVar7 = *puVar3;
          }
          else {
            uVar7 = *(uint *)(iVar14 + 0xc);
          }
          uVar7 = uVar7 - iVar10;
          uVar13 = (uint)(pbVar8[uVar7 - 1] >> 4);
          puVar5 = (uint *)((uVar13 * (int)puVar12) / local_10);
          param_2 = (uint *)(((uVar13 + 1) * (int)puVar12) / local_10);
          if (uVar13 == local_10 - 1) {
            param_2 = puVar12;
          }
          local_8 = (int)param_2 - (int)puVar5;
          if (1 < local_10) {
            pbVar8 = pbVar8 + (uVar7 - 2);
            iVar14 = (local_8 + (int)puVar5) * 8;
            while( true ) {
              bVar2 = *pbVar8;
              if ((bVar2 & 1) == 0) {
                iVar10 = -2;
                *(uint *)(iVar14 + 4 + puVar3[3]) = (uint)pbVar8[-1] << 7 | (uint)(bVar2 >> 1);
              }
              else {
                iVar10 = -4;
                *(uint *)(iVar14 + 4 + puVar3[3]) =
                     (uint)CONCAT21(CONCAT11(pbVar8[-3],pbVar8[-2]),pbVar8[-1]) << 7 |
                     (uint)(bVar2 >> 1);
              }
              pbVar8 = pbVar8 + iVar10;
              if (local_8 == 0) break;
              local_8 = local_8 + -1;
              iVar14 = iVar14 + -8;
            }
          }
          iVar14 = 0;
          if (puVar5 < param_2) {
            piVar9 = (int *)(puVar3[3] + (int)puVar5 * 8);
            puVar6 = puVar5;
            do {
              if (*piVar9 == 0) {
                iVar14 = iVar14 + 1;
                local_24 = puVar6;
              }
              puVar6 = (uint *)((int)puVar6 + 1);
              piVar9 = piVar9 + 2;
            } while (puVar6 < param_2);
          }
          if (iVar14 == 1) {
            iVar10 = puVar3[3] + (int)local_24 * 8;
            iVar14 = *(int *)(iVar10 + 4);
            pbVar8 = (byte *)((int)param_1 + iVar14);
            if (local_24 == (uint *)puVar3[2]) {
              uVar13 = *puVar3;
            }
            else {
              uVar13 = *(uint *)(iVar10 + 0xc);
            }
            uVar13 = uVar13 - iVar14;
            if (uVar13 == 0) {
              uVar13 = uVar7;
            }
            pbVar11 = pbVar8;
            for (uVar7 = uVar13 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              pbVar11[0] = 0;
              pbVar11[1] = 0;
              pbVar11[2] = 0;
              pbVar11[3] = 0;
              pbVar11 = pbVar11 + 4;
            }
            for (uVar7 = uVar13 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pbVar11 = 0;
              pbVar11 = pbVar11 + 1;
            }
            for (; puVar5 < param_2; puVar5 = (uint *)((int)puVar5 + 1)) {
              iVar14 = puVar3[3] + (int)puVar5 * 8;
              if (*(int *)(puVar3[3] + (int)puVar5 * 8) == 1) {
                iVar10 = *(int *)(iVar14 + 4);
                if (puVar5 == (uint *)puVar3[2]) {
                  uVar7 = *puVar3;
                }
                else {
                  uVar7 = *(uint *)(iVar14 + 0xc);
                }
                uVar7 = uVar7 - iVar10;
                if (uVar13 <= uVar7) {
                  uVar7 = uVar13;
                }
                if (uVar7 != 0) {
                  pbVar11 = pbVar8;
                  do {
                    *pbVar11 = *pbVar11 ^ pbVar11[(int)param_1 + (iVar10 - (int)pbVar8)];
                    pbVar11 = pbVar11 + 1;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
              }
            }
            iVar14 = *(int *)(puVar3[3] + 4 + uVar4 * 8);
            if (uVar13 != 0) {
              pbVar11 = pbVar8;
              do {
                *pbVar11 = *pbVar11 ^ pbVar11[(int)param_1 + (iVar14 - (int)pbVar8)];
                pbVar11 = pbVar11 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            *pbVar8 = *(byte *)(*(int *)(puVar3[3] + 4 + uVar4 * 8) + (int)param_1) & 0xdf;
            *(undefined4 *)(puVar3[3] + (int)local_24 * 8) = 1;
          }
        }
      }
    }
  }
  uVar7 = puVar3[3];
  while( true ) {
    puVar1 = (undefined4 *)(uVar7 + puVar3[2] * 8);
    iVar14 = *(int *)(uVar7 + puVar3[2] * 8);
    if (((iVar14 != 1) || ((*(byte *)(puVar1[1] + (int)param_1) & 0x20) == 0)) && (iVar14 != 0))
    break;
    *puVar1 = 0;
    uVar4 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar3 = *(uint *)(uVar7 + 4 + uVar4 * 8);
    if (uVar4 == 0) {
      return;
    }
    puVar3[2] = uVar4 - 1;
  }
  return;
}


