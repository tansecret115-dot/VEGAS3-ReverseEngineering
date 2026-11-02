/* Module: encn3260.dll
   Function: FUN_664ae3a0
   Address: 664ae3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664ae3a0(void *this,uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int local_c;
  int *local_8;
  
  uVar3 = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)*param_2)(param_2,&DAT_664dcda0,&local_8);
  if (iVar1 == 0) {
    puVar2 = (uint *)(**(code **)(*local_8 + 0x1c))(local_8);
    if (puVar2 != (uint *)0x0) {
      uVar3 = *puVar2;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  if (uVar3 != 0) {
    iVar1 = FUN_664c3eb0((void *)((int)this + 0x21),uVar3,&local_c);
    if (iVar1 != 0) {
      FUN_664c3e40((void *)((int)this + 0x21),*param_1,local_c);
    }
  }
  return;
}


