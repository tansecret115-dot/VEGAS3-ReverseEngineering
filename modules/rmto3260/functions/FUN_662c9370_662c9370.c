/* Module: rmto3260.dll
   Function: FUN_662c9370
   Address: 662c9370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c9370(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && (piVar1 == param_2)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 0;
}


