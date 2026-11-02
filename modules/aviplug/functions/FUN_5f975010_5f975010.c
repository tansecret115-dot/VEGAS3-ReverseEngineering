/* Module: aviplug.dll
   Function: FUN_5f975010
   Address: 5f975010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f975010(int *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *local_38;
  int local_34;
  int local_30;
  uint local_28;
  uint *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  uint local_8;
  uint local_4;
  
  local_28 = 0;
  local_18 = (int *)0x0;
  local_14 = param_2 + 0x1e8;
  local_1c = (undefined4 *)(param_2 + 0x168);
  puVar4 = (undefined4 *)(param_2 + 0x20);
  iVar11 = 5;
  do {
    *puVar4 = local_1c;
    puVar4[8] = param_2 + 0x1e8 + ((int)local_18 + 0x3f >> 6) * 8;
    uVar3 = FUN_5f974810(param_1,puVar4 + -8,&local_1c);
    puVar4 = puVar4 + 0x12;
    param_1 = param_1 + 0x14;
    local_28 = local_28 | uVar3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  piVar9 = (int *)(param_2 + 0x168);
  *local_1c = 0;
  if (*piVar9 != 0) {
    param_1 = (int *)0x40;
    local_38 = local_18;
    if ((int)local_18 < 0x41) {
      param_1 = local_18;
    }
    if (local_28 == 0) {
      local_20 = (uint *)(param_2 + 0x1f0);
      local_30 = 0;
      uVar3 = *(uint *)(param_2 + 0x1ec);
      if (*(int *)(param_2 + 0x168) != 0) {
LAB_5f97510c:
        local_8 = 0;
        puVar12 = *(uint **)(param_2 + 0x168 + local_30 * 4);
        uVar5 = puVar12[1] & 0xffff;
        local_4 = *puVar12;
        local_34 = (int)puVar12[1] >> 0x10;
        uVar13 = __aullshr((byte)uVar5,uVar3);
        local_8 = local_8 | (uint)uVar13;
        uVar6 = local_4 | (uint)(uVar13 >> 0x20);
        local_38 = (int *)((int)local_38 + uVar5);
        param_1 = (int *)((int)param_1 + uVar5);
        iVar11 = 0;
        if (0x3f < local_34) {
          local_30 = local_30 + 1;
          *puVar12 = 0x1556;
          puVar12[1] = 0;
          puVar4 = (undefined4 *)(param_2 + 0x168 + local_30 * 4);
          puVar7 = *(undefined4 **)(param_2 + 0x168 + local_30 * 4);
          while (puVar7 != (undefined4 *)0x0) {
            puVar4 = puVar4 + 1;
            *puVar7 = 0x1556;
            puVar7[1] = 0;
            local_30 = local_30 + 1;
            puVar7 = (undefined4 *)*puVar4;
          }
        }
        local_4 = uVar6;
        if ((int)param_1 < 0x41) goto LAB_5f975258;
        iVar1 = (uVar6 >> 0x18) * 8;
        uVar13 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar1),uVar6);
        iVar11 = (int)uVar13 + *(int *)(&DAT_5f9e0192 + iVar1);
        uVar6 = *(uint *)(&DAT_5f9e1190 + iVar11 * 8);
        puVar12[1] = *(uint *)(&DAT_5f9e1194 + iVar11 * 8);
        *puVar12 = uVar6;
        sVar2 = *(short *)(&DAT_5f9e0196 + iVar1);
        lVar14 = __allshl((char)sVar2 - (byte)uVar5,uVar3);
        uVar6 = (uint)((ulonglong)lVar14 >> 0x20);
        local_38 = (int *)((int)local_38 - (int)sVar2);
        param_1 = (int *)((int)param_1 - (int)sVar2);
        do {
          local_34 = local_34 + 1;
          puVar12 = puVar12 + 2;
          while( true ) {
            if (iVar11 == 4) {
              local_30 = local_30 + 1;
              uVar3 = uVar6;
              if (*(int *)(param_2 + 0x168 + local_30 * 4) == 0) {
                return;
              }
              goto LAB_5f97510c;
            }
LAB_5f975258:
            if (0x3f < local_34) {
              *puVar12 = 0x1556;
              puVar4 = (undefined4 *)(param_2 + 0x16c + local_30 * 4);
              puVar12[1] = 0;
              puVar7 = (undefined4 *)*puVar4;
              if (puVar7 == (undefined4 *)0x0) {
                return;
              }
              do {
                puVar4 = puVar4 + 1;
                *puVar7 = 0x1556;
                puVar7[1] = 0;
                puVar7 = (undefined4 *)*puVar4;
              } while (puVar7 != (undefined4 *)0x0);
              return;
            }
            sVar2 = *(short *)(&DAT_5f9e0196 + (uVar6 >> 0x18) * 8);
            iVar10 = (int)sVar2;
            iVar1 = (uVar6 >> 0x18) * 8;
            if (iVar10 <= (int)param_1) break;
            local_8 = *local_20;
            local_4 = local_20[1];
            local_20 = local_20 + 2;
            bVar8 = (byte)param_1;
            uVar13 = __aullshr(bVar8,local_4);
            uVar6 = uVar6 | (uint)(uVar13 >> 0x20);
            param_1 = param_1 + 0x10;
            if ((int)local_38 <= (int)param_1) {
              param_1 = local_38;
            }
            iVar1 = (uVar6 >> 0x18) * 8;
            if ((int)param_1 < 0x41) {
              if ((int)local_38 < (int)*(short *)(&DAT_5f9e0196 + iVar1)) {
                *puVar12 = 0x1556;
                puVar4 = (undefined4 *)(param_2 + 0x16c + local_30 * 4);
                puVar12[1] = 0;
                puVar7 = (undefined4 *)*puVar4;
                while (puVar7 != (undefined4 *)0x0) {
                  puVar4 = puVar4 + 1;
                  *puVar7 = 0x1556;
                  puVar7[1] = 0;
                  puVar7 = (undefined4 *)*puVar4;
                }
                return;
              }
            }
            else {
              uVar13 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar1),uVar6);
              iVar11 = (int)uVar13 + *(int *)(&DAT_5f9e0192 + iVar1);
              local_34 = local_34 + 1;
              uVar3 = *(uint *)(&DAT_5f9e1194 + iVar11 * 8);
              *puVar12 = *(uint *)(&DAT_5f9e1190 + iVar11 * 8);
              puVar12[1] = uVar3;
              sVar2 = *(short *)(&DAT_5f9e0196 + iVar1);
              lVar14 = __allshl((char)sVar2 - bVar8,local_4);
              uVar6 = (uint)((ulonglong)lVar14 >> 0x20);
              param_1 = (int *)((int)param_1 - (int)sVar2);
              local_38 = (int *)((int)local_38 - (int)sVar2);
              puVar12 = puVar12 + 2;
            }
          }
          uVar13 = __aullshr((byte)*(undefined2 *)(&DAT_5f9e0190 + iVar1),uVar6);
          iVar11 = (int)uVar13 + *(int *)(&DAT_5f9e0192 + iVar1);
          uVar3 = *(uint *)(&DAT_5f9e1190 + iVar11 * 8);
          puVar12[1] = *(uint *)(&DAT_5f9e1194 + iVar11 * 8);
          *puVar12 = uVar3;
          lVar14 = __allshl((byte)sVar2,uVar6);
          uVar6 = (uint)((ulonglong)lVar14 >> 0x20);
          local_38 = (int *)((int)local_38 - iVar10);
          param_1 = (int *)((int)param_1 - iVar10);
        } while( true );
      }
    }
    else {
      puVar4 = (undefined4 *)*piVar9;
      if (puVar4 != (undefined4 *)0x0) {
        do {
          piVar9 = piVar9 + 1;
          *puVar4 = 0x1556;
          puVar4[1] = 0;
          puVar4 = (undefined4 *)*piVar9;
        } while (puVar4 != (undefined4 *)0x0);
        return;
      }
    }
  }
  return;
}


