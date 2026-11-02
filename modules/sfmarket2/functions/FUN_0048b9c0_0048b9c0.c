/* Module: sfmarket2.dll
   Function: FUN_0048b9c0
   Address: 0048b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048b9c0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x52);
  *(undefined4 **)((int)param_1 + 0x1d1) = puVar1;
  *puVar1 = FUN_0048bea0;
  puVar1[2] = &DAT_0048c630;
  puVar1[3] = &LAB_0048c640;
  *(undefined4 *)((int)puVar1 + 0x41) = 0;
  *(undefined4 *)((int)puVar1 + 0x31) = 0;
  if (4 < *(int *)((int)param_1 + 0x96)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < *(int *)((int)param_1 + 0x87)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  FUN_0048ba60(param_1);
  FUN_0048bce0((int)param_1);
  if (*(int *)((int)param_1 + 0x82) == 2) {
    FUN_0048be50((int)param_1);
  }
  return;
}


