/* Module: encn3260.dll
   Function: FUN_664a62e0
   Address: 664a62e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a62e0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  *param_2 = (int)piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


