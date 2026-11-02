/* Module: erv23260.dll
   Function: FUN_637fa680
   Address: 637fa680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fa680(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  uVar2 = 4;
  uVar3 = param_2 + param_1;
  do {
    if ((uVar3 <= param_1) ||
       (iVar1 = FUN_637ffd50((void *)((int)this + 0x18),uVar3,param_1), iVar1 == 0)) break;
    uVar3 = uVar3 - iVar1;
    *(int *)(*(int *)((int)this + 0x98) + 4 + uVar2) = iVar1;
    *(uint *)(*(int *)((int)this + 0x98) + uVar2) = uVar3;
    uVar2 = uVar2 + 4;
    local_8 = local_8 + 1;
  } while (uVar2 < 8);
  if (local_8 != 0) {
    **(int **)((int)this + 0x98) = local_8;
    return;
  }
  **(undefined4 **)((int)this + 0x98) = 0xffffffff;
  (**(code **)(*(int *)this + 4))(param_1,param_2);
  return;
}


