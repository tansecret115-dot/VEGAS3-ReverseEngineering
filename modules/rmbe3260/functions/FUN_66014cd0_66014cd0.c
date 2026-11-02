/* Module: rmbe3260.dll
   Function: FUN_66014cd0
   Address: 66014cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66014cd0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_66066408;
  param_1[0x12] = &PTR_LAB_660663d8;
  FUN_66015150((uint)param_1);
  FUN_660158c0((int)param_1);
  piVar1 = (int *)param_1[0x1f];
  param_1[0x19] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14] = 0;
  }
  FUN_6605b770(param_1 + 0x1a);
  FUN_6605cdb0(param_1 + 0x15);
  FUN_66014800(param_1);
  return;
}


