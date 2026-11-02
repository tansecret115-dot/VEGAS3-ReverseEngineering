/* Module: rmme3260.dll
   Function: FUN_6622a890
   Address: 6622a890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6622a890(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x61];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x61] = 0;
  }
  if (param_1[0x62] != 0) {
    FUN_6622cf80(param_1[0x62]);
    piVar1 = (int *)param_1[0x62];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x62] = 0;
    }
  }
  if ((void *)param_1[0x68] != (void *)0x0) {
    operator_delete((void *)param_1[0x68]);
    param_1[0x68] = 0;
  }
  piVar1 = (int *)param_1[0x69];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x69] = 0;
  }
  if ((void *)param_1[0x6b] != (void *)0x0) {
    operator_delete((void *)param_1[0x6b]);
    param_1[0x6b] = 0;
  }
  piVar1 = (int *)param_1[0x6c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x6c] = 0;
  }
  FUN_66224b50(param_1);
  return;
}


