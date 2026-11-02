/* Module: wavplug.dll
   Function: FUN_5f390180
   Address: 5f390180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f390180(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f3caef4;
  FUN_5f390230();
  FUN_5f3901f0((int)param_1);
  piVar1 = (int *)param_1[0x86];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x87] != 0) {
    FUN_5f38ffb0((void *)param_1[1],param_1[0x87]);
  }
  return;
}


