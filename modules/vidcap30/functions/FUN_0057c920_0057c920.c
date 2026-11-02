/* Module: vidcap30.exe
   Function: FUN_0057c920
   Address: 0057c920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057c920(int param_1,undefined2 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *param_2 = 0;
  }
  else {
    FUN_00582b00(param_2,*(int *)(param_1 + 0x30),0x80);
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x34);
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}


