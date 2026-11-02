/* Module: encn3260.dll
   Function: FUN_664be390
   Address: 664be390
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664be390(void *this,void *param_1)

{
  int local_10 [3];
  
  FUN_664bb2c0(local_10);
  (**(code **)(*(int *)this + 4))(local_10);
  FUN_664bb2e0(param_1,local_10);
  FUN_664bb3e0(local_10);
  return param_1;
}


