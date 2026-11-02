/* Module: rmto3260.dll
   Function: FUN_662cc8e0
   Address: 662cc8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662cc8e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_66307090;
  param_1[4] = &PTR_LAB_66307070;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    FUN_662f06c0(piVar1);
    operator_delete(piVar1);
    param_1[10] = 0;
  }
  FUN_662cc5b0((int)param_1);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  *param_1 = &PTR_FUN_66306400;
  return;
}


