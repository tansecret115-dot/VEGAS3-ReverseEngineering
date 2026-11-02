/* Module: erv23260.dll
   Function: FUN_63800370
   Address: 63800370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63800370(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_637fd250((int)this);
  FUN_637ff8c0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),(char)iVar1);
  FUN_637fd360(this,*(int *)(&DAT_6382a8f4 + (~param_1 & 0xf) * 8),
               *(int *)(&DAT_6382a8f0 + (~param_1 & 0xf) * 8));
  iVar1 = FUN_637fd250((int)this);
  FUN_637ff8e0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),(char)iVar1);
  return;
}


