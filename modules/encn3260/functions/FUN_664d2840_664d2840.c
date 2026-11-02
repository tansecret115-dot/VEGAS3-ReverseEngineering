/* Module: encn3260.dll
   Function: FUN_664d2840
   Address: 664d2840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d2840(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(int **)(param_1 + 0x14) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


