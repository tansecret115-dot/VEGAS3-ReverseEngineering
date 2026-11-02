/* Module: sfpaplug.dll
   Function: FUN_00410650
   Address: 00410650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410650(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0044eef0;
  FUN_00410710();
  FUN_004106c0((int)param_1);
  piVar1 = (int *)param_1[0x86];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x87] != 0) {
    FUN_00410490((void *)param_1[1],param_1[0x87]);
  }
  return;
}


