/* Module: rmbe3260.dll
   Function: FUN_66048280
   Address: 66048280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66048280(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(ushort *)((int)this + 0x38) < 4) {
    return -0x7ffbfffc;
  }
  local_8 = 0;
  local_c = (**(code **)(**(int **)((int)this + 4) + 0x24))();
  *param_1 = 0;
  iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x20))(8,0);
  local_10 = FUN_66055bb0(0x52615443);
  bVar3 = false;
  while ((iVar2 == 0 && (!bVar3))) {
    sVar1 = (**(code **)(**(int **)((int)this + 4) + 0x28))(&local_20,8);
    local_18 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
    if (sVar1 != 8) {
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
    if (iVar2 == 0) {
      local_14 = FUN_66055be0(local_1c);
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
      local_1c = FUN_66055bb0(iVar2 + -8);
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x20))(local_c,0);
      if (iVar2 == 0) {
        sVar1 = (**(code **)(**(int **)((int)this + 4) + 0x30))(&local_20,8);
        if (sVar1 != 8) {
          iVar2 = (**(code **)(**(int **)((int)this + 4) + 4))();
        }
        if (iVar2 == 0) {
          local_c = (**(code **)(**(int **)((int)this + 4) + 0x24))();
          local_8 = local_8 + 1;
        }
      }
    }
    bVar3 = local_20 == local_10;
    if (!bVar3) {
      if (iVar2 != 0) break;
      iVar2 = (**(code **)(**(int **)((int)this + 4) + 0x20))(local_18 + local_14,0);
    }
  }
  *param_1 = local_8 * 8;
  return iVar2;
}


