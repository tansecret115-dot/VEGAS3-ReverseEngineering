/* Module: rmto3260.dll
   Function: FUN_662ce030
   Address: 662ce030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ce030(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_663070e0;
  param_1[4] = &PTR_LAB_663070c0;
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
  FUN_662ce0a0((int)param_1);
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x10] = 0;
  }
  *param_1 = &PTR_FUN_66306400;
  return;
}


