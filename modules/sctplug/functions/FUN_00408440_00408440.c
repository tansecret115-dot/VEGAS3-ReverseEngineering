/* Module: sctplug.dll
   Function: FUN_00408440
   Address: 00408440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408440(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_004327a0;
  param_1[1] = &PTR_LAB_0043278c;
  FUN_00408dc0(param_1,param_1[5]);
  FUN_00408dc0(param_1,param_1[7]);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


