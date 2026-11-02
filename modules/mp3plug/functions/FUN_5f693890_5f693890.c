/* Module: mp3plug.dll
   Function: FUN_5f693890
   Address: 5f693890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f693890(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f72cf68;
  param_1[1] = &PTR_LAB_5f72cf50;
  FUN_5f693940((int)param_1);
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


