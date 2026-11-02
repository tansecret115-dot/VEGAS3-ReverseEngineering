/* Module: rmme3260.dll
   Function: FUN_66206ec0
   Address: 66206ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_66206ec0(void *this,int *param_1)

{
  FUN_66206ef0(this);
  if (param_1 != (int *)0x0) {
    *(int **)this = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


