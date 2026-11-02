/* Module: vidcap30.exe
   Function: FUN_0042ee90
   Address: 0042ee90
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_0042ee90(int param_1)

{
  double dVar1;
  
  FUN_0042f4b0(param_1,0);
  dVar1 = *(double *)(*(int *)(param_1 + 0x518) * 0x40 + 0x448 + param_1);
  FUN_0042f5d0(param_1,0);
  return (float10)dVar1;
}


