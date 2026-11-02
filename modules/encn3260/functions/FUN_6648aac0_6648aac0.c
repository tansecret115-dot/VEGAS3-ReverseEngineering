/* Module: encn3260.dll
   Function: FUN_6648aac0
   Address: 6648aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6648aac0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_664de138;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x30) + 4))(param_1 + 0x30);
  }
  return this;
}


