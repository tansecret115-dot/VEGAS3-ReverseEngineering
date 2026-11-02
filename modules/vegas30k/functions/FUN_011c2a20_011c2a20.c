/* Module: vegas30k.dll
   Function: FUN_011c2a20
   Address: 011c2a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c2a20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011ec0ec;
  if (param_1[7] != 0) {
    (**(code **)(*(int *)param_1[6] + 0x34))((int *)param_1[6],param_1[7]);
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7]);
  }
  if (param_1[8] != 0) {
    (**(code **)(*(int *)param_1[6] + 0x34))((int *)param_1[6],param_1[8]);
    (**(code **)(*(int *)param_1[8] + 8))((int *)param_1[8]);
  }
  (**(code **)(*(int *)param_1[6] + 0x30))((int *)param_1[6]);
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  piVar1 = (int *)param_1[6];
  param_1[5] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[6] = 0;
  return;
}


