/* Module: rmme3260.dll
   Function: FUN_66264540
   Address: 66264540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66264540(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  return 0;
}


