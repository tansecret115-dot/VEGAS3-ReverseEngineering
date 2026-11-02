/* Module: aviplug.dll
   Function: FUN_5f96a4f0
   Address: 5f96a4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96a4f0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uVar3 = DAT_5f9f41ec;
  local_4c = param_2 + 0x500;
  local_38 = (int *)(param_2 + 0x400);
  local_34 = 0;
  do {
    iVar7 = 0;
    local_c = 2;
    do {
      local_10 = 2;
      local_3c = (int *)(param_2 + 0x40 + (local_34 + iVar7) * 4);
      iVar11 = param_1;
      iVar8 = local_4c;
      piVar6 = local_38;
      do {
        local_38 = piVar6;
        local_4c = iVar8;
        param_1 = iVar11;
        local_14 = 4;
        local_40 = local_3c;
        iVar11 = param_1;
        iVar8 = local_4c;
        piVar6 = local_38;
        do {
          local_38 = piVar6;
          local_4c = iVar8;
          param_1 = iVar11;
          local_44 = local_40;
          local_18 = 2;
          piVar6 = local_38;
          iVar11 = param_1;
          do {
            iVar7 = *(int *)((local_4c - (int)local_38) + (int)piVar6);
            iVar8 = iVar7 * DAT_5f9f41f0 + DAT_5f9f41e8;
            iVar10 = DAT_5f9f41e8 - (iVar7 * DAT_5f9f41f4 + *piVar6 * DAT_5f9f41f8);
            puVar1 = (undefined1 *)(iVar11 + param_3 * 2);
            iVar7 = DAT_5f9f41e8 + *piVar6 * DAT_5f9f41fc;
            local_28 = (undefined1 *)(iVar11 + 2);
            local_48 = local_44;
            local_20 = 2;
            local_24 = puVar1;
            do {
              iVar4 = (local_48[-0x10] << ((byte)DAT_5f9f41e4 & 0x1f)) + DAT_5f9f41e0;
              bVar5 = (byte)uVar3;
              iVar9 = iVar8 + iVar4 >> (bVar5 & 0x1f);
              iVar12 = iVar4 + iVar10 >> (bVar5 & 0x1f);
              iVar4 = iVar4 + iVar7 >> (bVar5 & 0x1f);
              if (iVar9 < 0x100) {
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
              }
              else {
                iVar9 = 0xff;
              }
              local_28[-2] = (char)iVar9;
              if (iVar12 < 0x100) {
                if (iVar12 < 0) {
                  iVar12 = 0;
                }
              }
              else {
                iVar12 = 0xff;
              }
              local_28[-1] = (char)iVar12;
              uVar2 = DAT_5f9f41e4;
              if (iVar4 < 0x100) {
                if (iVar4 < 0) {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = 0xff;
              }
              *local_28 = (char)iVar4;
              iVar4 = (*local_48 << ((byte)uVar2 & 0x1f)) + DAT_5f9f41e0;
              iVar12 = iVar8 + iVar4 >> (bVar5 & 0x1f);
              iVar9 = iVar4 + iVar10 >> (bVar5 & 0x1f);
              iVar4 = iVar4 + iVar7 >> (bVar5 & 0x1f);
              if (iVar12 < 0x100) {
                if (iVar12 < 0) {
                  iVar12 = 0;
                }
              }
              else {
                iVar12 = 0xff;
              }
              *local_24 = (char)iVar12;
              if (iVar9 < 0x100) {
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
              }
              else {
                iVar9 = 0xff;
              }
              local_24[1] = (char)iVar9;
              if (iVar4 < 0x100) {
                if (iVar4 < 0) {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = 0xff;
              }
              local_28 = local_28 + 3;
              local_24 = local_24 + 3;
              local_28[(int)(puVar1 + (-3 - iVar11))] = (char)iVar4;
              local_48 = local_48 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            iVar7 = 0x20;
            local_44 = local_44 + 8;
            iVar11 = param_1 + param_3;
            piVar6 = piVar6 + 8;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          local_40 = local_40 + 2;
          local_14 = local_14 + -1;
          iVar11 = param_1 + 6;
          iVar8 = local_4c + 4;
          piVar6 = local_38 + 1;
        } while (local_14 != 0);
        local_3c = local_3c + 0x40;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_38 = local_38 + 9;
      local_4c = local_4c + 0x24;
      param_1 = param_1 + -0x2a + param_3 * 4;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_34 = local_34 + 0x80;
  } while (local_34 < 0x100);
  return;
}


