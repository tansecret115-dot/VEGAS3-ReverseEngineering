/* Module: rmbe3260.dll
   Function: FUN_66042f00
   Address: 66042f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66042f00(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_2c [32];
  uint local_c;
  int local_8;
  
  local_8 = 0;
  FUN_660434c0(local_2c);
  if (param_1 == (uint *)0x0) {
    if (*(int *)((int)this + 0xc) != 0) {
      local_8 = FUN_66042c40((int)this);
    }
    return local_8;
  }
  if (*(int *)this == 0) {
    local_8 = 0x10000;
  }
  if (local_8 != 0) goto LAB_6604303b;
  if (*(int *)((int)this + 4) == 0) {
    local_8 = 0x20000;
  }
  if (local_8 != 0) goto LAB_6604303b;
  if (*(int *)((int)this + 0xc) == 0) {
LAB_66042fa9:
    local_8 = FUN_66042c90(this,(int *)param_1,1);
  }
  else {
    iVar1 = FUN_660439a0(local_2c,3,1);
    if (((*(uint *)((int)this + 0x18) < iVar1 + *param_1) || (1 < param_1[5])) ||
       ((*(byte *)((int)param_1 + 0xe) & 2) != 0)) {
      local_8 = FUN_66042c40((int)this);
    }
    if (*(int *)((int)this + 0xc) == 0) goto LAB_66042fa9;
  }
  if (local_8 != 0) goto LAB_6604303b;
  if (*(int *)((int)this + 0x10) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 3;
  }
  iVar1 = FUN_660439a0(local_2c,uVar4,1);
  if (param_1[5] == 1) {
    local_c = *(uint *)((int)this + 0x18);
    uVar3 = *param_1;
    iVar2 = FUN_660439a0(local_2c,1,1);
    if ((iVar2 + uVar3 <= local_c) && (local_c < iVar1 + uVar3)) {
      FUN_660430a0(this,param_1,1);
      goto LAB_6604303b;
    }
    if ((param_1[5] == 1) && (*param_1 + iVar1 <= *(uint *)((int)this + 0x18))) {
      FUN_660430a0(this,param_1,0);
      goto LAB_6604303b;
    }
  }
  FUN_66043180(this,param_1);
LAB_6604303b:
  uVar3 = FUN_660439a0(local_2c,3,1);
  if (((*(uint *)((int)this + 0x18) <= uVar3) ||
      ((param_1[4] != 0 && (*(int *)((int)this + 0xc) != 0)))) ||
     ((*(int *)((int)this + 0xc) != 0 && (*(int *)((int)this + 0x10) == 0)))) {
    *(uint *)(*(int *)((int)this + 0xc) + 0x10) = param_1[4];
    local_8 = FUN_66042c40((int)this);
  }
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 0x1c))(param_1[1]);
  }
  return local_8;
}


