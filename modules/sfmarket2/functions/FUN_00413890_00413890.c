/* Module: sfmarket2.dll
   Function: FUN_00413890
   Address: 00413890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00413890(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_004963c8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}


