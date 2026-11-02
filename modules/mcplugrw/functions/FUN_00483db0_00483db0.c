/* Module: mcplugrw.dll
   Function: FUN_00483db0
   Address: 00483db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483db0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x52);
  *(undefined4 **)((int)param_1 + 0x1d1) = puVar1;
  *puVar1 = FUN_00484290;
  puVar1[2] = &DAT_00484a20;
  puVar1[3] = &LAB_00484a30;
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
  FUN_00483e50(param_1);
  FUN_004840d0((int)param_1);
  if (*(int *)((int)param_1 + 0x82) == 2) {
    FUN_00484240((int)param_1);
  }
  return;
}


