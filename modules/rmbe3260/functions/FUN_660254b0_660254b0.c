/* Module: rmbe3260.dll
   Function: FUN_660254b0
   Address: 660254b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660254b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[5];
  *param_1 = &PTR_FUN_66067238;
  param_1[4] = &PTR_LAB_660671e0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  *param_1 = &PTR_FUN_66063e30;
  return;
}


