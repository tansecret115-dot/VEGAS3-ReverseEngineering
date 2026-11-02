/* Module: rmbe3260.dll
   Function: FUN_660110e0
   Address: 660110e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660110e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_66064ad8;
  param_1[0x12] = &PTR_LAB_66064aa8;
  param_1[0x23] = &PTR_LAB_66064a90;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x29] = 0;
  }
  FUN_660122e0((int)param_1);
  FUN_6605cdb0(param_1 + 0x24);
  FUN_66014cd0(param_1);
  return;
}


