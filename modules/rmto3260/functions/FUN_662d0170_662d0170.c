/* Module: rmto3260.dll
   Function: FUN_662d0170
   Address: 662d0170
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d0170(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 local_8;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_8 = 0;
  pvVar2 = operator_new(uVar1);
  if (pvVar2 == (void *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  if (-1 < local_8) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))(pvVar2,uVar1);
    if (uVar3 != uVar1) {
      local_8 = -0x7ffbff7f;
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return local_8;
}


