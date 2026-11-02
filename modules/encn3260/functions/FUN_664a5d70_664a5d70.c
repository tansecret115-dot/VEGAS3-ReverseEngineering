/* Module: encn3260.dll
   Function: FUN_664a5d70
   Address: 664a5d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a5d70(void *this,int *param_1)

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
  if (DAT_664f07c8 != 0) {
    FUN_664a7a70((int)this);
  }
  return;
}


