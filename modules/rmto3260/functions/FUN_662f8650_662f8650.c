/* Module: rmto3260.dll
   Function: FUN_662f8650
   Address: 662f8650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662f8650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0xe4))(param_1,param_2,param_3);
  }
  return;
}


