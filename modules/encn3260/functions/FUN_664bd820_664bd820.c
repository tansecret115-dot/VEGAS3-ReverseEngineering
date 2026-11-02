/* Module: encn3260.dll
   Function: FUN_664bd820
   Address: 664bd820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664bd820(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char *local_14 [3];
  int local_8;
  
  piVar2 = operator_new(0x6c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)&PTR_LAB_664ddfd0;
    piVar2[1] = 0;
    FUN_664bdbb0(piVar2 + 2,10);
    FUN_664bdbb0(piVar2 + 9,10);
    FUN_664bdbb0(piVar2 + 0x10,10);
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
    *piVar2 = (int)&PTR_FUN_664ddf90;
  }
  piVar1 = param_1;
  *param_1 = (int)piVar2;
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  param_1 = (int *)0x0;
  piVar2 = (int *)FUN_664bd7a0(local_8);
  FUN_664bb2c0(local_14);
  while (piVar2 != (int *)0x0) {
    thunk_FUN_664bb280((int *)local_14);
    (**(code **)(*piVar2 + 4))(local_14);
    FUN_664bb0e0(local_14[0],&param_1);
    (**(code **)(*(int *)*piVar1 + 0x2c))((int *)*piVar1,piVar2[1],param_1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      param_1 = (int *)0x0;
    }
    piVar2 = (int *)FUN_664bd7c0(local_8);
  }
  FUN_664bb3e0((int *)local_14);
  return 0;
}


