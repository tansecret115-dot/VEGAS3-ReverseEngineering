/* Module: sftrans1.dll
   Function: FUN_0048c760
   Address: 0048c760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0048c760(int param_1,int param_2,undefined4 param_3)

{
  int local_8 [2];
  
  param_2 = *(int *)(param_1 + 0x100) + param_2;
  if (param_2 < 0) {
    local_8[0] = 0;
  }
  else {
    local_8[0] = **(int **)(param_1 + 0xa4) + -1;
    if (param_2 <= local_8[0]) {
      local_8[0] = param_2;
    }
  }
  local_8[1] = 0;
  FUN_0048c640(local_8,param_3);
  return;
}


