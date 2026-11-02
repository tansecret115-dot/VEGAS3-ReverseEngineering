/* Module: rmme3260.dll
   Function: FUN_6620ef10
   Address: 6620ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6620ef10(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar2 = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xf4)) {
    do {
      uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x100) + 8 + iVar2) + 0x18))
                        (param_1,param_2);
      if ((uVar1 == 0) && (*param_2 < local_c)) {
        local_c = *param_2;
      }
      local_10 = local_10 | uVar1;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x14;
    } while (local_8 < *(int *)((int)this + 0xf4));
  }
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x104)) {
    do {
      uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x108) + 4 + iVar2) + 0x18))
                        (param_1,param_2);
      if ((uVar1 == 0) && (*param_2 < local_c)) {
        local_c = *param_2;
      }
      local_10 = local_10 | uVar1;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x26;
    } while (local_8 < *(int *)((int)this + 0x104));
  }
  *param_2 = local_c;
  *(uint *)((int)this + 0x24) = local_10;
  return;
}


