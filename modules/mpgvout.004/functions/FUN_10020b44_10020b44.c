/* Module: mpgvout.004
   Function: FUN_10020b44
   Address: 10020b44
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl
FUN_10020b44(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint *param_7)

{
  short sVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint local_40;
  uint local_34;
  
  if (*(int *)(param_1 + 0x590) != 3) {
    printf("FIXME");
    return param_7;
  }
  cVar3 = (char)param_5;
  cVar4 = (char)param_6;
  if (*(char *)(param_2 + 2) == '\x02') {
    iVar5 = (int)*(short *)(param_4 * 4 + 0xc + param_2);
    *(int *)(param_3 + 0x10 + param_4 * 8) = iVar5;
    iVar14 = *(int *)(param_3 + param_4 * 8);
    *(int *)(param_3 + param_4 * 8) = iVar5;
    uVar13 = iVar5 - iVar14 & *(uint *)(&DAT_10036dec + param_5 * 8);
    bVar9 = (byte)(param_5 + -1);
    uVar6 = ((int)uVar13 >> (cVar3 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + param_5 * 8)
            >> (bVar9 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    uVar12 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    uVar7 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      uVar7 = uVar7 + param_5 + -1;
      uVar12 = uVar12 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + param_5 * 8);
    }
    *param_7 = uVar12;
    param_7[1] = uVar7;
    puVar17 = param_7 + 2;
    iVar5 = (int)*(short *)(param_4 * 4 + 0xe + param_2);
    *(int *)(param_3 + 0x14 + param_4 * 8) = iVar5;
    iVar14 = *(int *)(param_3 + 4 + param_4 * 8);
    *(int *)(param_3 + 4 + param_4 * 8) = iVar5;
    uVar13 = iVar5 - iVar14 & *(uint *)(&DAT_10036dec + param_6 * 8);
    bVar9 = (byte)(param_6 + -1);
    uVar6 = ((int)uVar13 >> (cVar4 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + param_6 * 8)
            >> (bVar9 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    uVar12 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    uVar7 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      uVar7 = uVar7 + param_6 + -1;
      uVar12 = uVar12 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + param_6 * 8);
    }
  }
  else {
    if (*(char *)(param_2 + 2) != '\x01') {
      iVar15 = param_4 * 4;
      iVar5 = (int)*(short *)(iVar15 + 0xc + param_2);
      *(int *)(param_3 + 0x10 + param_4 * 8) = iVar5;
      iVar14 = *(int *)(param_3 + param_4 * 8);
      *(int *)(param_3 + param_4 * 8) = iVar5;
      uVar13 = iVar5 - iVar14 & *(uint *)(&DAT_10036dec + param_5 * 8);
      bVar9 = (byte)(param_5 + -1);
      uVar6 = ((int)uVar13 >> (cVar3 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + param_5 * 8)
              >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar6) {
        uVar13 = -uVar13;
      }
      uVar12 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
      uVar7 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
      if (uVar6 != 0) {
        uVar7 = uVar7 + param_5 + -1;
        uVar12 = uVar12 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + param_5 * 8);
      }
      *param_7 = uVar12;
      param_7[1] = uVar7;
      puVar17 = param_7 + 2;
      if (*(short *)(param_2 + 0x24) == 0) {
        *puVar17 = 0;
        param_7[3] = 1;
      }
      else {
        if (*(short *)(param_2 + 0x24) < 1) {
          *puVar17 = 3;
        }
        else {
          *puVar17 = 2;
        }
        param_7[3] = 2;
      }
      sVar1 = *(short *)(iVar15 + param_2 + 0xe);
      iVar14 = *(int *)(param_3 + 4 + param_4 * 8);
      iVar5 = (int)*(short *)(iVar15 + param_2 + 0xe);
      *(int *)(param_3 + 0x14 + param_4 * 8) = iVar5;
      *(int *)(param_3 + 4 + param_4 * 8) = iVar5;
      uVar13 = (int)(sVar1 >> 1) - (iVar14 >> 1) & *(uint *)(&DAT_10036dec + param_6 * 8);
      bVar9 = (byte)(param_6 + -1);
      uVar6 = ((int)uVar13 >> (cVar4 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + param_6 * 8)
              >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar6) {
        uVar13 = -uVar13;
      }
      uVar12 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
      uVar7 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
      if (uVar6 != 0) {
        uVar7 = uVar7 + param_6 + -1;
        uVar12 = uVar12 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + param_6 * 8);
      }
      param_7[4] = uVar12;
      param_7[5] = uVar7;
      puVar17 = param_7 + 6;
      if (*(short *)(param_2 + 0x26) == 0) {
        *puVar17 = 0;
        param_7[7] = 1;
      }
      else {
        if (*(short *)(param_2 + 0x26) < 1) {
          *puVar17 = 3;
        }
        else {
          *puVar17 = 2;
        }
        param_7[7] = 2;
      }
      goto LAB_10020f4d;
    }
    iVar15 = param_4 * 4;
    iVar5 = (int)*(short *)(iVar15 + 0xc + param_2);
    iVar14 = *(int *)(param_3 + param_4 * 8);
    *(int *)(param_3 + param_4 * 8) = iVar5;
    iVar16 = param_5 * 8;
    uVar13 = iVar5 - iVar14 & *(uint *)(&DAT_10036dec + iVar16);
    iVar14 = param_5 + -1;
    bVar9 = (byte)iVar14;
    uVar6 = ((int)uVar13 >> (cVar3 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + iVar16) >>
            (bVar9 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    local_34 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    local_40 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      local_40 = local_40 + iVar14;
      local_34 = local_34 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + iVar16);
    }
    *param_7 = (int)*(short *)(param_4 * 2 + 0x1c + param_2) << ((byte)local_40 & 0x1f) | local_34;
    param_7[1] = local_40 + 1;
    sVar1 = *(short *)(iVar15 + param_2 + 0xe);
    iVar5 = *(int *)(param_3 + 4 + param_4 * 8);
    *(int *)(param_3 + 4 + param_4 * 8) = (int)*(short *)(iVar15 + param_2 + 0xe);
    iVar11 = param_6 * 8;
    uVar13 = (int)(sVar1 >> 1) - (iVar5 >> 1) & *(uint *)(&DAT_10036dec + iVar11);
    iVar5 = param_6 + -1;
    bVar10 = (byte)iVar5;
    uVar6 = ((int)uVar13 >> (cVar4 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + iVar11) >>
            (bVar10 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    local_34 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    local_40 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      local_40 = local_40 + iVar5;
      local_34 = local_34 << (bVar10 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + iVar11);
    }
    param_7[2] = local_34;
    param_7[3] = local_40;
    iVar8 = (int)*(short *)(iVar15 + 0x14 + param_2);
    iVar2 = *(int *)(param_3 + 0x10 + param_4 * 8);
    *(int *)(param_3 + 0x10 + param_4 * 8) = iVar8;
    uVar13 = iVar8 - iVar2 & *(uint *)(&DAT_10036dec + iVar16);
    uVar6 = ((int)uVar13 >> (cVar3 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + iVar16) >>
            (bVar9 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    local_34 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    local_40 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      local_40 = local_40 + iVar14;
      local_34 = local_34 << (bVar9 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + iVar16);
    }
    param_7[4] = (int)*(short *)(param_4 * 2 + 0x20 + param_2) << ((byte)local_40 & 0x1f) | local_34
    ;
    param_7[5] = local_40 + 1;
    puVar17 = param_7 + 6;
    sVar1 = *(short *)(iVar15 + param_2 + 0x16);
    iVar14 = *(int *)(param_3 + 0x14 + param_4 * 8);
    *(int *)(param_3 + 0x14 + param_4 * 8) = (int)*(short *)(iVar15 + param_2 + 0x16);
    uVar13 = (int)(sVar1 >> 1) - (iVar14 >> 1) & *(uint *)(&DAT_10036dec + iVar11);
    uVar6 = ((int)uVar13 >> (cVar4 + 3U & 0x1f)) + uVar13 + *(uint *)(&DAT_10036de8 + iVar11) >>
            (bVar10 & 0x1f);
    if (0x10 < (int)uVar6) {
      uVar13 = -uVar13;
    }
    uVar12 = *(uint *)(&DAT_10033f40 + uVar6 * 8);
    uVar7 = *(uint *)(&DAT_10033f44 + uVar6 * 8);
    if (uVar6 != 0) {
      uVar7 = uVar7 + iVar5;
      uVar12 = uVar12 << (bVar10 & 0x1f) | uVar13 - 1 & *(uint *)(&DAT_10036de8 + iVar11);
    }
  }
  *puVar17 = uVar12;
  puVar17[1] = uVar7;
LAB_10020f4d:
  return puVar17 + 2;
}


