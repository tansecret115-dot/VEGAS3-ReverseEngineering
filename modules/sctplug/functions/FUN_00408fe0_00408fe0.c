/* Module: sctplug.dll
   Function: FUN_00408fe0
   Address: 00408fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408fe0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00432838;
  FUN_00409090();
  FUN_00409050((int)param_1);
  piVar1 = (int *)param_1[0x86];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x87] != 0) {
    FUN_00408dc0((void *)param_1[1],param_1[0x87]);
  }
  return;
}


