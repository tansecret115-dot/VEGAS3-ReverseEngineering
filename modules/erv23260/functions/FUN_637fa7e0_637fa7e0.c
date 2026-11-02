/* Module: erv23260.dll
   Function: FUN_637fa7e0
   Address: 637fa7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fa7e0(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x84) = param_1;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x80) * *(int *)((int)this + 0x70) + param_1;
  iVar1 = FUN_637fd250((int)this);
  if (*(int *)((int)this + 0x84) != 0) {
    FUN_637ff8a0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),iVar1);
  }
  return;
}


