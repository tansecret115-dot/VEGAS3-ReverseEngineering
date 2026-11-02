/* Module: rmme3260.dll
   Function: FUN_6625c7e0
   Address: 6625c7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625c7e0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80040009;
  if (*(int *)((int)this + 0x36) != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 4))();
    uVar1 = (**(code **)**(undefined4 **)((int)this + 0x36))(param_1,param_2);
    (**(code **)(**(int **)((int)this + 0x44) + 8))();
  }
  return uVar1;
}


