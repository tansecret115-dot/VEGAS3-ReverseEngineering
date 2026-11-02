/* Module: encn3260.dll
   Function: FUN_6648e440
   Address: 6648e440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648e440(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  bool local_40;
  byte local_3f;
  undefined1 local_3e;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 local_38;
  
  if (*(int *)((int)this + 0x30) == 0) {
    return 0x80040009;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0xc))();
  if (piVar3 == (int *)0x0) {
    return 0x80040009;
  }
  iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3);
  if (iVar4 != 0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    return 0;
  }
  piVar5 = (int *)(**(code **)(*piVar3 + 0x10))(piVar3);
  (**(code **)(*piVar5 + 0x18))(piVar5);
  iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3);
  uVar6 = (**(code **)(*piVar3 + 0x18))(piVar3);
  sVar2 = (**(code **)(*piVar3 + 0x20))(piVar3);
  (**(code **)(*piVar3 + 0x1c))(piVar3);
  uVar6 = FUN_6648d180(*(void **)((int)this + 0x2c),uVar6);
  if (*(int *)(uVar6 + 0xc) == 0) {
    *(undefined4 *)(uVar6 + 0xc) = 1;
  }
  uVar1 = (undefined2)param_1[1];
  *(undefined2 *)(uVar6 + 4) = uVar1;
  if (*(int *)((int)this + 0x7b) == 0) {
    local_40 = false;
  }
  else {
    local_40 = sVar2 == *(short *)((int)this + 0x7f);
  }
  local_3e = (undefined1)uVar1;
  puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))(piVar5);
  uVar8 = (**(code **)(*piVar5 + 0x18))(piVar5);
  puVar14 = (undefined4 *)(*(undefined4 **)((int)this + 0x8d))[2];
  if (puVar14 == (undefined4 *)0x0) {
    uVar13 = *(undefined4 *)**(undefined4 **)((int)this + 0x8d);
  }
  else {
    uVar13 = *puVar14;
  }
  if (*(int *)((int)this + 0x85) == 0) {
    local_3f = *(byte *)((int)this + 0x7a);
  }
  else {
    local_3f = *(byte *)((int)this + 0x7a);
    iVar4 = 0;
  }
  if (*(int *)((int)this + 0x72) != 0) {
    FUN_6648f230(*(int *)((int)this + 0x91));
    *(undefined4 *)(*(int *)((int)this + 0x91) + 0x70) = 1;
    *(undefined4 *)((int)this + 0x72) = 0;
    *(int *)((int)this + 0x89) = iVar4;
  }
  iVar4 = iVar4 - *(int *)((int)this + 0x89);
  *(int *)(uVar6 + 0x12) = iVar4;
  uStack_3c = (undefined1)iVar4;
  uStack_3b = (undefined1)((uint)iVar4 >> 8);
  iVar9 = (**(code **)(*piVar5 + 0x18))(piVar5);
  puVar10 = operator_new(iVar9 + 0x14);
  *puVar10 = 0x80;
  puVar10[1] = local_40 << 7 | local_3f & 0x7f;
  puVar10[2] = (char)((ushort)uVar1 >> 8);
  puVar10[3] = local_3e;
  puVar10[4] = (char)((uint)iVar4 >> 0x18);
  puVar10[5] = (char)((uint)iVar4 >> 0x10);
  puVar10[6] = uStack_3b;
  puVar10[7] = uStack_3c;
  puVar10[8] = (char)((uint)uVar13 >> 0x18);
  local_38 = (undefined1)uVar13;
  puVar10[9] = (char)((uint)uVar13 >> 0x10);
  puVar10[10] = (char)((uint)uVar13 >> 8);
  puVar10[0xb] = local_38;
  puVar14 = (undefined4 *)(puVar10 + 0xc);
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar14 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar14 = puVar14 + 1;
  }
  for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar14 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  uVar11 = (**(code **)(*param_1 + 0x24))();
  uVar6 = *(uint *)((int)this + 0x3c);
  *(uint *)((int)this + 0x3c) = uVar6 + uVar11;
  *(uint *)((int)this + 0x40) = *(int *)((int)this + 0x40) + (uint)CARRY4(uVar6,uVar11);
  *param_2 = puVar10;
  *param_3 = (undefined1 *)((int)(puVar10 + 0xc) + (uVar8 - (int)puVar10));
  iVar12 = (**(code **)(*param_1 + 0x24))();
  iVar9 = *(int *)((int)this + 0x8d);
  *(undefined2 *)(*(int *)(iVar9 + 8) + 4) = uVar1;
  *(int *)(*(int *)(iVar9 + 8) + 6) = iVar4;
  *(int *)(*(int *)(iVar9 + 8) + 10) = *(int *)(*(int *)(iVar9 + 8) + 10) + 1;
  *(int *)(*(int *)(iVar9 + 8) + 0xe) = *(int *)(*(int *)(iVar9 + 8) + 0xe) + iVar12;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x12) = 1;
  (**(code **)(*piVar5 + 8))(piVar5);
  (**(code **)(*piVar3 + 8))(piVar3);
  return 0;
}


