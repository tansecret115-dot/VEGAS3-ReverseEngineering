/* Module: rv303260.dll
   Function: FUN_672080c0
   Address: 672080c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_672080c0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x82) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x82))(param_1,*(undefined4 *)((int)this + 0x9a));
    return uVar1;
  }
  return 0x6f;
}


