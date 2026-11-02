/* Module: aviplug.dll
   Function: FUN_5f93ce10
   Address: 5f93ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f93ce10(void *this,int *param_1)

{
  *(int **)((int)this + 8) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


