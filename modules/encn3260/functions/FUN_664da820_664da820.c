/* Module: encn3260.dll
   Function: FUN_664da820
   Address: 664da820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664da820(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  void *pvVar9;
  undefined1 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 local_28;
  undefined1 uStack_24;
  void *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  void *local_10;
  uint local_c;
  undefined1 *local_8;
  
  uVar2 = FUN_664db160(param_1);
  if (uVar2 != 0) {
    return 0x80004005;
  }
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x1c))(param_1);
  local_14 = pbVar3;
  do {
    if ((pbVar3 == (byte *)0x0) ||
       (iVar4 = (**(code **)(*param_1 + 0x18))(param_1), local_14 + iVar4 <= pbVar3)) {
      return 0;
    }
    puVar5 = operator_new(0x5a);
    if (puVar5 == (undefined1 *)0x0) {
      local_8 = (undefined1 *)0x0;
    }
    else {
      FUN_664db520(puVar5 + 0x3e,10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined2 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined4 *)(puVar5 + 10) = 0;
      *(undefined4 *)(puVar5 + 0xe) = 0;
      *(undefined4 *)(puVar5 + 0x12) = 0;
      *(undefined4 *)(puVar5 + 0x16) = 0;
      *(undefined4 *)(puVar5 + 0x1a) = 0;
      *(undefined4 *)(puVar5 + 0x1e) = 0;
      *(undefined4 *)(puVar5 + 0x22) = 0;
      *(undefined4 *)(puVar5 + 0x26) = 0;
      *(undefined4 *)(puVar5 + 0x2a) = 0;
      *(undefined4 *)(puVar5 + 0x2e) = 0;
      *(undefined4 *)(puVar5 + 0x3a) = 0;
      *(undefined4 *)(puVar5 + 0x56) = 0;
      local_8 = puVar5;
    }
    puVar5 = local_8;
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    pbVar12 = local_14 + (iVar4 - (int)pbVar3);
    FUN_6648fa70((int)puVar5);
    local_1c = FUN_664dabb0(puVar5,pbVar3,(int)pbVar12);
    if (puVar5[3] == -0x36) {
      pbVar3 = operator_new((uint)*(ushort *)(puVar5 + 4) << 2);
      pbVar12 = *(byte **)(puVar5 + 0x2a);
      pbVar7 = pbVar3;
      for (uVar2 = (uint)*(ushort *)(puVar5 + 4); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pbVar7 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar7 = pbVar7 + 1;
      }
      *(byte **)(local_8 + 0x2a) = pbVar3;
      local_18 = 0;
      puVar5 = local_8;
      if (local_8[2] != '\0') {
        do {
          puVar6 = operator_new(0x14);
          if (puVar6 == (undefined4 *)0x0) {
            local_10 = (void *)0x0;
          }
          else {
            local_10 = (void *)FUN_664ba900(puVar6);
          }
          local_c = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                    (uint)pbVar3[3];
          pbVar3 = pbVar3 + 4;
          puVar10 = local_8;
          puVar5 = local_8;
          while( true ) {
            local_8 = puVar5;
            if ((pbVar3 == (byte *)0x0) ||
               (puVar10 = puVar5,
               (byte *)(*(int *)(puVar5 + 0x2a) + (uint)*(ushort *)(puVar5 + 4) * 4) <= pbVar3))
            goto LAB_664daa31;
            pbVar12 = operator_new(6);
            iVar4 = ((uint)*(ushort *)(puVar5 + 4) * 4 - (int)pbVar3) + *(int *)(puVar5 + 0x2a);
            if ((pbVar3 == (byte *)0x0) || (iVar4 == 0)) {
              pbVar7 = (byte *)0x0;
            }
            else {
              bVar1 = *pbVar3;
              pbVar7 = pbVar3 + 1;
              *pbVar12 = bVar1;
              puVar10 = local_8;
              if (bVar1 != 0) {
                bVar1 = *pbVar7;
                pbVar7 = pbVar3 + 2 + bVar1;
                pbVar12[1] = bVar1;
                if (iVar4 < (int)pbVar7 - (int)pbVar3) {
                  pbVar7 = (byte *)0x0;
                }
                else {
                  *(byte **)(pbVar12 + 2) = pbVar3 + 2;
                }
              }
            }
            pbVar3 = pbVar7;
            if (*pbVar12 == 0) break;
            FUN_664baab0(local_10,pbVar12);
            puVar5 = local_8;
          }
          operator_delete(pbVar12);
LAB_664daa31:
          puVar6 = FUN_664bbe00(puVar10 + 0x3e,local_c);
          *puVar6 = local_10;
          local_18 = local_18 + 1;
          puVar5 = local_8;
        } while (local_18 < (int)(uint)(byte)puVar10[2]);
      }
    }
    else if (puVar5[3] == -0x34) {
      uStack_24 = 0;
      local_28 = *(undefined4 *)(puVar5 + 0x36);
      pbVar12 = &DAT_664e2ff0;
      pbVar3 = (byte *)&local_28;
      do {
        bVar1 = *pbVar3;
        bVar14 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_664daa9d:
          iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_664daaa2;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar14 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_664daa9d;
        pbVar3 = pbVar3 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_664daaa2:
      if (iVar4 == 0) {
        pcVar8 = operator_new((uint)*(ushort *)(puVar5 + 4) * 4 - 8);
        puVar10 = local_8;
        pcVar11 = *(char **)(puVar5 + 0x3a);
        pcVar13 = pcVar8;
        for (uVar2 = (uint)*(ushort *)(puVar5 + 4) * 4 - 8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        *(char **)(local_8 + 0x3a) = pcVar8;
        pvVar9 = operator_new((uint)(byte)local_8[2] << 3);
        *(void **)(puVar10 + 0x56) = pvVar9;
        uVar2 = 0;
        puVar5 = local_8;
        if (puVar10[2] != '\0') {
          do {
            puVar10 = local_8;
            pcVar8 = FUN_664dab40((void *)(*(int *)(local_8 + 0x56) + uVar2 * 8),pcVar8,1);
            uVar2 = uVar2 + 1;
            puVar5 = local_8;
          } while (uVar2 < (byte)puVar10[2]);
        }
      }
    }
    pbVar3 = local_1c;
    FUN_664baab0(local_20,puVar5);
  } while( true );
}


