/* Module: encn3260.dll
   Function: FUN_664a53f0
   Address: 664a53f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a53f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar1 = (int *)(*(int *)((int)this + 0x10) + 4);
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_8);
  if (iVar2 == 0) {
    if (local_8 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)(*(int *)((int)this + 0x10) + 8);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(piVar1);
    local_20 = param_1;
    local_1c = *puVar3;
    local_14 = param_3;
    local_18 = param_2;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*local_8 + 0x14))(local_8,&local_20);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


