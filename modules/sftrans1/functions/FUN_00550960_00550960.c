/* Module: sftrans1.dll
   Function: FUN_00550960
   Address: 00550960
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __thiscall FUN_00550960(int param_1,int param_2)

{
  return ((float10)(param_2 - *(int *)(param_1 + 0x138)) /
         (float10)(*(int *)(param_1 + 0x140) - *(int *)(param_1 + 0x138))) *
         (float10)*(double *)(param_1 + 0xb0) + (float10)*(double *)(param_1 + 0xa8);
}


