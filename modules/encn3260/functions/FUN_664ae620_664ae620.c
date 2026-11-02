/* Module: encn3260.dll
   Function: FUN_664ae620
   Address: 664ae620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664ae620(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  void *this_00;
  undefined4 *puVar3;
  int *piVar4;
  int *local_8;
  
  piVar1 = param_1;
  local_8 = (int *)0x0;
  (**(code **)*param_1)(param_1,&DAT_664dcda0,&local_8);
  piVar4 = param_1;
  if (local_8 != (int *)0x0) {
    puVar2 = (uint *)(**(code **)(*local_8 + 0x1c))(local_8);
    piVar4 = param_1;
    if (puVar2 != (uint *)0x0) {
      piVar4 = (int *)*puVar2;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  if (piVar4 != (int *)0x0) {
    this_00 = operator_new(0x10);
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_664ae1b0(this_00,piVar1,param_2);
    }
    param_1 = (int *)0x0;
    FUN_664c3eb0((void *)((int)this + 0x21),(uint)piVar4,(int *)&param_1);
    FUN_664c3e40((void *)((int)this + 0x21),(uint)piVar4,(int)puVar3);
    FUN_664ae490((int)this);
  }
  return;
}


