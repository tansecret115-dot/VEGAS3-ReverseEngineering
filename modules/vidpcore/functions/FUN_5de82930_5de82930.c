/* Module: vidpcore.dll
   Function: FUN_5de82930
   Address: 5de82930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de82930(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 200) != param_2) || (*(int *)(param_1 + 0xc4) != param_3)) {
    *(int *)(param_1 + 200) = param_2;
    *(int *)(param_1 + 0xc4) = param_3;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    FUN_5de82870();
  }
  return 0;
}


