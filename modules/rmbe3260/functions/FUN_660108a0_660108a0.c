/* Module: rmbe3260.dll
   Function: FUN_660108a0
   Address: 660108a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660108a0(int param_1,int *param_2)

{
  strncpy((char *)&param_1,*(char **)(param_1 + 4),4);
  *param_2 = param_1;
  return 0;
}


