/* Module: wmfplug2.dll
   Function: FUN_00406c90
   Address: 00406c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406c90(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(param_1 + 0x28) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  FUN_00406ed0(param_1);
  FUN_00407490(param_1);
  return 0;
}


