/* Module: vegas30k.dll
   Function: FUN_0113d320
   Address: 0113d320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113d320(int param_1,int *param_2)

{
  if ((*(int *)(param_1 + 300) == 0) && (*(int *)(param_1 + 8) == 0)) {
    *(int **)(param_1 + 300) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  return 0x80040204;
}


