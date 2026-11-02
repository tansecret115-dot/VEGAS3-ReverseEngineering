/* Module: erv33260.dll
   Function: FUN_6707af40
   Address: 6707af40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707af40(void *this,int param_1)

{
  FUN_6707d6f0((int)this,*(int *)(param_1 + 0x44),4);
  FUN_6707d6f0((int)this,(*(uint *)(param_1 + 4) >> 2) - 1,9);
  FUN_6707d6f0((int)this,1,1);
  FUN_6707d6f0((int)this,*(uint *)(param_1 + 8) >> 2,9);
  return;
}


