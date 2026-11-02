/* Module: rmbe3260.dll
   Function: FUN_66061440
   Address: 66061440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66061440(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1 == param_2)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}


