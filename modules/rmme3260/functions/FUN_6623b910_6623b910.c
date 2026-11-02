/* Module: rmme3260.dll
   Function: FUN_6623b910
   Address: 6623b910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6623b910(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x6c);
  if ((piVar1 != this) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  *(int **)((int)this + 0x6c) = param_1;
  if ((param_1 != (int *)0x0) && (param_1 != this)) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  if (DAT_6627cfd0 != 0) {
    FUN_6623d610((int)this);
  }
  return;
}


