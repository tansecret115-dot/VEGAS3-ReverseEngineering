/* Module: erv33260.dll
   Function: FUN_67077560
   Address: 67077560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67077560(uint param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == 0) {
    puVar5 = &DAT_67127978 + *(int *)(&DAT_670931c0 + param_3 * 4) * 0xe8e0;
  }
  else {
    puVar5 = &DAT_67099278 + param_2 * 0x51d0 + *(int *)(&DAT_67093140 + param_3 * 4) * 0x1b770;
  }
  pbVar11 = (byte *)*param_4;
  bVar1 = (&DAT_6709e2d8)[param_1 >> 2 & 0x3f];
  uVar9 = *param_5;
  bVar2 = (&DAT_6709e2d8)[param_1 & 0x3f];
  bVar3 = (&DAT_6709e2d8)[param_1 >> 8 & 0x3f];
  bVar4 = (&DAT_6709e2d8)[param_1 >> 10 & 0x3f];
  uVar8 = (uint)(byte)(&DAT_6709c0d8)[param_1 >> 0x10 & 0xff];
  uVar6 = (uint)*pbVar11 << 0x18;
  uVar12 = uVar8 << 4;
  if (bVar2 != 0) {
    uVar12 = uVar12 | 8;
  }
  if (bVar1 != 0) {
    uVar12 = uVar12 | 4;
  }
  if (bVar3 != 0) {
    uVar12 = uVar12 | 2;
  }
  if (bVar4 != 0) {
    uVar12 = uVar12 | 1;
  }
  iVar13 = (&DAT_6709db28)[uVar12 & 0xf];
  iVar10 = (0x20 - uVar9) - (uint)(byte)puVar5[uVar12];
  if (iVar10 < 1) {
    pbVar11[3] = 0;
    *pbVar11 = *pbVar11;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    uVar7 = uVar9 & 0xfffffff8;
    pbVar11 = pbVar11 + (uVar9 >> 3);
    uVar9 = uVar9 & 7;
    uVar6 = uVar6 << ((byte)uVar7 & 0x1f);
    iVar10 = iVar10 + uVar7;
  }
  uVar6 = uVar6 | *(int *)(puVar5 + uVar12 * 4 + 0x510) << ((byte)iVar10 & 0x1f);
  uVar9 = uVar9 + (byte)puVar5[uVar12];
  if (bVar2 != 0) {
    local_8 = (0x20 - uVar9) - (uint)(byte)puVar5[(uint)bVar2 + (iVar13 + 0x49) * 0x110];
    if (local_8 < 1) {
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      pbVar11[3] = (byte)uVar6;
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      local_8 = local_8 + uVar12;
    }
    uVar6 = uVar6 | *(int *)(puVar5 + ((uint)bVar2 + iVar13 * 0x44) * 4 + 0x4da0) <<
                    ((byte)local_8 & 0x1f);
    uVar9 = uVar9 + (byte)puVar5[(uint)bVar2 + (iVar13 + 0x49) * 0x110];
  }
  if (bVar1 != 0) {
    local_c = (0x20 - uVar9) - (uint)(byte)puVar5[(uint)bVar1 + (iVar13 + 0x49) * 0x110];
    if (local_c < 1) {
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      pbVar11[3] = (byte)uVar6;
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      local_c = local_c + uVar12;
    }
    uVar6 = uVar6 | *(int *)(puVar5 + ((uint)bVar1 + iVar13 * 0x44) * 4 + 0x4da0) <<
                    ((byte)local_c & 0x1f);
    uVar9 = uVar9 + (byte)puVar5[(uint)bVar1 + (iVar13 + 0x49) * 0x110];
  }
  if (bVar3 != 0) {
    local_10 = (0x20 - uVar9) - (uint)(byte)puVar5[(uint)bVar3 + (iVar13 + 0x49) * 0x110];
    if (local_10 < 1) {
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      pbVar11[3] = (byte)uVar6;
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      local_10 = local_10 + uVar12;
    }
    uVar6 = uVar6 | *(int *)(puVar5 + ((uint)bVar3 + iVar13 * 0x44) * 4 + 0x4da0) <<
                    ((byte)local_10 & 0x1f);
    uVar9 = uVar9 + (byte)puVar5[(uint)bVar3 + (iVar13 + 0x49) * 0x110];
  }
  if (bVar4 != 0) {
    iVar10 = (0x20 - uVar9) - (uint)(byte)puVar5[(uint)bVar4 + (iVar13 + 0x49) * 0x110];
    if (iVar10 < 1) {
      pbVar11[3] = (byte)uVar6;
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      iVar10 = iVar10 + uVar12;
    }
    uVar6 = uVar6 | *(int *)(puVar5 + ((uint)bVar4 + iVar13 * 0x44) * 4 + 0x4da0) <<
                    ((byte)iVar10 & 0x1f);
    uVar9 = uVar9 + (byte)puVar5[(uint)bVar4 + (iVar13 + 0x49) * 0x110];
  }
  if ((&DAT_6709e268)[uVar8] == '\x01') {
    iVar13 = 0x1f - uVar9;
    if (iVar13 < 1) {
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11[3] = (byte)uVar6;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      iVar13 = iVar13 + uVar12;
    }
    uVar6 = uVar6 | (param_1 >> 0x10 & 1) << ((byte)iVar13 & 0x1f);
    uVar9 = uVar9 + 1;
  }
  if ((&DAT_6709e3d8)[uVar8] == '\x01') {
    iVar13 = 0x1f - uVar9;
    if (iVar13 < 1) {
      pbVar11[3] = (byte)uVar6;
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      iVar13 = iVar13 + uVar12;
    }
    uVar6 = uVar6 | (param_1 >> 0x11 & 1) << ((byte)iVar13 & 0x1f);
    uVar9 = uVar9 + 1;
  }
  if ((&DAT_6709e188)[uVar8] == '\x01') {
    iVar13 = 0x1f - uVar9;
    if (iVar13 < 1) {
      pbVar11[3] = (byte)uVar6;
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      uVar12 = uVar9 & 0xfffffff8;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar12 & 0x1f);
      iVar13 = iVar13 + uVar12;
    }
    uVar6 = uVar6 | (param_1 >> 0x12 & 1) << ((byte)iVar13 & 0x1f);
    uVar9 = uVar9 + 1;
  }
  if ((&DAT_6709e1f8)[uVar8] == '\x01') {
    iVar13 = 0x1f - uVar9;
    if (iVar13 < 1) {
      *pbVar11 = (byte)(uVar6 >> 0x18);
      pbVar11[1] = (byte)(uVar6 >> 0x10);
      pbVar11[2] = (byte)(uVar6 >> 8);
      uVar8 = uVar9 & 0xfffffff8;
      pbVar11[3] = (byte)uVar6;
      pbVar11 = pbVar11 + (uVar9 >> 3);
      uVar9 = uVar9 & 7;
      uVar6 = uVar6 << ((byte)uVar8 & 0x1f);
      iVar13 = iVar13 + uVar8;
    }
    uVar6 = uVar6 | (param_1 >> 0x13 & 1) << ((byte)iVar13 & 0x1f);
    uVar9 = uVar9 + 1;
  }
  pbVar11[3] = (byte)uVar6;
  *pbVar11 = (byte)(uVar6 >> 0x18);
  pbVar11[1] = (byte)(uVar6 >> 0x10);
  pbVar11[2] = (byte)(uVar6 >> 8);
  *param_4 = pbVar11 + (uVar9 >> 3);
  *param_5 = uVar9 & 7;
  return;
}


