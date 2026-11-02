/* Module: rv303260.dll
   Function: FUN_672079c0
   Address: 672079c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_672079c0(void *this,int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_67207f40((uint *)((int)this + 0x652),*(uint *)((int)this + 0xb3e),param_2);
    *(undefined4 *)((int)this + 0xb3e) = 0;
    return;
  }
  *(int *)((int)this + 0xb3e) = *(int *)((int)this + 0xb3e) + 1;
  return;
}


