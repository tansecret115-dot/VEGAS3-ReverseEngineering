/* Module: rmbe3260.dll
   Function: FUN_6603da80
   Address: 6603da80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6603da80(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  local_8 = *(int *)((int)this + 8);
  while (local_8 != 0) {
    puVar1 = (undefined4 *)FUN_6605c5e0(&local_8);
    (**(code **)(*(int *)*puVar1 + 4))(param_1);
  }
  return;
}


