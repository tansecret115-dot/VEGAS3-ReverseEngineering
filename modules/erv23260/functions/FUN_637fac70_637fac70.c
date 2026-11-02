/* Module: erv23260.dll
   Function: FUN_637fac70
   Address: 637fac70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fac70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_637fd360(this,param_1,1);
  if ((param_1 == 0) && (*(int *)((int)this + 0x60) != 0)) {
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 1;
  }
  FUN_637fd360(this,param_2,1);
  FUN_637fd360(this,param_3,1);
  if ((param_4 != 0) && (*(int *)((int)this + 0x60) != 0)) {
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 8;
  }
  FUN_637fd360(this,param_4,1);
  if ((param_4 != 0) && (*(int *)((int)this + 0x60) != 0)) {
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 4;
  }
  FUN_637fd360(this,param_5,1);
  if ((param_5 != 0) && (*(int *)((int)this + 0x60) != 0)) {
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) | 2;
  }
  return;
}


