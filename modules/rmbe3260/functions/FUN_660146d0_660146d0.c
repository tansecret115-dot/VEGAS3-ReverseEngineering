/* Module: rmbe3260.dll
   Function: FUN_660146d0
   Address: 660146d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_660146d0(void *this,undefined4 *param_1)

{
  FUN_66014790(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_660658e8,this);
  }
  return this;
}


