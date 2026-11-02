/* Module: vidpcore.dll
   Function: FUN_5df08b60
   Address: 5df08b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df08b60(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 4) - *(int *)(param_1 + 8) * *(int *)(param_2 + 0x10)) -
         *(int *)(param_2 + 8) * param_3;
}


