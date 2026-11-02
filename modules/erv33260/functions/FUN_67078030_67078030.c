/* Module: erv33260.dll
   Function: FUN_67078030
   Address: 67078030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67078030(void *this,uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *local_8;
  
  puVar2 = param_1;
  if (*(int *)((int)this + 0x2b4) == 0) {
    return 4;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x30) != 0) {
    return 4;
  }
  param_2[0xb] = 0;
  param_2[0xc] = param_1[0xc];
  *(undefined4 *)((int)this + 0x194) = 0;
  if ((*(uint *)((int)this + 0x88) == param_1[1]) && (*(uint *)((int)this + 0x8c) == param_1[2])) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_8 = this;
  if ((!bVar1) && (iVar3 = FUN_670784d0(this,param_1), iVar3 != 0)) {
    return iVar3;
  }
  param_1 = (uint *)FUN_6707b710(*(int **)((int)this + 0x318));
  param_1[5] = puVar2[0xc];
  FUN_6707d1f0(this,puVar2,(int)param_1);
  (**(code **)(**(int **)((int)this + 0x340) + 0x24))
            (param_1[1],param_1[2],param_1[3],param_1[4],param_1[4],puVar2[1],puVar2[2]);
  puVar2 = param_2;
  if (*(int *)((int)this + 0x334) != 0) {
    uVar8 = *(uint *)((int)this + 0x338);
    puVar6 = *(undefined4 **)((int)this + 0x330);
    puVar9 = (undefined4 *)param_1[9];
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    param_1[10] = 1;
  }
  local_8 = (void *)FUN_670796a0(this,*(int *)((int)this + 0x31c));
  if (local_8 == (void *)0x2) {
    iVar3 = FUN_6707b9d0(*(void **)((int)this + 0x174),(int)param_1,2);
  }
  else {
    iVar3 = FUN_6707b9d0(*(void **)((int)this + 0x170),(int)param_1,(int)local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = FUN_67079550((int)this);
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar4 = FUN_6707ba70(*(void **)((int)this + 0x170),(int *)&param_1,&local_8);
  iVar3 = 0;
  if ((char)uVar4 != '\0') {
    iVar3 = FUN_67078f20(this,(int)param_1,(int *)&local_8,(int)puVar2);
    param_1[10] = 0;
    *(undefined4 *)((int)this + 0x334) = 0;
  }
  if (puVar2[0xb] != 0) {
    puVar2[0xc] = param_1[5];
    if (local_8 == (void *)0x0) {
      uVar8 = *param_4 | 1;
    }
    else {
      if (local_8 != (void *)0x2) goto LAB_670781f9;
      uVar8 = *param_4 | 2;
    }
    *param_4 = uVar8;
  }
LAB_670781f9:
  iVar5 = *(int *)((int)this + 0x31c) + 1;
  *(int *)((int)this + 0x31c) = iVar5;
  if (iVar5 == *(int *)((int)this + 0x7c)) {
    *(undefined4 *)((int)this + 0x31c) = 0;
  }
  *(undefined1 *)((int)this + 0x2bd) = 0;
  if ((iVar3 == 0) && (puVar2[0xb] == 0)) {
    iVar5 = (**(code **)(**(int **)((int)this + 4) + 4))();
    if (iVar5 != 0) {
      *param_4 = *param_4 | 8;
      return 0;
    }
    puVar6 = (undefined4 *)FUN_67072360(puVar2);
    puVar2[0xb] = 8;
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  return iVar3;
}


