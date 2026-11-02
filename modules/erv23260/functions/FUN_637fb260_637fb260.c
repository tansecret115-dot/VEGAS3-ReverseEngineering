/* Module: erv23260.dll
   Function: FUN_637fb260
   Address: 637fb260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb260(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    if (param_1 == 0) {
      FUN_637fd710((int)this);
    }
    iVar1 = FUN_637fd250((int)this);
    FUN_637ffa70((void *)((int)this + 0x18),*(int *)((int)this + 0x88),iVar1);
  }
  FUN_637fd360(this,1,0x11);
  FUN_637fd360(this,*(int *)((int)this + 0x7c),5);
  FUN_637fd360(this,0,2);
  FUN_637fd360(this,*(int *)((int)this + 0x8c),5);
  return;
}


