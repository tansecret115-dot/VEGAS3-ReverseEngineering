/* Module: sdpp3260.dll
   Function: FUN_10001050
   Address: 10001050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10001050(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x10) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  return 0;
}


