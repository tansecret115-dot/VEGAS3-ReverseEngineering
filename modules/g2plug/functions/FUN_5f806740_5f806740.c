/* Module: g2plug.dll
   Function: FUN_5f806740
   Address: 5f806740
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __fastcall FUN_5f806740(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(piVar1,param_1 + 0x18);
  }
  return (float10)*(double *)(param_1 + 0x18);
}


