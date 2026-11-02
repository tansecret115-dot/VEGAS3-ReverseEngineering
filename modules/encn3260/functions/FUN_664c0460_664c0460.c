/* Module: encn3260.dll
   Function: FUN_664c0460
   Address: 664c0460
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_664c0460(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)((int)this + 0xc) <= param_1) {
    return 0;
  }
  uVar1 = param_1 + *(int *)((int)this + 4);
  if (*(int *)(*(int *)this + 4) - 1U < uVar1) {
    uVar1 = (param_1 - *(int *)(*(int *)this + 4)) + *(int *)((int)this + 4);
  }
  return uVar1;
}


