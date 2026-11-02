/* Module: rmme3260.dll
   Function: FUN_66236390
   Address: 66236390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66236390(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  *param_2 = (int)piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


