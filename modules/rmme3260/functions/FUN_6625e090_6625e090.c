/* Module: rmme3260.dll
   Function: FUN_6625e090
   Address: 6625e090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625e090(int param_1)

{
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x90) = 1;
  local_c = 0;
  local_8 = 0;
  local_14 = 0x46a;
  local_10 = param_1;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(&local_14,0);
  return;
}


