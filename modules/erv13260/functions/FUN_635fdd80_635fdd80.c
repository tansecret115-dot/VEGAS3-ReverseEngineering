/* Module: erv13260.dll
   Function: FUN_635fdd80
   Address: 635fdd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fdd80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int local_50 [3];
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_50[1] = 8;
  local_30 = *(int *)((int)param_2 + 0x23cb);
  local_14 = *param_2;
  local_10 = *param_1;
  iVar2 = param_2[1];
  local_50[2] = local_30 * 8;
  local_44 = local_30 * 8 + 8;
  local_50[0] = 0;
  local_8 = 0;
  local_34 = iVar2;
  if (0 < iVar2) {
    iVar1 = local_30 << 4;
    local_28 = (int)param_2 + 0x6b;
    local_2c = (byte *)0x3;
    local_24 = 0;
    local_40 = iVar1;
    do {
      local_c = 0;
      local_18 = local_24 + -0x10;
      if (0 < local_14) {
        local_20 = local_28;
        do {
          local_1c = local_50;
          local_18 = local_18 + 0x10;
          uVar7 = 0;
          do {
            iVar2 = local_c - (~uVar7 & 1);
            local_3c = 0;
            iVar1 = local_8 - ((int)(uVar7 ^ 2) >> 1);
            local_38 = (uint)*(byte *)(uVar7 + local_20);
            if (iVar2 < 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = local_38;
              if (local_38 == 0) {
                uVar4 = (uint)*(byte *)(uVar7 + (iVar2 + (int)local_2c) * 6 + 0x5a + (int)param_2);
              }
            }
            uVar5 = 0;
            if ((-1 < iVar1) && (uVar5 = local_38, local_38 == 0)) {
              uVar5 = (uint)*(byte *)(uVar7 + (local_c + iVar1 * 0x28) * 6 + 0x6d + (int)param_2);
            }
            if ((uVar4 != 0) || (uVar5 != 0)) {
              FUN_635fe010(uVar4,uVar5,local_18 + local_10 + *local_1c,local_30);
            }
            uVar7 = uVar7 + 1;
            local_1c = local_1c + 1;
          } while ((int)uVar7 < 4);
          local_c = local_c + 1;
          local_20 = local_20 + 6;
          iVar1 = local_40;
          iVar2 = local_34;
        } while (local_c < local_14);
      }
      local_8 = local_8 + 1;
      local_24 = local_24 + iVar1;
      local_28 = local_28 + 0xf0;
      local_2c = (byte *)((int)local_2c + 0x28);
    } while (local_8 < iVar2);
  }
  iVar1 = local_30 / 2;
  local_24 = 4;
  local_28 = iVar1;
  do {
    if (local_24 == 4) {
      local_10 = param_1[2];
    }
    else {
      local_10 = param_1[1];
    }
    local_8 = 0;
    iVar3 = local_24;
    if (0 < iVar2) {
      local_40 = iVar1 << 3;
      pbVar8 = (byte *)(local_24 + 0x65 + (int)param_2);
      local_30 = 0;
      do {
        iVar1 = 0;
        local_2c = pbVar8;
        if (0 < local_14) {
          iVar6 = local_30 + -8 + local_10;
          do {
            uVar4 = (uint)pbVar8[6];
            uVar7 = 0;
            if ((0 < iVar1) && (uVar7 = uVar4, uVar4 == 0)) {
              uVar7 = (uint)*pbVar8;
            }
            uVar5 = 0;
            if ((0 < local_8) && (uVar5 = uVar4, uVar4 == 0)) {
              uVar5 = (uint)pbVar8[-0xea];
            }
            iVar6 = iVar6 + 8;
            if ((uVar7 != 0) || (uVar5 != 0)) {
              FUN_635fe010(uVar7,uVar5,iVar6,local_28);
            }
            iVar1 = iVar1 + 1;
            pbVar8 = pbVar8 + 6;
            iVar3 = local_24;
            iVar2 = local_34;
          } while (iVar1 < local_14);
        }
        local_30 = local_30 + local_40;
        local_8 = local_8 + 1;
        pbVar8 = local_2c + 0xf0;
        iVar1 = local_28;
      } while (local_8 < iVar2);
    }
    local_24 = iVar3 + 1;
  } while (local_24 < 6);
  return;
}


