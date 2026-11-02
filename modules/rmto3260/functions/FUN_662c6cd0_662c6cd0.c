/* Module: rmto3260.dll
   Function: FUN_662c6cd0
   Address: 662c6cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662c6cd0(char *param_1,uint param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  uint local_48;
  uint local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_1a;
  uint local_14;
  undefined4 local_10;
  int local_c;
  char *local_8;
  
  local_10 = 0;
  local_c = 0;
  if ((param_2 < 0x22) || (param_4 < 0x22)) {
    if (param_2 == param_4) {
      bVar6 = true;
      do {
        if (param_2 == 0) break;
        param_2 = param_2 - 1;
        bVar6 = *param_1 == *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
      } while (bVar6);
      if (bVar6) {
        local_c = 1;
      }
    }
  }
  else {
    pcVar1 = operator_new(param_2);
    local_8 = operator_new(param_4);
    pcVar5 = pcVar1;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_1;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcVar5 = local_8;
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_3;
      param_3 = param_3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_14 = param_4;
    if ((pcVar1 != (char *)0x0) && (param_2 != 0)) {
      local_48 = (uint)(byte)pcVar1[4] << 0x18 | (uint)(byte)pcVar1[5] << 0x10 |
                 (uint)(byte)pcVar1[6] << 8 | (uint)(byte)pcVar1[7];
      local_44 = (uint)(byte)pcVar1[8] << 0x18 | (uint)(byte)pcVar1[9] << 0x10 |
                 (uint)(byte)pcVar1[10] << 8 | (uint)(byte)pcVar1[0xb];
      local_40 = CONCAT11(pcVar1[0xc],pcVar1[0xd]);
      local_3e = CONCAT11(pcVar1[0xe],pcVar1[0xf]);
      local_3c = CONCAT11(pcVar1[0x10],pcVar1[0x11]);
      local_3a = CONCAT11(pcVar1[0x12],pcVar1[0x13]);
      local_38 = CONCAT11(pcVar1[0x14],pcVar1[0x15]);
    }
    if ((local_8 != (char *)0x0) && (param_4 != 0)) {
      local_2c = (uint)(byte)local_8[4] << 0x18 | (uint)(byte)local_8[5] << 0x10 |
                 (uint)(byte)local_8[6] << 8 | (uint)(byte)local_8[7];
      local_28 = (uint)(byte)local_8[8] << 0x18 | (uint)(byte)local_8[9] << 0x10 |
                 (uint)(byte)local_8[10] << 8 | (uint)(byte)local_8[0xb];
      local_24 = CONCAT11(local_8[0xc],local_8[0xd]);
      local_22 = CONCAT11(local_8[0xe],local_8[0xf]);
      local_20 = CONCAT11(local_8[0x10],local_8[0x11]);
      local_1e = CONCAT11(local_8[0x12],local_8[0x13]);
      local_1c = CONCAT11(local_8[0x14],local_8[0x15]);
    }
    local_1a = 0;
    local_30 = 0;
    *pcVar1 = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = (char)(local_48 >> 0x18);
    pcVar1[5] = (char)(local_48 >> 0x10);
    pcVar1[6] = (char)(local_48 >> 8);
    pcVar1[7] = (char)local_48;
    pcVar1[8] = (char)(local_44 >> 0x18);
    pcVar1[9] = (char)(local_44 >> 0x10);
    pcVar1[10] = (char)(local_44 >> 8);
    pcVar1[0xb] = (char)local_44;
    pcVar1[0xc] = local_40._1_1_;
    pcVar1[0xd] = (char)local_40;
    pcVar1[0xe] = local_3e._1_1_;
    pcVar1[0xf] = (char)local_3e;
    pcVar1[0x10] = local_3c._1_1_;
    pcVar1[0x11] = (char)local_3c;
    pcVar1[0x12] = local_3a._1_1_;
    pcVar1[0x13] = (char)local_3a;
    pcVar1[0x14] = local_38._1_1_;
    pcVar1[0x15] = (char)local_38;
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    pcVar1[0x18] = '\0';
    pcVar1[0x19] = '\0';
    FUN_662c7090(&local_30,local_8,&local_14);
    uVar3 = FUN_662f2c20(*(uint *)(pcVar1 + 0x1e));
    pcVar5 = local_8;
    uVar2 = FUN_662f2c20(*(uint *)(local_8 + 0x1e));
    *(uint *)(pcVar1 + 0x1e) = uVar3 & 0xfff00000;
    *(uint *)(pcVar5 + 0x1e) = uVar2 & 0xfff00000;
    uVar3 = FUN_662f2c20(*(uint *)(pcVar1 + 0x1a));
    uVar2 = FUN_662f2c20(*(uint *)(pcVar5 + 0x1a));
    *(uint *)(pcVar1 + 0x1a) = uVar3 & 0xfe0fffff;
    *(uint *)(pcVar5 + 0x1a) = uVar2 & 0xfe0fffff;
    if (param_2 == param_4) {
      bVar6 = true;
      pcVar4 = pcVar1;
      do {
        if (param_2 == 0) break;
        param_2 = param_2 - 1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      pcVar5 = local_8;
      if (bVar6) {
        local_c = 1;
      }
    }
    else {
      local_c = 0;
    }
    if (pcVar1 != (char *)0x0) {
      operator_delete(pcVar1);
    }
    if (pcVar5 != (char *)0x0) {
      operator_delete(pcVar5);
    }
  }
  if (local_c == 0) {
    local_10 = 0x800403c8;
  }
  return local_10;
}


