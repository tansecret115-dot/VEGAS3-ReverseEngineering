/* Module: rmbe3260.dll
   Function: FUN_66059160
   Address: 66059160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66059160(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x14];
  *param_1 = &PTR_FUN_66068b70;
  param_1[4] = &PTR_LAB_66068b38;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14] = 0;
  }
  piVar1 = (int *)param_1[0x15];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x15] = 0;
  }
  FUN_66059a40((int)param_1);
  if ((void *)param_1[0xc] != (void *)0x0) {
    FUN_66059c60((void *)param_1[0xc]);
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
  }
  *param_1 = &PTR_FUN_66063e30;
  return;
}


