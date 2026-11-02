/* Module: rmme3260.dll
   Function: FUN_66203d20
   Address: 66203d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66203d8d) */
/* WARNING: Removing unreachable block (ram,0x66203df5) */

int __thiscall FUN_66203d20(void *this,int *param_1,int *param_2)

{
  void *this_00;
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_1 = 0;
  local_24 = (int *)((int)this + 0x10);
  iVar6 = 0;
  iVar5 = -0x7fffbffb;
  local_8 = 0;
  local_20 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (local_24 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x20);
  }
  if (this == (void *)0xffffffdc) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x34);
  }
  if (iVar2 + iVar4 != 1) {
    local_8 = (uint)*(ushort *)((int)this + 0x4c) * 2 + 8;
  }
  local_28 = *(int *)((int)this + 0x14);
  local_18 = this;
  while (local_28 != 0) {
    puVar3 = (undefined4 *)FUN_66250c10(local_28);
    iVar5 = FUN_66206470((void *)*puVar3,&local_20,&local_14,&local_10);
    if (iVar5 < 0) break;
    iVar6 = iVar6 + local_10 + local_14;
    local_8 = local_8 + local_10 + local_14;
    FUN_66250bf0(&local_28);
  }
  local_24 = local_18 + 9;
  local_28 = local_18[10];
  local_c = iVar6;
  while (local_28 != 0) {
    puVar3 = (undefined4 *)FUN_66250c10(local_28);
    this_00 = (void *)*puVar3;
    local_1c = 0;
    uVar1 = FUN_662182a0((int)this_00);
    iVar5 = (**(code **)(*local_18 + 0x38))(local_18,uVar1,&local_1c);
    if ((-1 < iVar5) && (local_1c == 0)) {
      iVar5 = FUN_66206470(this_00,&local_20,&local_14,&local_10);
      if (iVar5 < 0) break;
      local_c = local_c + local_10 + local_14;
      local_8 = local_8 + local_10 + local_14;
    }
    FUN_66250bf0(&local_28);
  }
  *param_1 = local_8;
  if (param_2 != (int *)0x0) {
    *param_2 = local_c;
  }
  return iVar5;
}


