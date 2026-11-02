/* Module: rmme3260.dll
   Function: FUN_66216a80
   Address: 66216a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66216a80(void *this,int *param_1)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)((int)this + 0x3ee);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3ee) = 0;
  }
  *(int **)((int)this + 0x3ee) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


