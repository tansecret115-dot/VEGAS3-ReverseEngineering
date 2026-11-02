/* Module: rmme3260.dll
   Function: FUN_66232aa0
   Address: 66232aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66232aa0(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(int **)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_6626c078;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


