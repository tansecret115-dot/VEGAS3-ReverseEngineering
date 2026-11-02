/* Module: sftrans1.dll
   Function: FUN_004864f0
   Address: 004864f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004864f0(int param_1,int param_2)

{
  return (*(int *)(param_1 + 0x38) * param_2 - *(int *)(param_1 + 0xec)) + *(int *)(param_1 + 0x98);
}


