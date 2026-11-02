/* Module: rmbe3260.dll
   Function: FUN_660099a0
   Address: 660099a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660099a0(void *this,int param_1)

{
  if (*(int *)(param_1 + 8) == -0x80000000) {
    if (*(int *)(param_1 + 0x18) == 0x411) {
      (**(code **)(*(int *)this + 300))(0);
    }
    else if (*(int *)(param_1 + 0x18) == 0x412) {
      (**(code **)(*(int *)this + 300))(1);
      return;
    }
  }
  return;
}


