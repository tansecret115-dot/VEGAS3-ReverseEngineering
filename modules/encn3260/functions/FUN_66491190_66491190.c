/* Module: encn3260.dll
   Function: FUN_66491190
   Address: 66491190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66491190(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  void *extraout_ECX;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte local_8044 [32768];
  undefined1 local_44 [2];
  byte bStackY_42;
  byte bStackY_41;
  undefined4 local_40;
  byte *local_3c;
  int *local_38;
  byte *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  undefined3 uStackY_24;
  byte local_21;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  int *piVar21;
  byte *pbVar22;
  byte *pbVar23;
  
  FUN_664d9260();
  local_38 = extraout_ECX;
  piVar6 = (int *)(**(code **)(*param_1 + 0x10))();
  iVar7 = (**(code **)(*piVar6 + 0x24))();
  if (iVar7 == 0) {
    local_34 = (byte *)(**(code **)(*piVar6 + 0x10))();
    (**(code **)(*(int *)local_34 + 0x18))();
  }
  else {
    local_34 = (byte *)0x0;
  }
  uVar8 = (**(code **)(*piVar6 + 0x18))();
  uVar9 = FUN_6648d180(*(void **)((int)extraout_ECX + 0x2c),uVar8);
  if (uVar9 == 0) {
    return 0x80040009;
  }
  if (*(int *)(uVar9 + 0xc) == 0) {
    *(undefined4 *)(uVar9 + 0xc) = 1;
  }
  this = *(void **)(uVar9 + 0x1a);
  if ((this != (void *)0x0) && (param_1[5] == 0)) {
    FUN_66494670(this,param_1);
    iVar7 = (**(code **)(*param_1 + 0x1c))();
    _local_25 = CONCAT31(0x491231,local_25);
    local_21 = 0x66;
    FUN_664947a0(this,0,iVar7);
  }
  piVar21 = piVar6;
  iVar7 = (**(code **)(*piVar6 + 0x24))();
  bVar20 = (byte)piVar21;
  if (iVar7 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    return 0;
  }
  pbVar22 = (byte *)0x0;
  pbVar14 = param_2;
  if (param_2 == (byte *)0x0) {
    pbVar14 = local_8044;
  }
  _local_25 = CONCAT31(0x49127d,local_25);
  local_21 = 0x66;
  iVar7 = FUN_66491830(local_38,local_44);
  uVar10 = local_30;
  if (iVar7 != 0) {
    *pbVar14 = (((char)_local_44 << 5 | (byte)((uint)_local_44 >> 8) & 0x1f) << 1 | bStackY_42 & 1)
               << 1 | bStackY_41 & 1;
    pbVar14[1] = (byte)((uint)local_40 >> 8);
    pbVar14[2] = (byte)local_40;
    pbVar22 = pbVar14 + 3;
    if ((char)_local_44 == '\x01') {
      *pbVar22 = (byte)((uint)local_40 >> 0x18);
      pbVar14[4] = (byte)((uint)local_40 >> 0x10);
      pbVar22 = pbVar14 + 5;
    }
    *pbVar22 = (byte)((uint)local_3c >> 0x18);
    pbVar22[1] = (byte)((uint)local_3c >> 0x10);
    pbVar22[2] = (byte)((uint)local_3c >> 8);
    pbVar22[3] = (byte)local_3c;
    pbVar22 = pbVar22 + (4 - (int)pbVar14);
  }
  local_30 = (byte *)CONCAT31(local_30._1_3_,param_2 != (byte *)0x0);
  uVar4 = local_30;
  local_30._3_1_ = SUB41(uVar10,3);
  local_30._0_2_ = (undefined2)uVar4;
  if ((ushort)uVar8 < 0x1f) {
    local_30._0_3_ = CONCAT12((char)uVar8,(undefined2)local_30);
  }
  else {
    local_30._0_3_ = CONCAT12(0x1f,(undefined2)local_30);
  }
  bVar15 = (byte)piVar6;
  bVar18 = (byte)((uint)piVar6 >> 0x18);
  iVar3 = param_1[1];
  iVar7 = param_1[2];
  *(short *)(uVar9 + 4) = (short)iVar3;
  local_2c = (int *)CONCAT22(local_2c._2_2_,(short)iVar3);
  uVar2 = *(undefined2 *)((int)param_1 + 6);
  *(undefined2 *)(uVar9 + 6) = uVar2;
  bVar16 = (byte)uVar2;
  bVar17 = (byte)((ushort)uVar2 >> 8);
  _local_25 = CONCAT31(0x49133d,local_25);
  local_21 = 0x66;
  bVar19 = bVar18;
  uVar10 = (**(code **)(*piVar6 + 0x14))();
  *(undefined4 *)(uVar9 + 0x12) = uVar10;
  local_28 = 0x4b;
  local_27 = 0x13;
  local_26 = 0x49;
  uStackY_24 = (undefined3)((uint)uVar10 >> 8);
  local_25 = 0x66;
  local_21 = bVar18;
  uVar5 = (**(code **)(*piVar6 + 0x20))();
  pbVar1 = local_34;
  if (0x3f < uVar5) {
    bVar19 = (byte)uVar5;
    bVar20 = (byte)(uVar5 >> 8);
  }
  local_28 = (char)local_34;
  local_27 = (byte)((uint)local_34 >> 8);
  local_26 = (byte)((uint)local_34 >> 0x10);
  local_25 = (byte)((uint)local_34 >> 0x18);
  local_2c = (int *)0x66491374;
  pbVar11 = (byte *)(**(code **)(*(int *)local_34 + 0x1c))();
  local_2c = (int *)pbVar1;
  local_30 = (byte *)0x6649137d;
  uVar8 = (**(code **)(*(int *)pbVar1 + 0x18))();
  pbVar1 = pbVar14 + (int)pbVar22;
  *pbVar1 = ((char)local_30 << 6 | local_30._2_1_ & 0x1f | 0x20) << 1 | iVar7 == 10;
  pbVar1[1] = local_2c._1_1_;
  pbVar1[2] = (byte)local_2c;
  pbVar12 = pbVar1 + 3;
  pbVar23 = (byte *)0x0;
  if ((char)local_30 == '\x01') {
    pbVar12 = pbVar1 + 5;
    pbVar23 = pbVar1 + 3;
  }
  *pbVar12 = (local_27 & 1 | local_28 << 1) << 6 | local_26 & 0x3f;
  pbVar12[1] = (byte)((uint)uVar10 >> 0x18);
  pbVar12[2] = (byte)((uint)uVar10 >> 0x10);
  pbVar12[3] = (byte)((uint)uVar10 >> 8);
  pbVar12[4] = local_25;
  pbVar13 = pbVar12 + 5;
  if (local_30._2_1_ == 0x1f) {
    pbVar12[5] = bVar15;
    pbVar12[6] = local_21;
    pbVar13 = pbVar12 + 7;
  }
  *pbVar13 = bVar17;
  pbVar13[1] = bVar16;
  pbVar12 = pbVar13 + 2;
  if (local_26 == 0x3f) {
    pbVar13[2] = bVar20;
    pbVar13[3] = bVar19;
    pbVar12 = pbVar13 + 4;
  }
  pbVar13 = pbVar12;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    pbVar13 = pbVar13 + 4;
  }
  for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar13 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar13 + 1;
  }
  pbVar12 = pbVar12 + (uVar8 - (int)pbVar1);
  if (pbVar23 != (byte *)0x0) {
    *pbVar23 = (byte)((uint)pbVar12 >> 8);
    pbVar23[1] = (byte)pbVar12;
  }
  *(int *)((int)local_38 + 0x38) = *(int *)((int)local_38 + 0x38) + 1;
  local_30 = (byte *)0x6649147e;
  uVar9 = (**(code **)(*param_1 + 0x24))();
  uVar8 = *(uint *)((int)local_38 + 0x3c);
  *(uint *)((int)local_38 + 0x3c) = uVar8 + uVar9;
  *(uint *)((int)local_38 + 0x40) = *(int *)((int)local_38 + 0x40) + (uint)CARRY4(uVar8,uVar9);
  if (param_2 != (byte *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = pbVar12 + (int)pbVar22;
    }
    local_30 = local_34;
    iVar7 = *(int *)local_34;
    local_34 = (byte *)0x664914af;
    (**(code **)(iVar7 + 8))();
    return 0;
  }
  local_38 = *(int **)((int)local_38 + 0x78);
  local_30 = pbVar12 + (int)pbVar22;
  local_3c = (byte *)0x664914cd;
  local_34 = pbVar14;
  uVar10 = (**(code **)(*local_38 + 0xc))();
  local_3c = local_34;
  local_40 = 0x664914d8;
  (**(code **)(*(int *)local_34 + 8))();
  return uVar10;
}


