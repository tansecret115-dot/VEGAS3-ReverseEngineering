/* Module: rmbe3260.dll
   Function: FUN_6600aa00
   Address: 6600aa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6600aa00(void *this,int param_1)

{
  if (*(int *)(param_1 + 8) == -0x80000000) {
    if (*(int *)(param_1 + 0x18) == 0x460) {
      FUN_66016b20();
      (**(code **)(*(int *)this + 300))(0);
    }
    else if (*(int *)(param_1 + 0x18) == 0x461) {
      (**(code **)(*(int *)this + 300))(0);
      return;
    }
  }
  return;
}


