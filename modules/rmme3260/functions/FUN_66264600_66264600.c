/* Module: rmme3260.dll
   Function: FUN_66264600
   Address: 66264600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66264600(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80004005;
}


