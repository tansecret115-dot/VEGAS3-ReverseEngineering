/* Module: rmbe3260.dll
   Function: FUN_66045eb0
   Address: 66045eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66045eb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0xe4))(param_1,param_2,param_3);
  }
  return;
}


