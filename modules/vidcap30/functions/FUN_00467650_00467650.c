/* Module: vidcap30.exe
   Function: FUN_00467650
   Address: 00467650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00467650(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  
  if (0 < param_3) {
    param_1 = param_1 - (int)param_2;
    do {
      (**(code **)(*(int *)*param_2 + 0x10))((int *)*param_2);
      (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
      piVar1 = *(int **)(param_1 + (int)param_2);
      (**(code **)(*piVar1 + 8))(piVar1);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


