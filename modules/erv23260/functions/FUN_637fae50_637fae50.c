/* Module: erv23260.dll
   Function: FUN_637fae50
   Address: 637fae50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fae50(void *this,byte *param_1)

{
  FUN_637fd360(this,(uint)*param_1,4);
  FUN_637fd360(this,(*(uint *)(param_1 + 4) >> 2) - 1,9);
  FUN_637fd360(this,1,1);
  FUN_637fd360(this,*(uint *)(param_1 + 8) >> 2,9);
  return;
}


