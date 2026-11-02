/* Module: sftrans1.dll
   Function: FUN_005509a0
   Address: 005509a0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_005509a0(int param_1,int param_2)

{
  return ((float10)(*(int *)(param_1 + 0x144) - param_2) /
         (float10)(*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x13c))) *
         (float10)*(double *)(param_1 + 0xc0) + (float10)*(double *)(param_1 + 0xb8);
}


