/* Module: rmme3260.dll
   Function: FUN_6621d7e0
   Address: 6621d7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6621d7e0(void *this,undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_14;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_c = 0xffffffff;
  local_14 = 0;
  uVar2 = 0;
  if (0 < *(int *)((int)this + 0xe4)) {
    do {
      iVar1 = *(int *)((int)this + 0xec);
      iVar3 = 0;
      if (-1 < *(int *)(iVar4 + 4 + iVar1) + -1) {
        do {
          uVar2 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar4 + iVar1) + iVar3 * 4) + 0x18
                              ))(param_1,param_2);
          if ((uVar2 == 0) && (*param_2 < local_c)) {
            local_c = *param_2;
          }
          local_8 = local_8 | uVar2;
          iVar3 = iVar3 + 1;
          iVar1 = *(int *)((int)this + 0xec);
        } while (iVar3 <= *(int *)(iVar4 + 4 + iVar1) + -1);
      }
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 0x3a;
      uVar2 = local_8;
    } while (local_14 < *(int *)((int)this + 0xe4));
  }
  *param_2 = local_c;
  *(uint *)((int)this + 0x24) = uVar2;
  return;
}


