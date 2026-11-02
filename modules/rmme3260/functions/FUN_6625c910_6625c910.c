/* Module: rmme3260.dll
   Function: FUN_6625c910
   Address: 6625c910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625c910(int param_1)

{
  void *this;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 0x44) + 4))();
  if (*(int *)(param_1 + 0x9c) != 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    this = operator_new(0x2e);
    if (this == (void *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      local_c = FUN_6625e150(this,param_1,7);
    }
    (**(code **)(*local_c + 4))(local_c);
    local_14 = 0x464;
    local_8 = 0;
    local_10 = param_1;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(&local_14,0);
    local_24 = 0x469;
    local_1c = 0;
    local_18 = 0;
    local_20 = param_1;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(&local_24,0);
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  return;
}


