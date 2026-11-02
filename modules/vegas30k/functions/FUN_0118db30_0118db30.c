/* Module: vegas30k.dll
   Function: FUN_0118db30
   Address: 0118db30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0118db30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_011ea804;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[5];
  param_1[4] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[6];
  param_1[5] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[6] = 0;
  return;
}


