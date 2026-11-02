/* Module: encn3260.dll
   Function: FUN_664d01a0
   Address: 664d01a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d01a0(int param_1,int param_2,int *param_3)

{
  int local_8;
  
  local_8 = 0;
  FUN_664cf5e0(*(void **)(**(int **)(param_1 + 8) + param_2 * 4),&local_8);
  FUN_66494490();
  if (local_8 != 0) {
    *param_3 = local_8;
    return 0;
  }
  return 0x80004002;
}


