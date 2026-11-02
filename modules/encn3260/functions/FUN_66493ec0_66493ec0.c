/* Module: encn3260.dll
   Function: FUN_66493ec0
   Address: 66493ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66493ec0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int *piVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  char local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  undefined2 uStack_2c;
  byte bStack_2a;
  byte bStack_29;
  byte local_26;
  uint local_25;
  undefined2 local_21;
  undefined2 uStack_1f;
  ushort local_1d;
  undefined2 uStack_1b;
  undefined2 uStack_19;
  byte *local_17;
  undefined2 local_c;
  
  pbVar6 = (byte *)CONCAT22(uStack_19,uStack_1b);
  pbVar2 = (byte *)*param_2;
  pbVar3 = (byte *)*param_1;
  if ((pbVar3 == (byte *)0x0) || (pbVar2 == (byte *)0x0)) {
    pbVar8 = (byte *)0x0;
  }
  else {
    bVar1 = *pbVar3;
    local_30 = -((char)bVar1 >> 7);
    local_2f = bVar1 >> 6 & 1;
    local_2d = bVar1 & 1;
    local_2e = bVar1 >> 1 & 0x1f;
    uStack_2c = CONCAT11(pbVar3[1],pbVar3[2]);
    pbVar6 = pbVar3 + 3;
    if (local_30 == '\x01') {
      bStack_2a = pbVar3[4];
      bStack_29 = *pbVar6;
      pbVar6 = pbVar3 + 5;
    }
    local_26 = *pbVar6 & 0x3f;
    local_25 = (uint)pbVar6[1] << 0x18 | (uint)pbVar6[2] << 0x10 | (uint)pbVar6[3] << 8 |
               (uint)pbVar6[4];
    pbVar7 = pbVar6 + 5;
    if (local_2e == 0x1f) {
      local_21 = CONCAT11(*pbVar7,pbVar6[6]);
      pbVar7 = pbVar6 + 7;
    }
    if (local_2f == 1) {
      uStack_1f = CONCAT11(*pbVar7,pbVar7[1]);
      pbVar7 = pbVar7 + 2;
    }
    if (local_26 == 0x3f) {
      local_1d = CONCAT11(*pbVar7,pbVar7[1]);
      pbVar7 = pbVar7 + 2;
    }
    pbVar6 = pbVar3 + ((int)pbVar2 - (int)pbVar7);
    if (pbVar2 < pbVar6 + ((int)pbVar7 - (int)pbVar3)) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = pbVar7 + (int)pbVar6;
      local_17 = pbVar7;
    }
  }
  if (pbVar8 == (byte *)0x0) {
    *param_2 = 0;
    return -0x7ffbfff7;
  }
  if (local_30 != '\0') {
    uVar5 = CONCAT11(bStack_29,bStack_2a);
    if ((pbVar3 == (byte *)0x0) || (uVar5 == 0)) {
LAB_66494105:
      pbVar8 = (byte *)0x0;
    }
    else {
      bVar1 = *pbVar3;
      local_2f = bVar1 >> 6 & 1;
      local_2d = bVar1 & 1;
      local_2e = bVar1 >> 1 & 0x1f;
      uStack_2c = CONCAT11(pbVar3[1],pbVar3[2]);
      pbVar6 = pbVar3 + 3;
      if ((char)bVar1 < '\0') {
        pbVar6 = pbVar3 + 5;
      }
      local_26 = *pbVar6 & 0x3f;
      local_25 = (uint)pbVar6[1] << 0x18 | (uint)pbVar6[2] << 0x10 | (uint)pbVar6[3] << 8 |
                 (uint)pbVar6[4];
      pbVar7 = pbVar6 + 5;
      if (local_2e == 0x1f) {
        local_21 = CONCAT11(*pbVar7,pbVar6[6]);
        pbVar7 = pbVar6 + 7;
      }
      if (local_2f == 1) {
        uStack_1f = CONCAT11(*pbVar7,pbVar7[1]);
        pbVar7 = pbVar7 + 2;
      }
      if (local_26 == 0x3f) {
        local_1d = CONCAT11(*pbVar7,pbVar7[1]);
        pbVar7 = pbVar7 + 2;
      }
      pbVar6 = pbVar3 + ((int)(uint)uVar5 - (int)pbVar7);
      if ((byte *)(uint)uVar5 < pbVar6 + ((int)pbVar7 - (int)pbVar3)) goto LAB_66494105;
      pbVar8 = pbVar7 + (int)pbVar6;
      local_17 = pbVar7;
    }
    if (pbVar8 == (byte *)0x0) {
      *param_2 = 0;
      return -0x7ffbfff7;
    }
  }
  *param_2 = pbVar2 + ((int)pbVar3 - (int)pbVar8);
  *param_1 = pbVar8;
  if (local_2e == 0x1f) {
    param_2 = (undefined4 *)CONCAT22(uStack_1f,local_21);
  }
  else {
    param_2 = (undefined4 *)CONCAT22(param_2._2_2_,(ushort)local_2e);
  }
  local_c = 0;
  if (local_26 == 0x3f) {
    param_1 = (undefined4 *)(uint)local_1d;
  }
  else {
    param_1 = (undefined4 *)(uint)local_26;
  }
  if (local_2f == 1) {
    local_c = uStack_1f;
  }
  puVar9 = operator_new(0x19);
  if (puVar9 == (undefined4 *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_66492710(puVar9);
  }
  (**(code **)(*piVar10 + 4))(piVar10);
  puVar9 = operator_new(0x28);
  if (puVar9 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)FUN_664bad50(puVar9);
  }
  (**(code **)(*piVar11 + 4))(piVar11);
  (**(code **)(*piVar11 + 0x10))(piVar11,local_17,pbVar6);
  (**(code **)(*piVar10 + 0x2c))(piVar10,piVar11,local_25,param_2,1,param_1);
  piVar4 = *(int **)((int)this + 0x7d);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))(piVar4,local_25,param_3,pbVar6);
  }
  iVar12 = 0;
  if (*(int *)((int)this + 0x75) != 0) {
    if (*(int *)((int)this + 0x79) != 0) {
      iVar12 = FUN_6648d8e0(this,0,param_2,piVar10);
      goto LAB_66494231;
    }
    if (*(int *)((int)this + 0x75) != 0) goto LAB_66494231;
  }
  iVar12 = FUN_6648d700(this,piVar10,(uint)param_2,uStack_2c,local_c,
                        CONCAT21(uStack_2c,local_2d) & 0xff);
LAB_66494231:
  (**(code **)(*piVar11 + 8))(piVar11);
  (**(code **)(*piVar10 + 8))(piVar10);
  return iVar12;
}


