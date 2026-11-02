/* Module: erv33260.dll
   Function: FUN_6708e320
   Address: 6708e320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6708e320(int *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int local_90 [8];
  int local_70 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_20 [4];
  int local_1c;
  int local_18;
  char local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_4c = *(int *)(*param_1 + 4);
  local_44 = param_1[0x10];
  local_3c = param_1[0xd];
  local_30 = (uint)(param_1[0x1b] == 2);
  uVar1 = param_1[0x11] + 2;
  iVar9 = uVar1 * 0x40 + 0x10;
  local_50 = param_1[4] + iVar9;
  iVar3 = ((uVar1 & 0x1ffffff) * 0x20 + ((param_1[0x12] + 2) * uVar1 * 0x10 & 0xfffffff) * 2) * 2 +
          8;
  local_34 = param_1[4] + iVar3;
  local_c = 0;
  local_2c = (uVar1 & 0xfffffff) << 2;
  local_28 = (uVar1 & 0xfffffff) << 3;
  local_8 = 0;
  if (local_30 != 0) {
    local_48 = param_1[5] + iVar9;
    local_40 = param_1[5] + iVar3;
  }
  local_24 = param_1[0x11] * param_1[0x12];
  if (local_24 != 0) {
    local_18 = 0;
    local_1c = 0;
    do {
      iVar9 = local_1c;
      pcVar2 = (char *)(param_1[7] + *(int *)(local_1c + 8 + param_1[0xd]) * 2);
      FUN_6708e690((byte *)(*(int *)(local_3c + local_1c) + local_4c),local_44,local_90,local_70);
      uVar1 = *(uint *)(iVar9 + 0xc + param_1[0xd]);
      uVar6 = uVar1 >> 8 & 0xff;
      uVar7 = uVar1 >> 0x10 & 0xff;
      uVar5 = uVar1 & 0xff;
      if ((int)param_2 < (int)(uVar1 & 0xff)) {
        uVar5 = param_2;
      }
      if ((int)param_2 < (int)uVar6) {
        uVar6 = param_2;
      }
      if ((int)param_2 < (int)uVar7) {
        uVar7 = param_2;
      }
      uVar4 = uVar1 >> 0x18;
      if ((int)param_2 < (int)(uVar1 >> 0x18)) {
        uVar4 = param_2;
      }
      puVar8 = (ushort *)(local_8 - uVar5);
      local_10 = uVar6 + local_8;
      iVar9 = local_c - uVar7;
      local_38 = uVar4 + local_c;
      FUN_6708e540(local_50,local_34,local_28,local_2c,puVar8,iVar9,local_10,local_38,local_90,
                   (int)local_70,(uint *)local_20,(uint *)local_14);
      *pcVar2 = local_20[0] - (char)local_8;
      pcVar2[1] = local_14[0] - (char)local_c;
      if (local_30 != 0) {
        FUN_6708e540(local_48,local_40,local_28,local_2c,puVar8,iVar9,local_10,local_38,local_90,
                     (int)local_70,(uint *)local_20,(uint *)local_14);
        pcVar2[4] = local_20[0] - (char)local_8;
        pcVar2[5] = local_14[0] - (char)local_c;
      }
      if ((*(byte *)(local_18 + 5 + param_1[0xc]) & 2) == 0) {
        local_8 = 0;
        local_c = local_c + 0x10;
      }
      else {
        local_8 = local_8 + 0x10;
      }
      local_1c = local_1c + 0x10;
      local_18 = local_18 + 0xc;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


