/* Module: erv23260.dll
   Function: FUN_637fac10
   Address: 637fac10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fac10(void *this,int param_1,int param_2,int param_3,int param_4)

{
  FUN_637fd360(this,2,2);
  FUN_637fd360(this,param_1,1);
  FUN_637fd360(this,param_2,1);
  FUN_637fd360(this,param_3,1);
  FUN_637fd360(this,param_4,3);
  if (*(int *)((int)this + 0x60) != 0) {
    *(int *)((int)this + 0x50) = param_4;
  }
  return;
}


