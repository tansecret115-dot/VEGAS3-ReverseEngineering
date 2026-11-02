/* Module: rmto3260.dll
   Function: FUN_662f5c50
   Address: 662f5c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662f5c50(void *this,int *param_1)

{
  *(int **)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_66307e78;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


