/* Module: vidcap30.exe
   Function: FUN_0042ed90
   Address: 0042ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_0042ed90(int param_1)

{
  double dVar1;
  
  FUN_0042f4b0(param_1,0);
  dVar1 = *(double *)((*(int *)(param_1 + 0x518) + 0x11) * 0x40 + param_1);
  FUN_0042f5d0(param_1,0);
  return (float10)dVar1;
}


