/* Module: rmme3260.dll
   Function: FUN_66243b70
   Address: 66243b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66243b70(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((*(int **)((int)this + 0x1d) != (int *)0x0) &&
     ((int *)**(int **)((int)this + 0x1d) == param_1)) {
    *(undefined4 *)((int)this + 0x1d) = 0;
  }
  (**(code **)*param_1)(param_1,&DAT_6626abe8,&local_8);
  piVar3 = param_1;
  if (local_8 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*local_8 + 0x1c))(local_8);
    piVar3 = param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  if (piVar3 != (int *)0x0) {
    param_1 = (int *)0x0;
    FUN_66251030((void *)((int)this + 0x21),(uint)piVar3,(int *)&param_1);
    piVar1 = param_1;
    if (param_1 != (int *)0x0) {
      FUN_66243690(param_1);
      operator_delete(piVar1);
    }
    FUN_66251160((void *)((int)this + 0x21),piVar3);
  }
  if (*(int *)((int)this + 0x2d) == 0) {
    FUN_662438e0((int)this);
  }
  return;
}


