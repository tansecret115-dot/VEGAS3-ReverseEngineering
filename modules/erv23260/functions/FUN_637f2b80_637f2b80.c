/* Module: erv23260.dll
   Function: FUN_637f2b80
   Address: 637f2b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f2b80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 0x2c0) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x2c0) + 4))(param_1);
    return uVar1;
  }
  *param_1 = 0;
  return 5;
}


