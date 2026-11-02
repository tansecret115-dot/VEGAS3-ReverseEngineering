/* Module: sfpaplug.dll
   Function: FUN_0040ab20
   Address: 0040ab20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040ab20(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0044e998;
  param_1[1] = &PTR_LAB_0044e984;
  FUN_0040b6f0(param_1,param_1[5]);
  FUN_0040b6f0(param_1,param_1[7]);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


