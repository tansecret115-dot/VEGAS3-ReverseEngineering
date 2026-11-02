/* Module: wmfplug2.dll
   Function: FUN_00475510
   Address: 00475510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00475510(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_00484f6c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00475e10((int)param_1);
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  return;
}


