/* Module: oggplug.dll
   Function: FUN_00407180
   Address: 00407180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00407180(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00447a0c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[2] = 0;
  return;
}


