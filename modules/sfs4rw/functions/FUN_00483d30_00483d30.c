/* Module: sfs4rw.dll
   Function: FUN_00483d30
   Address: 00483d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483d30(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x52);
  *(undefined4 **)((int)param_1 + 0x1d1) = puVar1;
  *puVar1 = FUN_00484210;
  puVar1[2] = &DAT_004849a0;
  puVar1[3] = &LAB_004849b0;
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
  FUN_00483dd0(param_1);
  FUN_00484050((int)param_1);
  if (*(int *)((int)param_1 + 0x82) == 2) {
    FUN_004841c0((int)param_1);
  }
  return;
}


