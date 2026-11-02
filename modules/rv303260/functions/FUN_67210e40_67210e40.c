/* Module: rv303260.dll
   Function: FUN_67210e40
   Address: 67210e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_67210e40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint local_20;
  int local_14;
  byte *local_10;
  int local_8;
  
  if (1 < (int)(param_4 - 2U)) {
    iVar6 = param_3 + -4;
    iVar12 = param_5 + param_2;
    local_10 = (byte *)(param_5 + 1 + param_1);
    puVar15 = (uint *)(param_1 + 1 + param_5 * 2);
    local_20 = param_4 - 2U >> 1;
    do {
      pbVar7 = (byte *)((-1 - param_5) + (int)puVar15);
      pbVar1 = pbVar7 + -param_5;
      pbVar10 = pbVar1;
      if (param_2 != 0) {
        pbVar10 = (byte *)(iVar12 - param_5);
      }
      *pbVar7 = (byte)((int)((uint)*(byte *)((int)puVar15 + -1) + (uint)*pbVar1) >> 1);
      puVar2 = (uint *)(pbVar1 + 1);
      pbVar10 = pbVar10 + 1;
      param_4 = (uint)pbVar1[3] + (uint)pbVar1[2] + (uint)(byte)*puVar2;
      param_3 = (uint)*(byte *)((int)puVar15 + 2) + (uint)(byte)*puVar15 +
                (uint)*(byte *)((int)puVar15 + 1);
      local_8 = 1;
      pbVar1 = local_10;
      puVar14 = puVar15;
      if (1 < iVar6) {
        do {
          param_4 = param_4 + (uint)*(byte *)((int)puVar2 + 3);
          param_3 = param_3 + (uint)*(byte *)((int)puVar14 + 3);
          if ((param_4 - param_3 < 0xa1) && (-0xa1 < param_4 - param_3)) {
            bVar8 = (byte)((int)((uint)(byte)*puVar2 + (uint)(byte)*puVar14) >> 1);
LAB_6721107f:
            *pbVar1 = bVar8;
            puVar3 = puVar2;
            puVar13 = puVar14;
          }
          else {
            local_14 = (((param_4 - (uint)pbVar10[3]) - (uint)pbVar10[2]) - (uint)*pbVar10) -
                       (uint)pbVar10[1];
            if (local_14 < 0) {
              local_14 = -local_14;
            }
            iVar5 = param_3 - ((uint)pbVar10[param_5 * 2 + 2] + (uint)pbVar10[param_5 * 2 + 3] +
                               (uint)pbVar10[param_5 * 2] + (uint)pbVar10[param_5 * 2 + 1]);
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (199 < iVar5 + local_14) {
              bVar8 = (byte)(((uint)pbVar1[-1] + (uint)(byte)*puVar2 + (uint)(byte)*puVar14) *
                             0x5555 >> 0x10);
              goto LAB_6721107f;
            }
            bVar8 = (byte)*puVar2;
            bVar4 = *pbVar1;
            if (bVar4 < bVar8) {
              bVar8 = (byte)*puVar14;
              if ((bVar4 <= bVar8) && (bVar4 = (byte)*puVar2, bVar8 < bVar4)) {
LAB_67210fea:
                bVar4 = bVar8;
              }
            }
            else {
              bVar4 = (byte)*puVar14;
              if ((bVar4 < bVar8) || (bVar8 = *pbVar1, bVar8 <= bVar4)) goto LAB_67210fea;
            }
            bVar8 = pbVar1[1];
            *pbVar1 = bVar4;
            bVar4 = *(byte *)((int)puVar2 + 1);
            if (bVar8 < bVar4) {
              bVar9 = *(byte *)((int)puVar14 + 1);
              bVar4 = bVar8;
              if ((bVar8 <= bVar9) &&
                 (bVar4 = *(byte *)((int)puVar2 + 1), bVar9 < *(byte *)((int)puVar2 + 1))) {
LAB_67211018:
                bVar4 = bVar9;
              }
            }
            else {
              bVar9 = *(byte *)((int)puVar14 + 1);
              if ((bVar4 <= bVar9) && (bVar4 = pbVar1[1], bVar9 < bVar4)) goto LAB_67211018;
            }
            pbVar1[1] = bVar4;
            puVar3 = (uint *)((int)puVar2 + 1);
            pbVar1 = pbVar1 + 1;
            puVar13 = (uint *)((int)puVar14 + 1);
            pbVar10 = pbVar10 + 1;
            local_8 = local_8 + 1;
            param_4 = (param_4 - (uint)(byte)*puVar2) + (uint)(byte)puVar2[1];
            param_3 = (param_3 - (uint)(byte)*puVar14) + (uint)(byte)puVar14[1];
          }
          param_4 = param_4 - (uint)(byte)*puVar3;
          param_3 = param_3 - (uint)(byte)*puVar13;
          puVar2 = (uint *)((int)puVar3 + 1);
          pbVar1 = pbVar1 + 1;
          puVar14 = (uint *)((int)puVar13 + 1);
          pbVar10 = pbVar10 + 1;
          local_8 = local_8 + 1;
        } while (local_8 < iVar6);
      }
      iVar5 = (((param_4 - (uint)pbVar10[1]) - (uint)pbVar10[3]) - (uint)pbVar10[2]) -
              (uint)*pbVar10;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      iVar11 = param_3 - ((uint)pbVar10[param_5 * 2 + 2] + (uint)pbVar10[param_5 * 2 + 3] +
                          (uint)pbVar10[param_5 * 2 + 1] + (uint)pbVar10[param_5 * 2]);
      if (iVar11 < 0) {
        iVar11 = -iVar11;
      }
      if (iVar11 + iVar5 < 200) {
        bVar8 = (byte)*puVar2;
        bVar4 = *pbVar1;
        if (bVar4 < bVar8) {
          bVar8 = (byte)*puVar14;
          if ((bVar4 <= bVar8) && (bVar4 = (byte)*puVar2, bVar8 < bVar4)) {
LAB_6721114a:
            bVar4 = bVar8;
          }
        }
        else {
          bVar4 = (byte)*puVar14;
          if ((bVar4 < bVar8) || (bVar8 = *pbVar1, bVar8 <= bVar4)) goto LAB_6721114a;
        }
        bVar8 = pbVar1[1];
        *pbVar1 = bVar4;
        bVar4 = *(byte *)((int)puVar2 + 1);
        if (bVar8 < bVar4) {
          bVar9 = *(byte *)((int)puVar14 + 1);
          bVar4 = bVar8;
          if ((bVar8 <= bVar9) && (bVar4 = *(byte *)((int)puVar2 + 1), bVar9 < bVar4)) {
LAB_67211178:
            bVar4 = bVar9;
          }
        }
        else {
          bVar9 = *(byte *)((int)puVar14 + 1);
          if ((bVar4 <= bVar9) && (bVar4 = pbVar1[1], bVar9 < bVar4)) goto LAB_67211178;
        }
        bVar8 = pbVar1[2];
        pbVar1[1] = bVar4;
        bVar4 = *(byte *)((int)puVar2 + 2);
        if (bVar8 < bVar4) {
          bVar9 = *(byte *)((int)puVar14 + 2);
          bVar4 = bVar8;
          if ((bVar8 <= bVar9) && (bVar4 = *(byte *)((int)puVar2 + 2), bVar9 < bVar4)) {
LAB_672111a7:
            bVar4 = bVar9;
          }
        }
        else {
          bVar9 = *(byte *)((int)puVar14 + 2);
          if ((bVar4 <= bVar9) && (bVar4 = pbVar1[2], bVar9 < bVar4)) goto LAB_672111a7;
        }
        pbVar1[2] = bVar4;
        bVar8 = *(byte *)((int)puVar2 + 3);
        bVar4 = pbVar1[3];
        if (bVar4 < bVar8) {
          bVar9 = *(byte *)((int)puVar14 + 3);
          if (bVar9 < bVar4) {
            pbVar1[3] = bVar4;
          }
          else {
            if (bVar8 <= bVar9) goto LAB_672111e1;
            pbVar1[3] = bVar9;
          }
        }
        else {
          bVar4 = *(byte *)((int)puVar14 + 3);
          if ((bVar8 <= bVar4) && (bVar8 = pbVar1[3], bVar4 < pbVar1[3])) {
            bVar8 = bVar4;
          }
LAB_672111e1:
          pbVar1[3] = bVar8;
        }
      }
      else {
        *(uint *)pbVar1 = ((*puVar14 ^ *puVar2) >> 1 & 0x7f7f7f7f) + (*puVar14 & *puVar2);
      }
      iVar5 = param_5 * 2;
      local_10 = local_10 + iVar5;
      puVar15 = (uint *)((int)puVar15 + iVar5);
      iVar12 = iVar12 + iVar5;
      local_20 = local_20 - 1;
    } while (local_20 != 0);
  }
  return;
}


