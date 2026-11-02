/* Module: rnco3260.dll
   Function: FUN_636f9e90
   Address: 636f9e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9e90(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_20;
  uint local_1c;
  byte *local_18;
  byte local_c;
  int local_8;
  
  iVar3 = param_4;
  iVar6 = (param_2 * 2 - (param_2 >> 1)) / (param_4 * 2);
  if (param_2 != 0) {
    bVar8 = *param_3;
    bVar4 = param_3[1];
    bVar10 = param_3[2];
    local_18 = param_3 + 3;
    local_8 = param_2 - iVar6;
    local_1c = (uint)bVar8;
    local_20 = (uint)bVar4;
    pbVar7 = param_1;
    pbVar13 = (byte *)(param_2 >> 1);
    bVar2 = bVar10;
    local_c = bVar10;
    bVar5 = bVar4;
    bVar9 = bVar8;
    if (local_8 != 0) {
      while( true ) {
        param_1 = pbVar13;
        *pbVar7 = bVar8;
        pbVar7[1] = bVar4;
        pbVar7[2] = bVar10;
        pbVar7 = pbVar7 + 3;
        local_8 = local_8 + -1;
        local_c = bVar10;
        bVar5 = bVar4;
        bVar9 = bVar8;
        if (local_8 == 0) break;
        pbVar13 = param_1 + iVar3 * -2;
        if ((int)pbVar13 < 0) {
          pbVar13 = pbVar13 + param_2;
          bVar8 = *local_18;
          param_4 = (int)bVar8;
          bVar10 = local_18[1];
          bVar1 = local_18[2];
          param_3 = (byte *)(uint)bVar10;
          bVar9 = (byte)((int)(local_1c + param_4) >> 1);
          bVar5 = (byte)((int)(param_3 + local_20) >> 1);
          local_c = (byte)((int)((uint)bVar2 + (uint)bVar1) >> 1);
          do {
            *pbVar7 = bVar9;
            pbVar7[1] = bVar5;
            pbVar7[2] = local_c;
            pbVar7 = pbVar7 + 3;
            local_8 = local_8 + -1;
            if (local_8 == 0) goto joined_r0x636fa057;
            pbVar13 = pbVar13 + iVar3 * -2;
          } while (-1 < (int)pbVar13);
          param_1 = pbVar13 + param_2;
          do {
            *pbVar7 = bVar8;
            pbVar7[1] = bVar10;
            pbVar7[2] = bVar1;
            pbVar7 = pbVar7 + 3;
            local_8 = local_8 + -1;
            local_c = bVar1;
            bVar5 = bVar10;
            bVar9 = bVar8;
            if (local_8 == 0) goto joined_r0x636fa057;
            param_1 = param_1 + iVar3 * -2;
          } while (-1 < (int)param_1);
          pbVar13 = param_1 + param_2;
          bVar8 = local_18[3];
          bVar10 = local_18[5];
          bVar4 = local_18[4];
          local_1c = (uint)bVar8;
          local_18 = local_18 + 6;
          iVar11 = local_1c + param_4;
          local_20 = (uint)bVar4;
          pbVar12 = param_3 + local_20;
          do {
            param_4._0_1_ = (byte)(iVar11 >> 1);
            *pbVar7 = (byte)param_4;
            param_3._0_1_ = (byte)((int)pbVar12 >> 1);
            pbVar7[1] = (byte)param_3;
            local_c = (byte)((int)((uint)bVar10 + (uint)bVar1) >> 1);
            pbVar7[2] = local_c;
            pbVar7 = pbVar7 + 3;
            local_8 = local_8 + -1;
            bVar5 = (byte)param_3;
            bVar9 = (byte)param_4;
            if (local_8 == 0) goto joined_r0x636fa057;
            pbVar13 = pbVar13 + iVar3 * -2;
          } while (-1 < (int)pbVar13);
          pbVar13 = pbVar13 + param_2;
          bVar2 = bVar10;
        }
      }
    }
joined_r0x636fa057:
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pbVar7 = bVar9;
      pbVar7[1] = bVar5;
      pbVar7[2] = local_c;
      pbVar7 = pbVar7 + 3;
    }
  }
  return;
}


