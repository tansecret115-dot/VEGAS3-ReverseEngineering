/* Module: rmto3260.dll
   Function: FUN_662c2270
   Address: 662c2270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c2270(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    FUN_662f06c0(piVar1);
    operator_delete(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}


