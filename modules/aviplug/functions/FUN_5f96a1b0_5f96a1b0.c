/* Module: aviplug.dll
   Function: FUN_5f96a1b0
   Address: 5f96a1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96a1b0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_30;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_60 = param_2 + 0x500;
  local_44 = (int *)(param_2 + 0x400);
  local_40 = 0;
  iVar12 = 0;
  local_14 = 2;
  iVar15 = DAT_5f9f41c4;
  while( true ) {
    do {
      local_18 = 2;
      local_4c = param_2 + 0x40 + (local_40 + iVar12) * 4;
      local_1c = 4;
      iVar11 = param_1;
      iVar5 = local_60;
      local_48 = local_4c;
      piVar6 = local_44;
      while( true ) {
        do {
          local_44 = piVar6;
          local_60 = iVar5;
          param_1 = iVar11;
          local_50 = local_4c;
          pbVar14 = (byte *)(param_1 + param_3 * 2);
          local_20 = 2;
          iVar11 = param_1;
          local_24 = local_44;
          do {
            local_58 = 0;
            local_5c = 0;
            local_54 = 0;
            local_30 = 2;
            pbVar7 = (byte *)(iVar11 + 2);
            pbVar13 = pbVar14;
            do {
              bVar8 = pbVar7[-2];
              bVar1 = pbVar7[-1];
              bVar2 = *pbVar7;
              *(int *)(pbVar13 + (local_50 - (int)pbVar14) + -0x40) =
                   (int)((((uint)bVar1 * DAT_5f9f41c0 + (uint)bVar8 * iVar15 +
                          (uint)bVar2 * DAT_5f9f41bc) - DAT_5f9f41a8) + DAT_5f9f41ac) >>
                   ((byte)DAT_5f9f41b0 & 0x1f);
              iVar15 = DAT_5f9f41c4;
              bVar3 = *pbVar13;
              bVar4 = pbVar13[1];
              uVar9 = (uint)(pbVar7 + 4)[(int)(pbVar14 + (-4 - iVar11))];
              pbVar10 = pbVar13 + (local_50 - (int)pbVar14);
              pbVar13 = pbVar13 + 4;
              *(int *)pbVar10 =
                   (int)(((uVar9 * DAT_5f9f41bc + (uint)bVar4 * DAT_5f9f41c0 +
                          (uint)bVar3 * DAT_5f9f41c4) - DAT_5f9f41a8) + DAT_5f9f41ac) >>
                   ((byte)DAT_5f9f41b0 & 0x1f);
              iVar5 = DAT_5f9f41b4;
              local_54 = local_54 + uVar9 + bVar2;
              local_5c = local_5c + (uint)bVar1 + (uint)bVar4;
              local_58 = local_58 + (uint)bVar8 + (uint)bVar3;
              local_30 = local_30 + -1;
              pbVar7 = pbVar7 + 4;
            } while (local_30 != 0);
            bVar8 = (byte)DAT_5f9f41b8;
            *(int *)((local_60 - (int)local_44) + (int)local_24) =
                 ((DAT_5f9f41d0 * local_58 - DAT_5f9f41c8 * local_54) - DAT_5f9f41cc * local_5c) +
                 DAT_5f9f41b4 >> (bVar8 & 0x1f);
            iVar12 = 0x20;
            pbVar14 = pbVar14 + param_3;
            iVar11 = iVar11 + param_3;
            *local_24 = ((DAT_5f9f41d4 * local_54 - DAT_5f9f41d8 * local_5c) -
                        DAT_5f9f41dc * local_58) + iVar5 >> (bVar8 & 0x1f);
            local_24 = local_24 + 8;
            local_50 = local_50 + 0x20;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          local_4c = local_4c + 8;
          local_1c = local_1c + -1;
          iVar11 = param_1 + 8;
          iVar5 = local_60 + 4;
          piVar6 = local_44 + 1;
        } while (local_1c != 0);
        local_4c = local_48 + 0x100;
        local_18 = local_18 + -1;
        if (local_18 == 0) break;
        local_1c = 4;
        local_48 = local_4c;
      }
      local_44 = local_44 + 9;
      local_60 = local_60 + 0x24;
      param_1 = param_1 + -0x38 + param_3 * 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_40 = local_40 + 0x80;
    if (0xff < local_40) break;
    iVar12 = 0;
    local_14 = 2;
  }
  return;
}


