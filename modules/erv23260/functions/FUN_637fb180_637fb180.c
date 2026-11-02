/* Module: erv23260.dll
   Function: FUN_637fb180
   Address: 637fb180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb180(void *this,int param_1)

{
  FUN_637fd360(this,param_1,3);
  if (*(int *)((int)this + 0x60) != 0) {
    *(char *)((int)this + 0x55) = (char)param_1;
  }
  return;
}


