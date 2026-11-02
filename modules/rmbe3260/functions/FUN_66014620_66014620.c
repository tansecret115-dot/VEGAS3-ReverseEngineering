/* Module: rmbe3260.dll
   Function: FUN_66014620
   Address: 66014620
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66014620(void *this,int *param_1)

{
  FUN_66014790(this);
  if (param_1 != (int *)0x0) {
    *(int **)this = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


