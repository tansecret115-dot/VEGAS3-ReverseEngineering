/* Module: aviplug.dll
   Function: FUN_5f969e70
   Address: 5f969e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969e70(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_38;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_64 = param_2 + 0x500;
  local_48 = (int *)(param_2 + 0x400);
  local_44 = 0;
  iVar12 = 0;
  local_1c = 2;
  iVar11 = DAT_5f9f41c4;
  while( true ) {
    do {
      local_20 = 2;
      local_50 = (int *)(param_2 + 0x40 + (local_44 + iVar12) * 4);
      local_24 = 4;
      iVar9 = param_1;
      iVar5 = local_64;
      local_4c = local_50;
      piVar10 = local_48;
      while( true ) {
        do {
          local_48 = piVar10;
          local_64 = iVar5;
          param_1 = iVar9;
          local_54 = local_50;
          pbVar14 = (byte *)(param_1 + param_3 * 2);
          local_28 = 2;
          iVar9 = param_1;
          local_2c = local_48;
          do {
            local_5c = 0;
            local_60 = 0;
            local_58 = 0;
            local_38 = 2;
            pbVar6 = (byte *)(iVar9 + 2);
            piVar10 = local_54;
            pbVar13 = pbVar14;
            do {
              bVar7 = pbVar6[-2];
              bVar1 = pbVar6[-1];
              bVar2 = *pbVar6;
              piVar10[-0x10] =
                   (int)((((uint)bVar1 * DAT_5f9f41c0 + (uint)bVar7 * iVar11 +
                          (uint)bVar2 * DAT_5f9f41bc) - DAT_5f9f41a8) + DAT_5f9f41ac) >>
                   ((byte)DAT_5f9f41b0 & 0x1f);
              iVar11 = DAT_5f9f41c4;
              bVar3 = *pbVar13;
              bVar4 = pbVar13[1];
              uVar8 = (uint)(pbVar6 + 3)[(int)(pbVar14 + (-3 - iVar9))];
              *piVar10 = (int)(((uVar8 * DAT_5f9f41bc + (uint)bVar4 * DAT_5f9f41c0 +
                                (uint)bVar3 * DAT_5f9f41c4) - DAT_5f9f41a8) + DAT_5f9f41ac) >>
                         ((byte)DAT_5f9f41b0 & 0x1f);
              iVar5 = DAT_5f9f41b4;
              local_58 = local_58 + uVar8 + bVar2;
              local_60 = local_60 + (uint)bVar1 + (uint)bVar4;
              local_5c = local_5c + (uint)bVar7 + (uint)bVar3;
              local_38 = local_38 + -1;
              pbVar6 = pbVar6 + 3;
              piVar10 = piVar10 + 1;
              pbVar13 = pbVar13 + 3;
            } while (local_38 != 0);
            bVar7 = (byte)DAT_5f9f41b8;
            *(int *)((int)local_2c + (local_64 - (int)local_48)) =
                 ((DAT_5f9f41d0 * local_5c - DAT_5f9f41c8 * local_58) - DAT_5f9f41cc * local_60) +
                 DAT_5f9f41b4 >> (bVar7 & 0x1f);
            iVar12 = 0x20;
            pbVar14 = pbVar14 + param_3;
            iVar9 = iVar9 + param_3;
            *local_2c = ((DAT_5f9f41d4 * local_58 - DAT_5f9f41d8 * local_60) -
                        DAT_5f9f41dc * local_5c) + iVar5 >> (bVar7 & 0x1f);
            local_2c = local_2c + 8;
            local_54 = local_54 + 8;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
          local_50 = local_50 + 2;
          local_24 = local_24 + -1;
          iVar9 = param_1 + 6;
          iVar5 = local_64 + 4;
          piVar10 = local_48 + 1;
        } while (local_24 != 0);
        local_50 = local_4c + 0x40;
        local_20 = local_20 + -1;
        if (local_20 == 0) break;
        local_24 = 4;
        local_4c = local_50;
      }
      local_48 = local_48 + 9;
      local_64 = local_64 + 0x24;
      param_1 = param_1 + -0x2a + param_3 * 4;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_44 = local_44 + 0x80;
    if (0xff < local_44) break;
    iVar12 = 0;
    local_1c = 2;
  }
  return;
}


