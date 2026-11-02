/* Module: erv23260.dll
   Function: FUN_637fd2f0
   Address: 637fd2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fd2f0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 0xc) + param_1;
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (uVar1 >> 3);
  *(uint *)((int)this + 0xc) = uVar1 & 7;
  return;
}


