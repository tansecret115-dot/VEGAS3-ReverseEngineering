/* Module: mpgvout.001
   Function: FUN_1002070c
   Address: 1002070c
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * __cdecl
FUN_1002070c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint *param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint local_3c;
  uint local_34;
  uint local_30;
  
  if (*(int *)(param_1 + 0x590) == 3) {
    cVar4 = (char)param_5;
    cVar5 = (char)param_6;
    if (*(char *)(param_2 + 2) == '\x02') {
      iVar6 = (int)*(short *)(param_4 * 4 + 0xc + param_2);
      *(int *)(param_3 + 0x10 + param_4 * 8) = iVar6;
      iVar2 = *(int *)(param_3 + param_4 * 8);
      *(int *)(param_3 + param_4 * 8) = iVar6;
      uVar12 = iVar6 - iVar2 & *(uint *)(&DAT_10036dec + param_5 * 8);
      bVar9 = (byte)(param_5 + -1);
      uVar14 = ((int)uVar12 >> (cVar4 + 3U & 0x1f)) + uVar12 +
               *(uint *)(&DAT_10036de8 + param_5 * 8) >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar14) {
        uVar12 = -uVar12;
      }
      uVar13 = *(uint *)(&DAT_10033f40 + uVar14 * 8);
      local_3c = *(uint *)(&DAT_10033f44 + uVar14 * 8);
      if (uVar14 != 0) {
        local_3c = local_3c + param_5 + -1;
        uVar13 = uVar13 << (bVar9 & 0x1f) | uVar12 - 1 & *(uint *)(&DAT_10036de8 + param_5 * 8);
      }
      *param_7 = uVar13;
      param_7[1] = local_3c;
      iVar6 = (int)*(short *)(param_4 * 4 + 0xe + param_2);
      puVar16 = param_7 + 2;
      *(int *)(param_3 + 0x14 + param_4 * 8) = iVar6;
      iVar2 = *(int *)(param_3 + 4 + param_4 * 8);
      *(int *)(param_3 + 4 + param_4 * 8) = iVar6;
      uVar14 = iVar6 - iVar2 & *(uint *)(&DAT_10036dec + param_6 * 8);
      bVar9 = (byte)(param_6 + -1);
      uVar12 = ((int)uVar14 >> (cVar5 + 3U & 0x1f)) + uVar14 +
               *(uint *)(&DAT_10036de8 + param_6 * 8) >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar12) {
        uVar14 = -uVar14;
      }
      uVar13 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      local_3c = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        local_3c = local_3c + param_6 + -1;
        uVar13 = uVar13 << (bVar9 & 0x1f) | uVar14 - 1 & *(uint *)(&DAT_10036de8 + param_6 * 8);
      }
      *puVar16 = uVar13;
      param_7[3] = local_3c;
    }
    else if (*(char *)(param_2 + 2) == '\x01') {
      iVar11 = param_4 * 4;
      iVar7 = (int)*(short *)(iVar11 + 0xc + param_2);
      iVar2 = param_5 + -1;
      iVar15 = *(int *)(param_3 + param_4 * 8);
      *(int *)(param_3 + param_4 * 8) = iVar7;
      iVar6 = param_5 * 8;
      uVar14 = iVar7 - iVar15 & *(uint *)(&DAT_10036dec + iVar6);
      bVar9 = (byte)iVar2;
      uVar12 = ((int)uVar14 >> (cVar4 + 3U & 0x1f)) + uVar14 + *(uint *)(&DAT_10036de8 + iVar6) >>
               (bVar9 & 0x1f);
      if (0x10 < (int)uVar12) {
        uVar14 = -uVar14;
      }
      uVar13 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      iVar15 = *(int *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        iVar15 = iVar15 + iVar2;
        uVar13 = uVar13 << (bVar9 & 0x1f) | uVar14 - 1 & *(uint *)(&DAT_10036de8 + iVar6);
      }
      *param_7 = (int)*(short *)(param_4 * 2 + 0x1c + param_2) << ((byte)iVar15 & 0x1f) | uVar13;
      param_7[1] = iVar15 + 1;
      sVar1 = *(short *)(iVar11 + param_2 + 0xe);
      iVar15 = *(int *)(param_3 + 4 + param_4 * 8);
      *(int *)(param_3 + 4 + param_4 * 8) = (int)*(short *)(iVar11 + param_2 + 0xe);
      iVar7 = param_6 * 8;
      local_30 = (int)(sVar1 >> 1) - (iVar15 >> 1) & *(uint *)(&DAT_10036dec + iVar7);
      iVar15 = param_6 + -1;
      bVar10 = (byte)iVar15;
      uVar12 = local_30 + ((int)local_30 >> (cVar5 + 3U & 0x1f)) + *(uint *)(&DAT_10036de8 + iVar7)
               >> (bVar10 & 0x1f);
      if (0x10 < (int)uVar12) {
        local_30 = -local_30;
      }
      uVar14 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      local_3c = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        local_3c = local_3c + iVar15;
        uVar14 = uVar14 << (bVar10 & 0x1f) | local_30 - 1 & *(uint *)(&DAT_10036de8 + iVar7);
      }
      param_7[2] = uVar14;
      param_7[3] = local_3c;
      iVar8 = (int)*(short *)(iVar11 + 0x14 + param_2);
      iVar3 = *(int *)(param_3 + 0x10 + param_4 * 8);
      *(int *)(param_3 + 0x10 + param_4 * 8) = iVar8;
      local_30 = iVar8 - iVar3 & *(uint *)(&DAT_10036dec + iVar6);
      uVar12 = local_30 + ((int)local_30 >> (cVar4 + 3U & 0x1f)) + *(uint *)(&DAT_10036de8 + iVar6)
               >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar12) {
        local_30 = -local_30;
      }
      uVar14 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      local_3c = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        local_3c = local_3c + iVar2;
        uVar14 = uVar14 << (bVar9 & 0x1f) | local_30 - 1 & *(uint *)(&DAT_10036de8 + iVar6);
      }
      param_7[4] = (int)*(short *)(param_4 * 2 + 0x20 + param_2) << ((byte)local_3c & 0x1f) | uVar14
      ;
      param_7[5] = local_3c + 1;
      puVar16 = param_7 + 6;
      sVar1 = *(short *)(iVar11 + param_2 + 0x16);
      iVar2 = *(int *)(param_3 + 0x14 + param_4 * 8);
      *(int *)(param_3 + 0x14 + param_4 * 8) = (int)*(short *)(iVar11 + param_2 + 0x16);
      local_30 = (int)(sVar1 >> 1) - (iVar2 >> 1) & *(uint *)(&DAT_10036dec + iVar7);
      uVar12 = local_30 + ((int)local_30 >> (cVar5 + 3U & 0x1f)) + *(uint *)(&DAT_10036de8 + iVar7)
               >> (bVar10 & 0x1f);
      if (0x10 < (int)uVar12) {
        local_30 = -local_30;
      }
      uVar14 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      uVar13 = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        uVar13 = uVar13 + iVar15;
        uVar14 = uVar14 << (bVar10 & 0x1f) | local_30 - 1 & *(uint *)(&DAT_10036de8 + iVar7);
      }
      *puVar16 = uVar14;
      param_7[7] = uVar13;
    }
    else {
      iVar15 = param_4 * 4;
      iVar6 = (int)*(short *)(iVar15 + 0xc + param_2);
      *(int *)(param_3 + 0x10 + param_4 * 8) = iVar6;
      iVar2 = *(int *)(param_3 + param_4 * 8);
      *(int *)(param_3 + param_4 * 8) = iVar6;
      uVar14 = iVar6 - iVar2 & *(uint *)(&DAT_10036dec + param_5 * 8);
      bVar9 = (byte)(param_5 + -1);
      uVar12 = ((int)uVar14 >> (cVar4 + 3U & 0x1f)) + uVar14 +
               *(uint *)(&DAT_10036de8 + param_5 * 8) >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar12) {
        uVar14 = -uVar14;
      }
      local_34 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      local_3c = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        local_3c = local_3c + param_5 + -1;
        local_34 = local_34 << (bVar9 & 0x1f) | uVar14 - 1 & *(uint *)(&DAT_10036de8 + param_5 * 8);
      }
      *param_7 = local_34;
      param_7[1] = local_3c;
      puVar16 = param_7 + 2;
      if (*(short *)(param_2 + 0x24) == 0) {
        *puVar16 = 0;
        param_7[3] = 1;
      }
      else {
        if (*(short *)(param_2 + 0x24) < 1) {
          *puVar16 = 3;
        }
        else {
          *puVar16 = 2;
        }
        param_7[3] = 2;
      }
      sVar1 = *(short *)(iVar15 + param_2 + 0xe);
      iVar2 = *(int *)(param_3 + 4 + param_4 * 8);
      iVar6 = (int)*(short *)(iVar15 + param_2 + 0xe);
      *(int *)(param_3 + 0x14 + param_4 * 8) = iVar6;
      *(int *)(param_3 + 4 + param_4 * 8) = iVar6;
      local_30 = (int)(sVar1 >> 1) - (iVar2 >> 1) & *(uint *)(&DAT_10036dec + param_6 * 8);
      bVar9 = (byte)(param_6 + -1);
      uVar12 = local_30 + ((int)local_30 >> (cVar5 + 3U & 0x1f)) +
               *(uint *)(&DAT_10036de8 + param_6 * 8) >> (bVar9 & 0x1f);
      if (0x10 < (int)uVar12) {
        local_30 = -local_30;
      }
      uVar14 = *(uint *)(&DAT_10033f40 + uVar12 * 8);
      uVar13 = *(uint *)(&DAT_10033f44 + uVar12 * 8);
      if (uVar12 != 0) {
        uVar13 = uVar13 + param_6 + -1;
        uVar14 = uVar14 << (bVar9 & 0x1f) | local_30 - 1 & *(uint *)(&DAT_10036de8 + param_6 * 8);
      }
      param_7[4] = uVar14;
      param_7[5] = uVar13;
      puVar16 = param_7 + 6;
      if (*(short *)(param_2 + 0x26) == 0) {
        *puVar16 = 0;
        param_7[7] = 1;
      }
      else {
        if (*(short *)(param_2 + 0x26) < 1) {
          *puVar16 = 3;
        }
        else {
          *puVar16 = 2;
        }
        param_7[7] = 2;
      }
    }
    param_7 = puVar16 + 2;
  }
  else {
    printf("FIXME");
  }
  return param_7;
}


