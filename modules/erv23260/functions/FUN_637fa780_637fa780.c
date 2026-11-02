/* Module: erv23260.dll
   Function: FUN_637fa780
   Address: 637fa780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fa780(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x7c) = param_1;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x70) * param_2;
  *(int *)((int)this + 0x80) = param_2;
  *(undefined4 *)((int)this + 0x8c) = param_3;
  iVar1 = FUN_637fd250((int)this);
  FUN_637ff8a0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),iVar1);
  return;
}


