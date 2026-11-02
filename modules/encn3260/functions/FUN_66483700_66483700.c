/* Module: encn3260.dll
   Function: FUN_66483700
   Address: 66483700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66483700(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined2 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 9) = 0;
  FUN_664ba900((undefined4 *)((int)this + 0xd));
  return this;
}


