/* Module: mp3plug.dll
   Function: FUN_5f694150
   Address: 5f694150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f694150(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x28) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}


