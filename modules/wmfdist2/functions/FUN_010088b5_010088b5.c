/* Module: wmfdist2.exe
   Function: FUN_010088b5
   Address: 010088b5
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010088b5(undefined4 param_1,uint param_2,int param_3,byte param_4,undefined4 *param_5,
                 int param_6)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint *puVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  int aiStack_a4 [17];
  uint auStack_60 [17];
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  piVar14 = aiStack_a4;
  for (iVar7 = 0x10; piVar14 = piVar14 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar14 = 0;
  }
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      aiStack_a4[*(byte *)(uVar8 + param_3)] = aiStack_a4[*(byte *)(uVar8 + param_3)] + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_2);
  }
  auStack_60[1] = 0;
  uVar8 = 1;
  puVar10 = auStack_60 + 2;
  uVar5 = 0;
  uVar13 = uVar8;
  do {
    uVar4 = uVar5 + 4;
    cVar1 = (char)uVar13;
    uVar13 = uVar13 + 1;
    *puVar10 = (*(int *)((int)aiStack_a4 + uVar5 + 4) << (0x10U - cVar1 & 0x1f)) +
               *(int *)((int)auStack_60 + uVar5 + 4);
    puVar10 = puVar10 + 1;
    uVar5 = uVar4;
  } while (uVar4 < 0x3d);
  if (local_1c == 0x10000) {
    uVar5 = (uint)param_4;
    local_18 = uVar5;
    local_5 = 0x10 - param_4;
    if (uVar5 != 0) {
      local_14 = (uint)local_5;
      local_c = uVar5 - 1;
      uVar8 = uVar5 + 1;
      iVar7 = 0;
      uVar13 = uVar5;
      do {
        puVar10 = (uint *)((int)auStack_60 + iVar7 + 4);
        *puVar10 = *puVar10 >> ((byte)local_14 & 0x1f);
        bVar6 = (byte)local_c;
        local_c = local_c + -1;
        uVar13 = uVar13 - 1;
        *(int *)((int)aiStack_a4 + iVar7 + 4) = 1 << (bVar6 & 0x1f);
        iVar7 = iVar7 + 4;
      } while (uVar13 != 0);
    }
    if (uVar8 < 0x11) {
      iVar7 = 0x10 - uVar8;
      piVar14 = aiStack_a4 + uVar8;
      iVar11 = 0x11 - uVar8;
      do {
        bVar6 = (byte)iVar7;
        iVar7 = iVar7 + -1;
        *piVar14 = 1 << (bVar6 & 0x1f);
        piVar14 = piVar14 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    local_14 = (uint)local_5;
    uVar8 = auStack_60[uVar5 + 1] >> (local_5 & 0x1f);
    if (uVar8 != 0x10000) {
      uVar13 = (1 << (param_4 & 0x1f)) - uVar8;
      puVar15 = (undefined4 *)((int)param_5 + uVar8 * 2);
      for (uVar5 = (uVar13 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      for (uVar8 = uVar13 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
    }
    local_10 = param_2;
    local_c = 0;
    if (0 < (int)param_2) {
      do {
        uVar8 = local_14;
        bVar6 = *(byte *)(local_c + param_3);
        if (bVar6 != 0) {
          uVar5 = auStack_60[bVar6];
          uVar13 = aiStack_a4[bVar6] + uVar5;
          if (param_4 < bVar6) {
            auStack_60[bVar6] = uVar13;
            iVar7 = uVar5 << ((byte)local_18 & 0x1f);
            puVar9 = (undefined2 *)(param_6 + local_10 * 4);
            psVar12 = (short *)((int)param_5 + (uVar5 >> ((byte)uVar8 & 0x1f)) * 2);
            local_5 = bVar6 - param_4;
            do {
              if (*psVar12 == 0) {
                puVar9[1] = 0;
                *puVar9 = 0;
                sVar2 = (short)local_10;
                local_10 = local_10 + 1;
                *psVar12 = -sVar2;
                puVar9 = puVar9 + 2;
              }
              if ((short)iVar7 < 0) {
                psVar12 = (short *)(param_6 + *psVar12 * -4 + 2);
              }
              else {
                psVar12 = (short *)(param_6 + *psVar12 * -4);
              }
              iVar7 = iVar7 << 1;
              local_5 = local_5 + -1;
            } while (local_5 != '\0');
            *psVar12 = (short)local_c;
          }
          else {
            if ((uint)(1 << ((byte)local_18 & 0x1f)) < uVar13) goto LAB_01008aee;
            if (uVar5 < uVar13) {
              uVar3 = (undefined2)local_c;
              puVar15 = (undefined4 *)((int)param_5 + uVar5 * 2);
              for (uVar8 = uVar13 - uVar5 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar15 = CONCAT22(uVar3,uVar3);
                puVar15 = puVar15 + 1;
              }
              for (uVar8 = (uint)((uVar13 - uVar5 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined2 *)puVar15 = uVar3;
                puVar15 = (undefined4 *)((int)puVar15 + 2);
              }
            }
            auStack_60[bVar6] = uVar13;
          }
        }
        local_c = local_c + 1;
      } while (local_c < (int)param_2);
    }
    uVar8 = 1;
  }
  else if (local_1c == 0) {
    uVar5 = 1 << (param_4 & 0x1f);
    for (uVar13 = (uVar5 & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
      *param_5 = 0;
      param_5 = param_5 + 1;
    }
    for (iVar7 = (uVar5 & 1) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)param_5 = 0;
      param_5 = (undefined4 *)((int)param_5 + 1);
    }
  }
  else {
LAB_01008aee:
    uVar8 = 0;
  }
  return uVar8;
}


