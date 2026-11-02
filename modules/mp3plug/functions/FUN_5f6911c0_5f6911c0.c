/* Module: mp3plug.dll
   Function: FUN_5f6911c0
   Address: 5f6911c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6911c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5f72ce28;
  param_1[1] = &PTR_LAB_5f72ce14;
  param_1[2] = &PTR_LAB_5f72cdf0;
  param_1[3] = &PTR_LAB_5f72cdd4;
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


