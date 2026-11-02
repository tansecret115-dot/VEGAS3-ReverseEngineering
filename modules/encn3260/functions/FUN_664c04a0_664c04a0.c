/* Module: encn3260.dll
   Function: FUN_664c04a0
   Address: 664c04a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c04a0(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)((int)this + 0xc) <= param_1) {
    param_1 = 0;
  }
  uVar1 = FUN_664c0460(this,param_1);
  return **(int **)this + uVar1 * 4;
}


