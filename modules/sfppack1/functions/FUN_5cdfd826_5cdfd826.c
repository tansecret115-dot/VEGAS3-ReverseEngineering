/* Module: sfppack1.dll
   Function: FUN_5cdfd826
   Address: 5cdfd826
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdfd826(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_5ce1a570;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))((int *)(param_1 + 0xc));
  if (param_1 == 0) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 0x10))();
  }
  else {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return this;
}


