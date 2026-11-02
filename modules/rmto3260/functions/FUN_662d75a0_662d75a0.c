/* Module: rmto3260.dll
   Function: FUN_662d75a0
   Address: 662d75a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662d75a0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_662f06c0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}


