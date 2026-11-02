/* Module: wavplug.dll
   Function: FUN_5f38b1b0
   Address: 5f38b1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f38b1b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5f3cacb8;
  param_1[1] = &PTR_LAB_5f3caca8;
  FUN_5f38b280();
  FUN_5f38b230((int)param_1);
  piVar1 = (int *)param_1[0x87];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x88] != 0) {
    FUN_5f38b120((void *)param_1[2],param_1[0x88]);
  }
  return;
}


