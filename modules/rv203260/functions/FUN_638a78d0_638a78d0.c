/* Module: rv203260.dll
   Function: FUN_638a78d0
   Address: 638a78d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638a78d0(void *this,int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_638a7ea0((uint *)((int)this + 0x6b2),*(uint *)((int)this + 0xb9e),param_2);
    *(undefined4 *)((int)this + 0xb9e) = 0;
    return;
  }
  *(int *)((int)this + 0xb9e) = *(int *)((int)this + 0xb9e) + 1;
  return;
}


