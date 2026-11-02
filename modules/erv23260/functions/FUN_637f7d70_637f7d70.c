/* Module: erv23260.dll
   Function: FUN_637f7d70
   Address: 637f7d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f7d70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x10) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x10) + 8))(param_1);
    return uVar1;
  }
  *param_1 = 0;
  return 5;
}


