/* Module: rmbe3260.dll
   Function: FUN_6602eb60
   Address: 6602eb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602eb60(int param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 8) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    (**(code **)**(undefined4 **)(param_1 + 8))
              (*(undefined4 **)(param_1 + 8),&DAT_66065058,param_1 + 0x10);
    return 0;
  }
  return 0x80004005;
}


