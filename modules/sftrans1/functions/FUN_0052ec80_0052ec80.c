/* Module: sftrans1.dll
   Function: FUN_0052ec80
   Address: 0052ec80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052ec80(int param_1,int param_2,int param_3)

{
  return (*(int *)(param_1 + 4) - *(int *)(param_1 + 8) * *(int *)(param_2 + 0x10)) -
         *(int *)(param_2 + 8) * param_3;
}


