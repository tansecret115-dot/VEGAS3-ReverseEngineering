/* Module: mcplug.dll
   Function: FUN_00408ec0
   Address: 00408ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408ec0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00476aa0;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


