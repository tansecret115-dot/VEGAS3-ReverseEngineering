/* Module: rmbe3260.dll
   Function: FUN_66013350
   Address: 66013350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013350(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  *(int **)(param_1 + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


