/* Module: rmto3260.dll
   Function: FUN_662c61f0
   Address: 662c61f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_662c61f0(int param_1,undefined1 *param_2,int param_3,undefined4 *param_4,short *param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined2 local_18;
  uint local_16;
  uint local_12;
  undefined4 local_e;
  undefined4 *local_a;
  
  *param_4 = 0;
  if (param_2 == (undefined1 *)0x0) {
    return 0x80070057;
  }
  if (param_3 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    local_18 = CONCAT11(*param_2,param_2[1]);
    local_16 = (uint)(byte)param_2[2] << 0x18 | (uint)(byte)param_2[3] << 0x10 |
               (uint)(byte)param_2[4] << 8 | (uint)(byte)param_2[5];
    local_12 = (uint)(byte)param_2[6] << 0x18 | (uint)(byte)param_2[7] << 0x10 |
               (uint)(byte)param_2[8] << 8 | (uint)(byte)param_2[9];
    uVar5 = CONCAT11(param_2[10],param_2[0xb]);
    local_e = CONCAT22(CONCAT11(param_2[0xc],param_2[0xd]),uVar5);
    puVar1 = (undefined4 *)(param_2 + 0xe);
    if (param_3 < (int)((int)puVar1 + ((uint)uVar5 - (int)param_2) + -2)) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = (undefined1 *)((int)puVar1 + (uVar5 - 2));
      local_a = puVar1;
    }
  }
  if (puVar2 == (undefined1 *)0x0) {
    return 0x80070057;
  }
  iVar6 = local_16 - param_1 / 100;
  if (local_12 != 0) {
    local_12 = local_12 - param_1 / 100;
  }
  if (local_e._2_2_ != 0x200) {
    *param_4 = 1;
    local_18 = *param_5;
    *param_5 = local_18 + 1;
  }
  *param_2 = local_18._1_1_;
  param_2[1] = (undefined1)local_18;
  param_2[2] = (char)((uint)iVar6 >> 0x18);
  param_2[3] = (char)((uint)iVar6 >> 0x10);
  local_16._0_1_ = (undefined1)iVar6;
  param_2[4] = (char)((uint)iVar6 >> 8);
  param_2[5] = (undefined1)local_16;
  param_2[6] = (char)(local_12 >> 0x18);
  param_2[7] = (char)(local_12 >> 0x10);
  param_2[8] = (char)(local_12 >> 8);
  param_2[9] = (undefined1)local_12;
  param_2[10] = local_e._1_1_;
  param_2[0xb] = (undefined1)local_e;
  param_2[0xc] = local_e._3_1_;
  param_2[0xd] = local_e._2_1_;
  uVar3 = (local_e & 0xffff) - 2;
  puVar1 = (undefined4 *)(param_2 + 0xe);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = *local_a;
    local_a = local_a + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)local_a;
    local_a = (undefined4 *)((int)local_a + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return 0;
}


