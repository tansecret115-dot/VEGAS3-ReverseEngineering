/* Module: rnco3260.dll
   Function: FUN_636fb180
   Address: 636fb180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fb180(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint local_20;
  uint local_1c;
  byte local_10;
  byte *local_c;
  int local_8;
  
  iVar3 = param_4;
  iVar6 = (param_2 * 2 - (param_2 >> 1)) / (param_4 * 2);
  if (param_2 != 0) {
    uVar7 = (uint)*param_3;
    bVar9 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
    bVar4 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
    bVar11 = *(byte *)(&DAT_637956a0 + uVar7);
    local_c = param_3 + 1;
    local_1c = (uint)bVar9;
    local_8 = param_2 - iVar6;
    local_20 = (uint)bVar4;
    pbVar8 = param_1;
    pbVar14 = (byte *)(param_2 >> 1);
    bVar2 = bVar11;
    local_10 = bVar11;
    bVar5 = bVar4;
    bVar10 = bVar9;
    if (local_8 != 0) {
      while( true ) {
        param_1 = pbVar14;
        *pbVar8 = bVar9;
        pbVar8[1] = bVar4;
        pbVar8[2] = bVar11;
        pbVar8 = pbVar8 + 3;
        local_8 = local_8 + -1;
        local_10 = bVar11;
        bVar5 = bVar4;
        bVar10 = bVar9;
        if (local_8 == 0) break;
        pbVar14 = param_1 + iVar3 * -2;
        if ((int)pbVar14 < 0) {
          pbVar14 = pbVar14 + param_2;
          uVar7 = (uint)*local_c;
          bVar11 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
          param_4 = (int)bVar11;
          bVar9 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
          bVar1 = *(byte *)(&DAT_637956a0 + uVar7);
          param_3 = (byte *)(uint)bVar9;
          bVar10 = (byte)((int)(local_1c + param_4) >> 1);
          bVar5 = (byte)((int)(param_3 + local_20) >> 1);
          local_10 = (byte)((int)((uint)bVar2 + (uint)bVar1) >> 1);
          do {
            *pbVar8 = bVar10;
            pbVar8[1] = bVar5;
            pbVar8[2] = local_10;
            pbVar8 = pbVar8 + 3;
            local_8 = local_8 + -1;
            if (local_8 == 0) goto joined_r0x636fb382;
            pbVar14 = pbVar14 + iVar3 * -2;
          } while (-1 < (int)pbVar14);
          param_1 = pbVar14 + param_2;
          do {
            *pbVar8 = bVar11;
            pbVar8[1] = bVar9;
            pbVar8[2] = bVar1;
            pbVar8 = pbVar8 + 3;
            local_8 = local_8 + -1;
            local_10 = bVar1;
            bVar5 = bVar9;
            bVar10 = bVar11;
            if (local_8 == 0) goto joined_r0x636fb382;
            param_1 = param_1 + iVar3 * -2;
          } while (-1 < (int)param_1);
          pbVar14 = param_1 + param_2;
          uVar7 = (uint)local_c[1];
          bVar11 = *(byte *)(&DAT_637956a0 + uVar7);
          bVar9 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
          bVar4 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
          local_c = local_c + 2;
          local_1c = (uint)bVar9;
          local_20 = (uint)bVar4;
          iVar12 = local_1c + param_4;
          pbVar13 = param_3 + local_20;
          do {
            param_4._0_1_ = (byte)(iVar12 >> 1);
            *pbVar8 = (byte)param_4;
            param_3._0_1_ = (byte)((int)pbVar13 >> 1);
            pbVar8[1] = (byte)param_3;
            local_10 = (byte)((int)((uint)bVar11 + (uint)bVar1) >> 1);
            pbVar8[2] = local_10;
            pbVar8 = pbVar8 + 3;
            local_8 = local_8 + -1;
            bVar5 = (byte)param_3;
            bVar10 = (byte)param_4;
            if (local_8 == 0) goto joined_r0x636fb382;
            pbVar14 = pbVar14 + iVar3 * -2;
          } while (-1 < (int)pbVar14);
          pbVar14 = pbVar14 + param_2;
          bVar2 = bVar11;
        }
      }
    }
joined_r0x636fb382:
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar8 = bVar10;
      pbVar8[1] = bVar5;
      pbVar8[2] = local_10;
      pbVar8 = pbVar8 + 3;
    }
  }
  return;
}


