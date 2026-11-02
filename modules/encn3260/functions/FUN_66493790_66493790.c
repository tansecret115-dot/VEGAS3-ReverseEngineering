/* Module: encn3260.dll
   Function: FUN_66493790
   Address: 66493790
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66493790(void *this,int *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  void *this_00;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  byte local_46;
  byte local_44;
  byte bStack_43;
  char local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  undefined2 local_39;
  byte local_37;
  byte bStack_36;
  undefined2 local_35;
  char local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  int *local_1c;
  byte *local_18;
  void *local_14;
  uint local_10;
  byte *local_c;
  byte *local_8;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return -0x7ffbfff7;
  }
  local_14 = this;
  piVar5 = (int *)(**(code **)(*param_1 + 0xc))();
  if (piVar5 == (int *)0x0) {
    return -0x7ffbfff7;
  }
  local_1c = piVar5;
  iVar6 = (**(code **)(*piVar5 + 0x24))(piVar5);
  if (iVar6 != 0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    return 0;
  }
  piVar7 = (int *)(**(code **)(*piVar5 + 0x10))(piVar5);
  (**(code **)(*piVar7 + 0x18))(piVar7);
  (**(code **)(*piVar5 + 0x14))(piVar5);
  local_18 = (byte *)(**(code **)(*piVar5 + 0x18))(piVar5);
  uVar8 = FUN_6648d180(*(void **)((int)this + 0x2c),(uint)local_18);
  if (uVar8 == 0) {
    return -0x7ffbfff7;
  }
  if (*(int *)(uVar8 + 0xc) == 0) {
    *(undefined4 *)(uVar8 + 0xc) = 1;
  }
  *(short *)(uVar8 + 4) = (short)param_1[1];
  local_10 = uVar8;
  uVar9 = (**(code **)(*param_1 + 0x1c))(param_1);
  *(undefined4 *)(uVar8 + 0x12) = uVar9;
  local_8 = (byte *)0x0;
  iVar6 = FUN_66493ab0(local_14,&local_28);
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*piVar7 + 0x18))(piVar7);
    pbVar10 = operator_new(iVar6 + 0x10);
  }
  else {
    iVar6 = (**(code **)(*piVar7 + 0x18))(piVar7);
    pbVar10 = operator_new(iVar6 + 0x19);
    bVar13 = *pbVar10;
    *pbVar10 = bVar13 & 0x7f;
    bVar12 = local_28 << 7;
    *pbVar10 = bVar12 | bVar13 & 3;
    bVar3 = (local_27 & 0x1f) << 2;
    *pbVar10 = bVar3 | bVar12 | bVar13 & 1;
    bVar13 = (local_26 & 1) << 1 | bVar3 | bVar12;
    *pbVar10 = bVar13;
    *pbVar10 = local_25 & 1 | bVar13;
    pbVar10[1] = local_23;
    pbVar10[2] = local_24;
    local_8 = pbVar10 + 3;
    if (local_28 == '\x01') {
      pbVar10[3] = local_21;
      pbVar10[4] = local_22;
      local_8 = pbVar10 + 5;
    }
    *local_8 = (byte)((uint)_local_20 >> 0x18);
    local_8[1] = (byte)((uint)_local_20 >> 0x10);
    local_8[2] = (byte)((uint)_local_20 >> 8);
    local_8[3] = local_20;
    local_8 = local_8 + (4 - (int)pbVar10);
  }
  if ((ushort)local_18 < 0x1f) {
    local_46 = (byte)local_18;
  }
  else {
    local_46 = 0x1f;
    local_39 = (ushort)local_18;
  }
  iVar6 = param_1[2];
  uVar1 = (undefined2)param_1[1];
  *(undefined2 *)(local_10 + 4) = uVar1;
  uVar2 = *(undefined2 *)((int)param_1 + 6);
  local_c = pbVar10;
  uVar9 = (**(code **)(*piVar5 + 0x14))(piVar5);
  *(undefined4 *)(local_10 + 0x12) = uVar9;
  uVar4 = (**(code **)(*piVar5 + 0x20))(piVar5);
  local_3e = 0x3f;
  if (uVar4 < 0x40) {
    local_3e = (byte)uVar4;
    uVar4 = local_35;
  }
  local_35 = uVar4;
  pbVar11 = (byte *)(**(code **)(*piVar7 + 0x1c))(piVar7);
  uVar8 = (**(code **)(*piVar7 + 0x18))(piVar7);
  this_00 = local_14;
  local_18 = pbVar10 + (int)local_8;
  local_44 = (byte)uVar1;
  *local_18 = iVar6 == 10 | (local_46 & 0x1f | 0x20) << 1;
  bStack_43 = (byte)((ushort)uVar1 >> 8);
  local_18[1] = bStack_43;
  local_18[2] = local_44;
  local_18[3] = (local_40 << 1 | local_3f & 1) << 6 | local_3e & 0x3f;
  local_18[4] = (byte)((uint)uVar9 >> 0x18);
  local_18[5] = (byte)((uint)uVar9 >> 0x10);
  local_3d = (byte)uVar9;
  local_18[6] = (byte)((uint)uVar9 >> 8);
  local_18[7] = local_3d;
  pbVar10 = local_18 + 8;
  if (local_46 == 0x1f) {
    *pbVar10 = local_39._1_1_;
    local_18[9] = (byte)local_39;
    pbVar10 = local_18 + 10;
  }
  local_37 = (byte)uVar2;
  bStack_36 = (byte)((ushort)uVar2 >> 8);
  *pbVar10 = bStack_36;
  pbVar10[1] = local_37;
  pbVar15 = pbVar10 + 2;
  if (local_3e == 0x3f) {
    *pbVar15 = local_35._1_1_;
    pbVar10[3] = (byte)local_35;
    pbVar15 = pbVar10 + 4;
  }
  pbVar10 = pbVar15;
  for (uVar14 = uVar8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar14 = uVar8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pbVar10 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar10 = pbVar10 + 1;
  }
  iVar6 = uVar8 - (int)local_18;
  *(int *)((int)local_14 + 0x38) = *(int *)((int)local_14 + 0x38) + 1;
  uVar14 = (**(code **)(*param_1 + 0x24))();
  uVar8 = *(uint *)((int)this_00 + 0x3c);
  *(uint *)((int)this_00 + 0x3c) = uVar8 + uVar14;
  *(uint *)((int)this_00 + 0x40) = *(int *)((int)this_00 + 0x40) + (uint)CARRY4(uVar8,uVar14);
  iVar6 = FUN_66493d00(this_00,(undefined4 *)local_c,(uint)(pbVar15 + (int)(local_8 + iVar6)));
  (**(code **)(*piVar7 + 8))(piVar7);
  (**(code **)(*local_1c + 8))(local_1c);
  return iVar6;
}


