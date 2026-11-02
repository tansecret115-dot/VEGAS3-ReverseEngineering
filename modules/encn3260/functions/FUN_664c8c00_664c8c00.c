/* Module: encn3260.dll
   Function: FUN_664c8c00
   Address: 664c8c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c8c00(int param_1)

{
  void *this;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  this = operator_new(0x2e);
  if (this == (void *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = FUN_664c9e00(this,param_1,6);
  }
  (**(code **)(*local_c + 4))(local_c);
  local_14 = 0x464;
  local_8 = 0;
  local_10 = param_1;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(&local_14,0);
  return;
}


