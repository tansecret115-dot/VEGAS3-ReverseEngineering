/* Module: erv23260.dll
   Function: FUN_637fabe0
   Address: 637fabe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fabe0(void *this,int param_1)

{
  FUN_637fd360(this,param_1,8);
  if (*(int *)((int)this + 0x60) != 0) {
    *(char *)((int)this + 0x54) = (char)param_1;
  }
  return;
}


