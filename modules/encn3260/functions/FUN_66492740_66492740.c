/* Module: encn3260.dll
   Function: FUN_66492740
   Address: 66492740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66492740(void *this,undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  char local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  undefined2 uStack_30;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte local_2a;
  uint local_29;
  undefined2 local_25;
  undefined2 uStack_23;
  ushort local_21;
  undefined2 uStack_1f;
  undefined2 uStack_1d;
  byte *local_1b;
  undefined2 local_10;
  
  pbVar4 = (byte *)CONCAT22(uStack_1d,uStack_1f);
  uVar2 = *param_2;
  pbVar3 = (byte *)*param_1;
  if ((pbVar3 == (byte *)0x0) || (uVar2 == 0)) {
    pbVar10 = (byte *)0x0;
    pbVar5 = local_1b;
  }
  else {
    bVar1 = *pbVar3;
    local_34 = -((char)bVar1 >> 7);
    local_33 = bVar1 >> 6 & 1;
    local_31 = bVar1 & 1;
    local_32 = bVar1 >> 1 & 0x1f;
    uStack_30 = CONCAT11(pbVar3[1],pbVar3[2]);
    pbVar4 = pbVar3 + 3;
    if (local_34 == '\x01') {
      bStack_2e = pbVar3[4];
      bStack_2d = *pbVar4;
      pbVar4 = pbVar3 + 5;
    }
    bStack_2c = *pbVar4 >> 7;
    local_2a = *pbVar4 & 0x3f;
    local_29 = (uint)pbVar4[1] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[3] << 8 |
               (uint)pbVar4[4];
    pbVar5 = pbVar4 + 5;
    if (local_32 == 0x1f) {
      local_25 = CONCAT11(*pbVar5,pbVar4[6]);
      pbVar5 = pbVar4 + 7;
    }
    if (local_33 == 1) {
      uStack_23 = CONCAT11(*pbVar5,pbVar5[1]);
      pbVar5 = pbVar5 + 2;
    }
    if (local_2a == 0x3f) {
      local_21 = CONCAT11(*pbVar5,pbVar5[1]);
      pbVar5 = pbVar5 + 2;
    }
    pbVar4 = pbVar3 + (uVar2 - (int)pbVar5);
    pbVar10 = pbVar5 + (int)pbVar4;
    if (uVar2 < (uint)((int)pbVar10 - (int)pbVar3)) {
      pbVar10 = (byte *)0x0;
      pbVar5 = local_1b;
    }
  }
  local_1b = pbVar5;
  if (pbVar10 == (byte *)0x0) {
    *param_2 = 0;
    return -0x7ffbfff7;
  }
  if (local_34 == '\0') goto LAB_664929ba;
  uVar11 = CONCAT12(bStack_2c,CONCAT11(bStack_2d,bStack_2e)) & 0xffff;
  if ((pbVar3 == (byte *)0x0) || (CONCAT11(bStack_2d,bStack_2e) == 0)) {
LAB_6649299d:
    pbVar10 = (byte *)0x0;
    pbVar5 = local_1b;
  }
  else {
    bVar1 = *pbVar3;
    local_33 = bVar1 >> 6 & 1;
    local_31 = bVar1 & 1;
    local_32 = bVar1 >> 1 & 0x1f;
    uStack_30 = CONCAT11(pbVar3[1],pbVar3[2]);
    pbVar4 = pbVar3 + 3;
    if ((char)bVar1 < '\0') {
      pbVar4 = pbVar3 + 5;
    }
    bStack_2c = *pbVar4 >> 7;
    local_2a = *pbVar4 & 0x3f;
    local_29 = (uint)pbVar4[1] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[3] << 8 |
               (uint)pbVar4[4];
    pbVar5 = pbVar4 + 5;
    if (local_32 == 0x1f) {
      local_25 = CONCAT11(*pbVar5,pbVar4[6]);
      pbVar5 = pbVar4 + 7;
    }
    if (local_33 == 1) {
      uStack_23 = CONCAT11(*pbVar5,pbVar5[1]);
      pbVar5 = pbVar5 + 2;
    }
    if (local_2a == 0x3f) {
      local_21 = CONCAT11(*pbVar5,pbVar5[1]);
      pbVar5 = pbVar5 + 2;
    }
    pbVar4 = pbVar3 + (uVar11 - (int)pbVar5);
    pbVar10 = pbVar5 + (int)pbVar4;
    if (uVar11 < (uint)((int)pbVar10 - (int)pbVar3)) goto LAB_6649299d;
  }
  local_1b = pbVar5;
  if (pbVar10 == (byte *)0x0) {
    *param_2 = 0;
    return -0x7ffbfff7;
  }
LAB_664929ba:
  *param_2 = (uint)(pbVar3 + (uVar2 - (int)pbVar10));
  *param_1 = pbVar10;
  if (local_32 == 0x1f) {
    param_2 = (uint *)CONCAT22(uStack_23,local_25);
  }
  else {
    param_2 = (uint *)CONCAT22(param_2._2_2_,(ushort)local_32);
  }
  local_10 = 0;
  if (local_2a == 0x3f) {
    param_1 = (undefined4 *)(uint)local_21;
  }
  else {
    param_1 = (undefined4 *)(uint)local_2a;
  }
  if (local_33 == 1) {
    local_10 = uStack_23;
  }
  puVar6 = operator_new(0x19);
  if (puVar6 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_66492710(puVar6);
  }
  (**(code **)(*piVar7 + 4))(piVar7);
  puVar6 = operator_new(0x28);
  if (puVar6 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_664bad50(puVar6);
  }
  (**(code **)(*piVar8 + 4))(piVar8);
  (**(code **)(*piVar8 + 0x10))(piVar8,local_1b,pbVar4);
  (**(code **)(*piVar7 + 0x2c))(piVar7,piVar8,local_29,param_2,1,param_1);
  if (*(int *)((int)this + 0xaa) != 0) {
    *(undefined4 *)((int)this + 0xaa) = 0;
  }
  if (bStack_2c != 0) {
    *(undefined4 *)((int)this + 0xaa) = param_3;
  }
  iVar9 = FUN_6648d700(this,piVar7,(uint)param_2,uStack_30,local_10,
                       CONCAT21(uStack_30,local_31) & 0xff);
  (**(code **)(*piVar8 + 8))(piVar8);
  (**(code **)(*piVar7 + 8))(piVar7);
  return iVar9;
}


